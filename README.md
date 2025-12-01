# Holberton School — Low-level Programming

Small collection of low-level C projects and exercises used to practice fundamentals: memory management, pointers, data structures, algorithms, and system-level programming.

## Contents
- README with project overview
- Individual exercise directories (one project per folder)
- Makefiles and tests where applicable
- Source files in C and headers

## Requirements
- Unix-like OS (macOS, Linux)
- GCC (or clang) and make
- Basic shell (bash, zsh)

## Build
From repository root:
- Compile a single file:
    gcc -Wall -Wextra -Werror -pedantic -std=gnu89 path/to/file.c -o output
- Use provided Makefile (if present):
    make

## Usage
- Run compiled binary:
    ./output [args]

- Run unit tests or checkers where provided:
    make test

## Style & Conventions
- C (C89/C99 as specified per project)
- Descriptive commit messages
- Functions documented with brief comments
- Follow Holberton/educational guidelines for project-specific constraints

## Contributing
- Fork repository, create feature branch, submit pull request
- Add tests for new functionality
- Keep changes focused and well-documented

## License
Specify license in LICENSE file (e.g., MIT, BSD) or indicate repository is for educational use.

Notes:
- Put each exercise in its own folder with clear README and Makefile.
- Keep code small, readable, and well-tested.