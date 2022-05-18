![image](https://th.bing.com/th/id/R.6df906fdc9f2cd1188dac4d18d5bf5fa?rik=bE6bZwGvU4uE5w&riu=http%3a%2f%2fwww.mangadaku.com%2fimages%2flogo_shell.jpg&ehk=00vdNn%2bH0aWSUAwwRyhhCMVQX%2fAFJHWKn5GdQSPBQdQ%3d&risl=&pid=ImgRaw&r=0)
<h1>0x16. C - Simple Shell</h1>
Release date May 18, 2022

</p>
          </a>
          <a href="https://github.com/BezaB10/simple_shell/commits/master" target="_blank">
               <img alt="commit_activity" src="https://img.shields.io/github/commit-activity/y/BezaB10/simple_shell" />
          </a>
          <a href="https://github.com/BezaB10/simple_shell/graphs/contributors" target="_blank">
               <img alt="contributors" src="https://img.shields.io/github/contributors/BezaB10/simple_shell" />
          </a>
          <a href="https://github.com/BezaB10/simple_shell/blob/master/hsh_shell.c"target="_blank">
               <img alt="code-size" src="https://img.shields.io/tokei/lines/github/BezaB10/simple_shell" />
          </a>
          <a href="https://github.com/BezaB10/simple_shell/blob/master/README.md" target="_blank">
               <img alt="Documentation" src="https://img.shields.io/badge/documentation-yes-lightpink" />
          </a>
     </p>

## Table of Contents
* [Introduction](#Introduction)
  * About
  * What is Shell
* [Project Information](#Project-Information)
    * Tasks
    * Enviroment
    * General requirements
    * Allowed functions
* [Documentation](#Documentation)
    * Instalation
* [Authors](#Authors)

## Introduction

### About
This repository is for ALX peer project 0x16 C - Simple Shell that we are asked to Write a UNIX command line interpreter and this is a collaboration between Seblemariam Ashenafi and Beza Abera.

### What is Shell
A **shell** is a command-line interpreter, it is the computer program that provides a user interface to access the services of the operating system. Depending on the type of interface they use, shells can be of various types, in this case, a shell program of the type **`sh`** ([Bourne Shell](https://en.wikipedia.org/wiki/Bourne_shell)) will be developed. Users typically interact with a shell using a [terminal emulator](https://en.wikipedia.org/wiki/Terminal_emulator) that is used for entering data into and displaying or printing data from, a computer or a computing system.

## Project Information

### Tasks

* Task 0. Betty would be proud
* Task 1. Simple shell 0.1
* Task 2. Simple shell 0.2
* Task 3. Simple shell 0.3
* Task 4. Simple shell 0.4
* Task 5. Simple shell 1.0
* Task 6. Simple shell 0.1.1
* Task 7. Simple shell 0.2.1
* Task 8. Simple shell 0.4.1
* Task 9. setenv, unsetenv
* Task 10. cd
* Task 11. ;
* Task 12. && and ||
* Task 13. alias
* Task 14. Variables
* Task 15. Comments
* Task 16. File as input

### Enviroment

<!-- bash -->
<a href="https://www.gnu.org/software/bash/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=GNU%20Bash&color=4EAA25&logo=GNU%20Bash&logoColor=4EAA25&labelColor=2F333A" alt="terminal"></a>
<!-- github -->
<a href="https://github.com" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=GitHub&color=181717&logo=GitHub&logoColor=f2f2f2&labelColor=2F333A" alt="Github"></a>

Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

### General requirements
 * Allowed editors: vi, vim, emacs
 * All your files will be compiled on `Ubuntu 14.04 LTS`
 * Your C programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
 * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 * No more than 5 functions per file
 * All your header files should be include guarded
 * This shell should not have any memory leaks
 * Unless specified otherwise, your program must have the exact same output as `sh` (`/bin/sh`) as well as the exact same error output.

### Allowed functions used 

* `execve` (man 2 execve)
* `exit` (man 3 exit)
* `_exit` (man 2 _exit)
* `fork` (man 2 fork)
* `free` (man 3 free)
* `getline` (man 3 getline)
* `isatty` (man 3 isatty)
* `malloc` (man 3 malloc)
* `perror`(man 3 perror)
* `signal` (man 2 signal)
* `stat` (__ xstat) (man 2 stat)
* `strtok` (man 3 strtok)
* `wait` (man 2 wait)
* `write` (man 2 write)

## Documentation

### Installation

- Clone this repository: `git clone "https://github.com/BezaB10/simple_shell"`
- Change directories into the repository: `cd simple_shell`
- Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
- Run the shell in interactive mode: `./hsh`
- Or run the shell in non-interactive mode: example `echo "Hello world!" | ./hsh`

## Authors

<li> Seblemariam Ashenafi - <a href="https://github.com/sebmar21">sebmar21</a></li>
<li> Beza Abera - <a href="https://github.com/BezaB10">BezaB10</a></li
