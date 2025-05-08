# CPP Module 01

This repository contains a series of C++ exercises demonstrating fundamental concepts like memory management, pointers, references, file handling, and function pointers in C++98 standard.

## Overview

Each exercise focuses on specific C++ concepts:

- **ex00: BraiiiiiiinnnzzzZ** - Memory allocation and class instantiation
- **ex01: MoarBrainz** - Array allocation and memory management
- **ex02: HI_THIS_IS_BRAIN** - Pointers and references
- **ex03: UnnecessaryViolence** - Classes with references vs pointers
- **ex04: SedIsForLosers** - File handling and string manipulation
- **ex05: Harl** - Member function pointers and callback mechanisms
- **ex06: harlFilter** - Switch statement and complaint filtering system

## Requirements

- C++ compiler with C++98 standard support
- Make

## Building and Running

Each exercise has its own Makefile. To build any exercise:

```bash
cd ex0X
make
```

To clean the object files:

```bash
make clean
```

To remove the executable and object files:

```bash
make fclean
```

To rebuild:

```bash
make re
```

## Exercise Details

### ex00: BraiiiiiiinnnzzzZ

Basic zombie class with memory allocation demonstrations:
- `newZombie()`: Creates a zombie on the heap
- `randomChump()`: Creates a zombie on the stack

```bash
./BraiiiiiiinnnzzzZ
```

### ex01: MoarBrainz

Creates a horde of zombies with the same name using array allocation:

```bash
./MoarBrainz
```

### ex02: HI_THIS_IS_BRAIN

Demonstrates the difference between pointers and references:

```bash
./HI_THIS_IS_BRAIN
```

### ex03: UnnecessaryViolence

Shows different ways of associating classes:
- `HumanA`: Always has a weapon (reference)
- `HumanB`: Might not have a weapon initially (pointer)

```bash
./UnnecessaryViolence
```

### ex04: SedIsForLosers

A simple find and replace program for files:

```bash
./SedIsForLosers <filename> <string_to_find> <string_to_replace>
```

### ex05: Harl

Demonstrates member function pointers with a complaint system:

```bash
./Harl2
```

### ex06: harlFilter

Extends the Harl program with a complaint filter system using switch statements:
- Takes a filter level as command-line argument
- Displays complaints from that level and all higher levels
- Uses switch statement fall-through behavior for cascading messages

```bash
./harlFilter <level>
# Available levels: DEBUG, INFO, WARNING, ERROR
```

## Code Style

All code follows the C++98 standard and is compiled with:
- `-Wall` (all warnings)
- `-Wextra` (extra warnings)
- `-Werror` (warnings as errors)
- `-std=c++98` (C++98 standard)
- `-pedantic` (strict standard compliance)

## License

This project is part of the curriculum at [42 School](https://42.fr/).