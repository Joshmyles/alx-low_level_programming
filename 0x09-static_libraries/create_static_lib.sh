#!/bin/bash

c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
echo "No files"
exit 1
fi

object_files=()
for file in $c_files;do
	object_file="${file%.c}.o"
	gcc -c "$file" -o "$objecet_file"
	object_files+=("$object_file")
done

ar rcs liball.a "$object_files[@]"

for object_file in "{object_files[@]}"; do
	rm "$object_file"
done

echo "Library has been created"
exit 0
