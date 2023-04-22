#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *sep, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
* struct formats - formats structure
* @c: character format
* @f_ptr: The function associated
*/

typedef struct formats
{
    char c;
    void* (*f_ptr)(int, void*);
} s_forms;

void print_all(const char * const format, ...);

#endif
