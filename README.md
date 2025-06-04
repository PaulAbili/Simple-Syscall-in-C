# Simple C Syscall

### Contact
Author: Paul Abili
Campus ID:QD36016
Email:pabili1@umbc.edu

### Overview
The goal of this project was to create two simple syscalls: one for "hello world" and another to recreate C's memcpy

### Installation and Setup
No external libraries used in this project.
No dependencies, environmental variables or configuration files need to be set.

### Build and Compile
Build the project with: gcc [testFile.c] -Wall -g -o [testFile]
Run the code with: ./[testFile]
[testFile] :  Test file for c program being tested
For the test files I created:
For hello.c: [testFile.c] is [testHello.c]
For copy.c: [testFile.c] is [testCopy.c]

### User-Space Drivers
No drivers used within this project

### Testing
For memcpy:
Excepted Input: 2 Strings of the Same Length
Expected Output: “Success”

## Troubleshooting

Build and install your customized kernel
Ran into dpkg-buildpackage error when building the kernel.
Steps to complete:
Modified the CONFIG_SYSTEM_TRUSTED_KEYS line to “”
Ran make clean run

Memcpy: Add a memory copy to the kernel
Test File always returned -1

Steps to complete:
Needed to add a buffer variable to store get_user value
Needed to build the kernel before testing …
Needed to declare incrementing variable outside of for loop

References
External Sources
https://brennan.io/2016/11/14/kernel-dev-ep3/
https://www.youtube.com/watch?v=FMvV2e-Ghts

