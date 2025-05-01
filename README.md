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
- [`newZombie()`](ex00/srcs/newZombie.cpp ): Creates a zombie on the heap
- [`randomChump()`](ex00/srcs/randomChump.cpp ): Creates a zombie on the stack

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
- [`HumanA`](ex03/includes/HumanA.hpp ): Always has a weapon (reference)
- [`HumanB`](ex03/includes/HumanB.hpp ): Might not have a weapon initially (pointer)

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

## Code Style

All code follows the C++98 standard and is compiled with:
- `-Wall` (all warnings)
- `-Wextra` (extra warnings)
- `-Werror` (warnings as errors)
- `-std=c++98` (C++98 standard)
- `-pedantic` (strict standard compliance)

## License

This project is part of the curriculum at [42 School](https://42.fr/).