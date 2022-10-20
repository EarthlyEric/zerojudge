import os

for filename in os.listdir('./'):
    if '.exe' in filename:
        os.remove('./'+filename)