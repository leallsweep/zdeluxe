import os
import shutil
import subprocess

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BUILD = os.path.join(ROOT, "build")

shutil.rmtree(BUILD, ignore_errors=True)
os.makedirs(BUILD)

subprocess.run(["cmake", "-S", ROOT, "-B", BUILD], check=True)
subprocess.run(["cmake", "--build", BUILD], check=True)
