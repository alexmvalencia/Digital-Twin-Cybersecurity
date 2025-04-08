#!/usr/bin/env python3

import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score, classification_report
import joblib

# Load the dataset
file_path = "combined_spoofed_logs.csv"  # Update this if needed
df = pd.read_csv(file_path)

# Ensure target values are binary
df["is_spoofed"] = df["is_spoofed"].round().astype(int)

# Define features and target
# Select relevant features
features = ["Latitude", "Longitude", "Altitude", "Velocity North", "Velocity East", "Velocity Down"]
target = "is_spoofed"

# Split data into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(df[features], df[target], test_size=0.2, random_state=42)

# Train the Random Forest model
rf_model = RandomForestClassifier(n_estimators=100, max_depth=10, random_state=42)
rf_model.fit(X_train, y_train)

# Test the model
y_pred = rf_model.predict(X_test)
print("Accuracy:", accuracy_score(y_test, y_pred))
print(classification_report(y_test, y_pred))

# Save the trained model
joblib.dump(rf_model, "gps_spoofing_prediction_model.pkl")