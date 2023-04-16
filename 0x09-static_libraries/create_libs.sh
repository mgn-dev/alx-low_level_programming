#!/bin/bash

for file in *.c; do
    if [[ "${file}" != "main.c" ]]; then
        gcc -c "${file}"
    fi
done

ar rc libmy.a *.o
rm *.o