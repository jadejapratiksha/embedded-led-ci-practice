import subprocess

print("Running Ceedling Tests...")

result = subprocess.run(
    ["cmd", "/c", "ceedling test:all"],
    capture_output=True,
    text=True
)

print(result.stdout)

if result.returncode == 0:
    print("\nALL TESTS PASSED")
else:
    print("\nTEST FAILURE")
    print(result.stderr)