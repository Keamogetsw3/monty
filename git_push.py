#!/usr/bin/env python3

import subprocess
import re
import sys
import os

# Function to extract the first comment from a code file
def extract_commit_message(file_path):
    with open(file_path, 'r') as file:
        content = file.read()
        # Use regular expression to find the first comment
        match = re.search(r'/\*([^*]|(\*[^/]))*\*/|#(.+)', content, re.DOTALL)
        if match:
            comment = match.group(1) if match.group(1) else match.group(2)
            return comment.strip()
    return "No comment found"

# Check if the correct number of arguments is provided
if len(sys.argv) != 2:
    print("Usage: ./git_push.py <file_path>")
    sys.exit(1)

# Get the file path from the command line argument
file_path = sys.argv[1]

# Check if the file exists
if not os.path.exists(file_path):
    print(f"Error: File '{file_path}' does not exist.")
    sys.exit(1)

# Git commands to add, commit, and push
try:
    subprocess.run(["git", "add", "."])  # Add all modified files
    subprocess.run(["git", "commit", "-m", "Files added"])  # Use a default commit message
    commit_message = extract_commit_message(file_path)
    subprocess.run(["git", "push", "origin", "main"])  # Change 'main' to your branch name
    print("Commit and push successful!")
except Exception as e:
    print(f"Error: {e}")

# To make this script executable, run the following command in your terminal:
# chmod u+x git_push.py
# After running this command, you can execute the script using ./git_push.py.
