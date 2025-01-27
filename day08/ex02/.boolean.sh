#!/bin/sh

#set variables--------
CC="gcc"
CFLAGS="-Wall -Wextra -Werror"
LIB_NAME="boolean.a"

for file in *.c; do
	$CC $CFLAGS -c "$file" -o "${file%.c}.o"
done
echo "object files created successfully"

ar rcs $LIB_NAME *.o

echo "do you want delete object files? (y/n)?"

read char

if [ "$char" = "y" ] || [ "$char" = "Y" ]; then
	echo "removing files..."
	rm -rf *.o
else 
	echo "no files deleted"
fi
	
echo "archived $LIB_NAME"
echo "$LIB_NAME is running..."
ranlib $LIB_NAME

echo "$LIB_NAME created successfully"

$CC $CFLAGS -o main $LIB_NAME
echo "main is created successfully"

echo "Done"
