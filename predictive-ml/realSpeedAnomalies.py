#!/usr/bin/env python3

import pandas as pd
import matplotlib.pyplot as plt

# Load your data
df = pd.read_csv('combined_real_logs.csv')

# Convert Timestamp to datetime
df['Timestamp'] = pd.to_datetime(df['Timestamp'])

# Extract date part
df['Date'] = df['Timestamp'].dt.date

# Filter for March 25, 2025 only
target_date = pd.to_datetime('2025-03-25').date()
df = df[df['Date'] == target_date]

# Extract 'minute' component
df['Minute'] = df['Timestamp'].dt.strftime('%Y-%m-%d %H:%M')

# Find the most common minute (assuming the test is a batch of logs within a single minute)
most_common_minute = df['Minute'].mode()[0]

# Keep only rows from that specific minute
df = df[df['Minute'] == most_common_minute]

# Calculate acceleration (change in groundSpeed over time)
df['groundSpeed_diff'] = df['groundSpeed'].diff()
df['acceleration'] = df['groundSpeed_diff']

# Yaw change
df['yawRate_change'] = df['yawRate'].diff()

# Speed change
df['speed_change'] = df['groundSpeed'].diff().abs()

# Set up the figure with 3 subplots
fig, axs = plt.subplots(3, 1, figsize=(18, 12), sharex=True)

# Define titles and y-labels
metrics = [
    ('acceleration', 'Acceleration (m/s²)', 'Acceleration Over Time'),
    ('yawRate_change', 'Yaw Rate Change (rad/s)', 'Yaw Rate Change Over Time'),
    ('speed_change', 'Speed Change (m/s)', 'Speed Change Over Time')
]

# Plot each metric
for ax, (metric, ylabel, title) in zip(axs, metrics):
    ax.plot(df['Timestamp'], df[metric], marker='o', linestyle='-', label=most_common_minute)
    ax.set_ylabel(ylabel)
    ax.set_title(title)
    ax.grid(True)

# X-axis label only once at the bottom
axs[-1].set_xlabel('Time')

# Add one common legend
handles, labels = axs[0].get_legend_handles_labels()
fig.legend(handles, labels, loc='upper center', ncol=1, title='Flight Test Minute')

# Adjust layout to make space for legend
plt.tight_layout(rect=[0, 0, 1, 0.95])
plt.show()
