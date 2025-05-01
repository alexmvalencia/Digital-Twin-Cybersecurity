#!/usr/bin/env python3

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Haversine formula
def haversine(lat1, lon1, lat2, lon2):
    R = 6371e3  # Earth radius in meters
    phi1 = np.radians(lat1)
    phi2 = np.radians(lat2)
    delta_phi = np.radians(lat2 - lat1)
    delta_lambda = np.radians(lon2 - lon1)

    a = np.sin(delta_phi/2)**2 + np.cos(phi1) * np.cos(phi2) * np.sin(delta_lambda/2)**2
    c = 2 * np.arctan2(np.sqrt(a), np.sqrt(1-a))

    distance = R * c  # in meters
    return distance

# Load the two CSV files
original_df = pd.read_csv("OriginalData.csv")
spoofed_df = pd.read_csv("SpoofedData.csv")

#file_path = "combined_spoofed_logs.csv"  # Update this if needed
#df = pd.read_csv(file_path)

# Preview to confirm
print("Original columns:", original_df.columns)
print("Spoofed columns:", spoofed_df.columns)

# Extract Latitude and Longitude
# (Adjust column names if needed)
original_lat = original_df['Latitude'].values
original_lon = original_df['Longitude'].values

spoofed_lat = spoofed_df['Latitude'].values
spoofed_lon = spoofed_df['Longitude'].values

# Ensure same length by trimming to the shorter one
min_length = min(len(original_lat), len(spoofed_lat))

original_lat = original_lat[:min_length]
original_lon = original_lon[:min_length]
spoofed_lat = spoofed_lat[:min_length]
spoofed_lon = spoofed_lon[:min_length]

# Compute deviation at each point
deviation_errors = []
for i in range(min_length):
    error = haversine(original_lat[i], original_lon[i], spoofed_lat[i], spoofed_lon[i])
    deviation_errors.append(error)

# Convert to numpy array for easy processing
deviation_errors = np.array(deviation_errors)

# Plot the Deviation Error over index
plt.figure(figsize=(14,7))
plt.plot(deviation_errors, marker='o', linestyle='-', markersize=3)
plt.title('Deviation Error (ΔPosition) between Original and Spoofed Flights')
plt.xlabel('Sample Index')
plt.ylabel('Deviation Error (meters)')
plt.grid(True)
plt.show()

# Optional: Statistics
print(f"Mean Deviation Error: {np.mean(deviation_errors):.2f} meters")
print(f"Max Deviation Error: {np.max(deviation_errors):.2f} meters")
print(f"Min Deviation Error: {np.min(deviation_errors):.2f} meters")
