import os
import subprocess

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "../.."))
BUILD = os.path.join(ROOT, "build")

os.makedirs(BUILD, exist_ok=True)

subprocess.run(["cmake", "-S", ROOT, "-B", BUILD], check=True)
subprocess.run(["cmake", "--build", BUILD], check=True)
