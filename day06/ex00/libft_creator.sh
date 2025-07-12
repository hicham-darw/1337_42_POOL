#!/bin/sh

#set variables -----------
CC="gcc"
CFLAGS="-Wall -Wextra -Werror"
OBJ="obj"
SRC="src"
LIB="libft.a"

mkdir -p "$OBJ"

for file in $SRC/*.c; do
	$CC $CFLAGS -c "$file" -o "$OBJ/$(basename ${file%.c}.o)"
done
echo "compilation termined"

ar rcs $LIB $OBJ/*.o
echo "$LIB created successfully!"

echo "dou you wanna delete all obj/*.o (y/n)?:"
read choice

if [ "$choice" = "y" ] || [ "$choice" = "Y" ]; then
	echo "deleting all files obj/*.o"
	rm -f "$OBJ"/*.o
else
	echo "no files were deleted !"
fi

ranlib $LIB
echo "ranlib $LIB executed!"

echo "Done!!!!!!!!"
