![alt text](https://images.app.goo.gl/d24U4RtPcQfCVJff9)


# Simple shell
In this project we'll create a simple UNIX command interpreter in C programming language.

## Table of Contents
* [Introduction](#Introduction)
  * What is Shell

* [Project Information](#Project-Information)
    * General requirements
    * Allowed functions

* [Documentation](#Documentation)
    * Download
    * Compilation
    * Files

* [Extra Information](#Extra-Information)
    * Resources

* [Authors](#Authors)
 ---

 ## Introduction
  
### What is Shell 
A **shell** is a command-line interpreter, it is the computer program that provides a user interface to access the services of the operating system. Depending on the type of interface they use, shells can be of various types, in this case, a shell program of the type **`sh`** ([Bourne Shell](https://en.wikipedia.org/wiki/Bourne_shell)) will be developed. Users typically interact with a shell using a [terminal emulator](https://en.wikipedia.org/wiki/Terminal_emulator) that is used for entering data into and displaying or printing data from, a computer or a computing system.  

## Project Information

### General requirements
 * Allowed editors: vi, vim, emacs
 * All your files will be compiled on `Ubuntu 14.04 LTS`
 * Your C programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
 * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 * No more than 5 functions per file
 * All your header files should be include guarded
 * This shell should not have any memory leaks
 * Unless specified otherwise, your program must have the exact same output as `sh` (`/bin/sh`) as well as the exact same error output.

### Allowed functions
* `access` (man 2 access)
* `chdir` (man 2 chdir)
* `close` (man 2 close)
* `closedir` (man 3 closedir)
* `execve` (man 2 execve)
* `exit` (man 3 exit)
* `_exit` (man 2 _exit)
* `fflush` (man 3 fflush)
* `fork` (man 2 fork)
* `free` (man 3 free)
* `getcwd` (man 3 getcwd)
* `getline` (man 3 getline)
* `isatty` (man 3 isatty)
* `kill` (man 2 kill)
* `malloc` (man 3 malloc)
* `open` (man 2 open)
* `opendir` (man 3 opendir)
* `perror`(man 3 perror)
* `read` (man 2 read)
* `readdir` (man 3 readdir)
* `signal` (man 2 signal)
* `stat` (__ xstat) (man 2 stat)
* `lstat` (__ lxstat) (man 2 lstat)
* `fstat` (__ fxstat) (man 2 fstat)
* `strtok` (man 3 strtok)
* `wait` (man 2 wait)
* `waitpid` (man 2 waitpid)
* `wait3` (man 2 wait3)
* `wait4` (man 2 wait4)
* `write` (man 2 write)

## Documentation

### Download
You can clone this repository this way:
`git clone https://github.com/edgg72/simple_shell.git`

### Compilation
Your shell will be compiled this way:

`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

### Files

##|File|Description
---|---|---
1|[README.md](./README.md)|Readme
2|[AUTHORS](./AUTHORS)|Authors
3|[_calloc.c](./_calloc.c)|Function that allocates memory for an array
4|[_strdup.c](./_strdup.c)|Function returns a pointer to a new string which is a duplicate of the string str
5|[env.c](./env.c)|Function that prints the environment
6|[exec.c](./exec.c)|Function that creates a new process
7|[getpath.c](./exec.c)|Function that returns path
8|[header.h](./header.h)|Header file
9|[man_1_simple_shell](./man_1_simple_shell)|Manual simple shell
10|[readline.c](./readline.c)|Function that creates tokens of directory
11|[shell.c](./shell.c)|Function entry point
12|[signal_hand.c](./signal_hand.c)|Function handles ctrl c
13|[stat.c](./stat.c)|Function that verifies validity of file
14|[str_concat.c](./stat.c)|Function that concatenates two strings
15|[strcmp.c](./strcmp.c)|Function that compares two strings.



## Extra information

### Resources

**Read or watch:**
* [Thompson shell](https://en.wikipedia.org/wiki/Thompson_shell)
* [Ken Thompson](https://en.wikipedia.org/wiki/Ken_Thompson)

## Authors

* [Ever Daniel Gonzalez](https://github.com/edgg72)
* [Eliana Gomez Suarez](https://github.com/ElianaGomez2020)