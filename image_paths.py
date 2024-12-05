import os
import re

# Base folder path to remove from `file://` URLs
base_path = "/Users/xtc/Desktop/appunti/uni/"

# Root folder containing your Markdown files
root_folder_path = "."

# Regex to match <img> tags
img_tag_regex = r'''<img\s+[^>]*?src=["\']file://([^"']+/([^"']+))["'][^>]*?(?:width=["\'](\d+)["'])?[^>]*?>'''

def convert_img_tag_to_obsidian(match):
    full_path = match.group(1)
    relative_path = full_path.replace(base_path, "")  # Make the path relative
    relative_path = relative_path.replace("%20", " ")  # Replace %20 with spaces
    file_name = match.group(2)
    width = match.group(3)  # Width (optional)

    # Construct Obsidian-style syntax
    if width:
        return f"![[{relative_path}|{width}]]"
    else:
        return f"![[{relative_path}]]"

# Walk through each folder, subfolder, and file
for root, _, files in os.walk(root_folder_path):
    for filename in files:
        if filename.endswith(".md"):  # Only process Markdown files
            file_path = os.path.join(root, filename)
            with open(file_path, "r", encoding="utf-8") as file:
                content = file.read()

            # Replace <img> tags with Obsidian image syntax
            updated_content = re.sub(img_tag_regex, convert_img_tag_to_obsidian, content)

            # Write the updated content back to the file
            with open(file_path, "w", encoding="utf-8") as file:
                file.write(updated_content)

print("Recursive conversion complete!")
