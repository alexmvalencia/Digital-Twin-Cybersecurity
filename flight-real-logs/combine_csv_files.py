#!/usr/bin/env python3

import pandas as pd
import os

# Use current directory where the script is located
csv_dir = os.getcwd()  # This sets the directory to the one where the script is run

# List all CSV files in the directory
csv_files = [f for f in os.listdir(csv_dir) if f.endswith(".csv")]

if not csv_files:
    print("No CSV files found in the directory.")
    exit()

# Combine all CSV files
df_list = [pd.read_csv(os.path.join(csv_dir, file)) for file in csv_files]
combined_df = pd.concat(df_list, ignore_index=True)

# Save to a new CSV file
combined_df.to_csv("combined_real_logs.csv", index=False)

print(f"Combined {len(csv_files)} CSV files into 'combined_real_logs.csv'.")
