# Script to format all C/C++ source files in the project using astyle

# Style settings
ASTYLE_OPTIONS="--style=google --indent=spaces=4 --suffix=none"

# Find and format all relevant files
find . \( -name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.hpp" \) -print0 | while IFS= read -r -d '' file; do
    echo "Formatting $file"
    astyle $ASTYLE_OPTIONS "$file"
done

echo "✅ Formatting completed."
