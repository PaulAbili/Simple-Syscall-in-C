# Simple C Syscall

### Contact

**Author:** Paul Abili <br>
**Email:** pabili1@umbc.edu <br>

### Overview

The goal of this project was to create two simple syscalls: one for "hello world" and another to recreate C's memcpy<br>

### Installation and Setup

No external libraries used in this project.<br>
No dependencies, environmental variables or configuration files need to be set.<br>

### Build and Compile

<p>Build the project with: gcc [testFile.c] -Wall -g -o [testFile]<br>
Run the code with: ./[testFile]<br>
[testFile]:  Test file for c program being tested</p>

For the test files I created:
For hello.c: [testFile.c] is [testHello.c](project0/testHello.c)
For copy.c: [testFile.c] is [testCopy.c](project0/testCopy.c)

### User-Space Drivers

No drivers used within this project

### Testing

<p>For memcpy:
Excepted Input: 2 Strings of the Same Length
Expected Output: “Success”</p>

### Troubleshooting

<p>Build and install your customized kernel<br>
Ran into dpkg-buildpackage error when building the kernel.</p>

<p>Steps to complete:<br>
Modified the CONFIG_SYSTEM_TRUSTED_KEYS line to “”<br>
Ran make clean run</p>

<p>Memcpy: Add a memory copy to the kernel<br>
Test File always returned -1</p>

<p>Steps to complete:<br>
Needed to add a buffer variable to store get_user value<br>
Needed to build the kernel before testing <br>
Needed to declare incrementing variable outside of for loop</p>

### References
#### External Sources

https://brennan.io/2016/11/14/kernel-dev-ep3/<br>
https://www.youtube.com/watch?v=FMvV2e-Ghts<br>

