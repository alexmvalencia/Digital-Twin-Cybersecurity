#!/usr/bin/env python3

import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import (
    accuracy_score,
    classification_report,
    precision_score,
    confusion_matrix,
    ConfusionMatrixDisplay
)
import joblib
import matplotlib.pyplot as plt

# Load the dataset
file_path = "combined_spoofed_logs_fixed.csv"  # Update this if needed
df = pd.read_csv(file_path)

# Ensure target values are binary
df["is_spoofed"] = df["is_spoofed"].round().astype(int)

# Define features and target
features = ["Latitude", "Longitude", "Altitude", "Velocity North", "Velocity East", "Velocity Down"]
target = "is_spoofed"

# Split data into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(df[features], df[target], test_size=0.2, random_state=42)

# Train the Random Forest model
rf_model = RandomForestClassifier(n_estimators=100, max_depth=10, random_state=42)
rf_model.fit(X_train, y_train)

# Test the model
y_pred = rf_model.predict(X_test)

# Accuracy and classification report
print("Accuracy:", accuracy_score(y_test, y_pred))
print("Precision:", precision_score(y_test, y_pred))
print(classification_report(y_test, y_pred))

# Confusion matrix with large, bold text and colorbar
cm = confusion_matrix(y_test, y_pred)
disp = ConfusionMatrixDisplay(confusion_matrix=cm, display_labels=rf_model.classes_)
fig, ax = plt.subplots(figsize=(8, 6))
disp.plot(ax=ax, cmap='Blues')  # colorbar is ON by default
plt.title("Confusion Matrix", fontsize=20, fontweight='bold')
plt.xlabel("Predicted Label", fontsize=16, fontweight='bold')
plt.ylabel("True Label", fontsize=16, fontweight='bold')
plt.xticks(fontsize=14, fontweight='bold')
plt.yticks(fontsize=14, fontweight='bold')

# Add numbers in bold
for texts in disp.text_.ravel():
    texts.set_fontsize(14)
    texts.set_fontweight('bold')

plt.tight_layout()
plt.show()

