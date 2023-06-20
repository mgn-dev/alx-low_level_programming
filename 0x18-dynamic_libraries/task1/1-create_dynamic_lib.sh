#!/bin/bash

for file in *.c; do
	fn=${file%??}
	gcc -c -fPIC "$file" -o "$fn.o"
	if [[ $? -ne 0 ]]; then
		echo "$file compilation failed"
	fi
done

gcc -shared *.o -o liball.so
if [[ $? -eq 0 ]]; then
	rm *.o
fi


