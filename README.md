# ALX Low Level Programming

A project covering C programming from first compilation through data structures, memory management, and search algorithms.

## Overview

This project includes 26 tasks that build low-level programming proficiency in C on Ubuntu. The project starts with compilation, printing, and control flow, then progresses through functions, pointers, arrays, strings, recursion, and dynamic memory allocation. Middle task folders introduce the C preprocessor, structures, function pointers, variadic functions, and linked list implementations. Advanced sections cover bit manipulation, file I/O, doubly linked lists, dynamic shared libraries, hash tables, Makefiles, and search algorithms.

Each task folder is a self-contained directory of numbered C source files with paired `main.c` test harnesses and header files. Standalone capstone tasks—custom `printf`, Monty bytecode interpreter, sorting algorithms, and binary trees—live in separate task folders but align with module numbers in this project.

## Skills covered


- Compile and run C programs with GCC, understanding the build pipeline and exit codes
- Use variables, conditionals, loops, functions, and nested loops for algorithmic tasks
- Debug C programs with systematic error isolation techniques
- Manipulate pointers, arrays, and strings across multiple progressive modules
- Build recursive solutions and understand base cases and call stacks
- Create and use static libraries with `ar` and linker flags
- Parse command-line arguments with `argc`/`argv`
- Allocate and free heap memory safely with `malloc`/`free`
- Use the C preprocessor for macros, conditional compilation, and header guards
- Define structures, typedefs, and function pointer dispatch tables
- Build variadic functions with `stdarg.h`
- Build singly and doubly linked lists with insert, delete, and traversal operations
- Perform bit-level operations, endianness checks, and binary conversions
- Read, write, and copy files using low-level system calls
- Build and link dynamic shared libraries with `dlopen`/`dlsym`
- Build hash tables with djb2 hashing, collision handling, and sorted variants
- Write Makefiles with variables, rules, and phony targets
- Build linear and binary search with Big O analysis

## Tech Stack

| Category | Technologies |
|----------|-------------|
| Language | C (C99) |
| Compiler | GCC |
| Build | Make, `ar` (static libraries), `ld` (dynamic linking) |
| Libraries | Standard C library, `dlfcn.h` |
| Style | Betty coding style, `betty` doc checker |
| Runtime | Ubuntu 20.04+ |

## Project Structure

| Module | Directory | Focus |
|--------|-----------|-------|
| 0x00 | `0x00-hello_world` | Compilation, printing, `puts`, `printf` |
| 0x01 | `0x01-variables_if_else_while` | Variables, conditionals, loops |
| 0x02 | `0x02-functions_nested_loops` | Functions, nested loops, ASCII art |
| 0x03 | `0x03-debugging` | Debugging techniques and error isolation |
| 0x04 | `0x04-more_functions_nested_loops` | More functions, `_putchar`, number printing |
| 0x05 | `0x05-pointers_arrays_strings` | Pointers, arrays, strings (part 1) |
| 0x06 | `0x06-pointers_arrays_strings` | Pointers, arrays, strings (part 2) |
| 0x07 | `0x07-pointers_arrays_strings` | Pointers, arrays, strings (part 3) |
| 0x08 | `0x08-recursion` | Recursive functions and base cases |
| 0x09 | `0x09-static_libraries` | Creating and using static libraries |
| 0x0A | `0x0A-argc_argv` | Command-line argument parsing |
| 0x0B | `0x0B-malloc_free` | Heap allocation and deallocation |
| 0x0C | `0x0C-more_malloc_free` | Advanced dynamic memory (calloc, realloc) |
| 0x0D | `0x0D-preprocessor` | Macros, `#define`, conditional compilation |
| 0x0E | `0x0E-structures_typedef` | Structs, typedefs, complex data modeling |
| 0x0F | `0x0F-function_pointers` | Function pointers and jump tables |
| 0x10 | `0x10-variadic_functions` | `sum_them_all`, `print_numbers`, `print_strings`, `print_all` |
| 0x12 | `0x12-singly_linked_lists` | Singly linked list create, print, append, prepend |
| 0x13 | `0x13-more_singly_linked_lists` | Insert, delete, reverse, cycle detection |
| 0x14 | `0x14-bit_manipulation` | Bitwise ops, get/set/clear bit, endianness |
| 0x15 | `0x15-file_io` | `open`, `read`, `write`, `close`, file copy |
| 0x17 | `0x17-doubly_linked_lists` | Doubly linked list operations |
| 0x18 | `0x18-dynamic_libraries` | Shared object creation and dynamic loading |
| 0x1A | `0x1A-hash_tables` | Hash table create, set, get, print, delete, sorted hash |
| 0x1C | `0x1C-makefiles` | Makefile rules, variables, and island perimeter task |
| 0x1E | `0x1E-search_algorithms` | Linear search, binary search, jump search, Big O notation |

## Key Implementations

- **Pointer and string mastery (`0x05`–`0x07`)** — Three progressive modules covering pointer arithmetic, string manipulation, and array operations culminating in complex string tasks
- **Memory management (`0x0B`–`0x0C`)** — Safe `malloc`/`free` patterns, string duplication on the heap, and `calloc`/`realloc` for dynamic buffers
- **Function pointers (`0x0F`)** — Opcode-style dispatch tables that foreshadow the Monty interpreter and `printf` handler patterns
- **Linked lists (`0x12`–`0x13`, `0x17`)** — Singly and doubly linked list CRUD, reversal, cycle detection, and node insertion at arbitrary indices
- **Hash tables (`0x1A`)** — djb2 hash function, key-index mapping, collision chains, sorted hash table variant, and key deletion
- **Dynamic libraries (`0x18`)** — Multi-file shared object compilation, `dlopen`/`dlsym` loading, and operator function tables
- **File I/O (`0x15`)** — Read text files, create/append files, and copy file contents with system calls
- **Search algorithms (`0x1E`)** — Linear, binary, and jump search implementations with accompanying Big O analysis files

## Getting Started

### Prerequisites

- Ubuntu 20.04+
- GCC
- Make
- Git
- Python 3 (checker scripts, some modules)

### Setup

```bash
git clone <repository-url>
cd alx-low_level_programming
```

### Compiling and Running

Most tasks compile with GCC and run via paired main files:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
  0x08-recursion/3-factorial.c 0x08-recursion/0-main.c -o factorial
./factorial
```

Static library tasks:

```bash
gcc -c 0x09-static_libraries/*.c
ar rcs libmy.a *.o
gcc 0x09-static_libraries/main.o -L. -lmy -o quote
```

Makefile tasks:

```bash
make -f 0x1C-makefiles/0-Makefile
```

Checker-style tests:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
  0x1A-hash_tables/0-hash_table_create.c 0x1A-hash_tables/0-main.c -o ht
./ht
```

## Curriculum Context

This project is the first major programming segment in the ALX Software Engineering curriculum. It establishes the C foundation required for all subsequent backend, systems, and algorithm work.

| Previous | Next |
|----------|------|
| `alx-zero_day` — Git, Bash, and first C compilation on Ubuntu | `printf` — custom formatted output (module 0x11) |

Standalone tasks that extend this project (by module number):

| Module | Project | When |
|--------|------------|------|
| 0x11 | `printf` | After `0x10-variadic_functions` |
| 0x19 | `monty` | After `0x17-doubly_linked_lists` |
| 0x1B | `sorting_algorithms` | After `0x1A-hash_tables` |
| 0x1D | `binary_trees` | After `0x1C-makefiles` |

After completing this project and its capstone tasks, learners proceed to `simple_shell_prac` and the Simple Shell project, then `alx-higher_level_programming` for Python and web development.
