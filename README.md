# Libft

## Introduction
Libft is the very first project of the 42 cursus. In it, we are expected to write several functions that will help us throughout the majority of the fundamentals track. In it we will find functions to deal with characters, strings, numbers, memory allocation and treatment, as well as functions to deal with linked lists.

## Division of the project
* **First Part:** A set of functions from the  libc. Your functions will have the same prototypes and implement the same behaviors as the originals. They must comply with the way they are defined in their  man. The only difference will be their names.
* **Second Part:** A set of functions that are either not in the  libc, or that are part of it but in a different form.
* **Bonus Part:** A set of functions that are used to manipulate linked lists.

## Makefile
| Command | Usage |
| --- | --- |
| `make` | creates .o files for each function of the mandatory part as well as the main library file, libft.a |
| `make bonus` | creates .o files for each function of the bonus part and adds them to the library file
| `make clean` | removes the .o files used to create the library |
| `make fclean` | removes the .o & .a files used to create the library |
| `make re` | removes all .o & .a files then remakes them |