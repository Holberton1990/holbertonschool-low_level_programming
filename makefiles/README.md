# C - Makefiles
Make is a build automation tool that is used to manage dependencies and automate the building of software projects. It reads a file called a Makefile to determine how to compile and link the project's source files into executable programs or libraries.

A Makefile is a plain text file that contains rules and commands specifying how to build a target. It consists of targets, dependencies, and commands. The Makefile defines the relationships between the different components of the project and the actions needed to build them.

Makefiles are commonly used in C and C++ projects, but they can be used for any project that requires automated building and dependency management.

Here are some aspects of Makefiles:

Rules: Rules in a Makefile define the dependencies and the commands to build a target. Each rule consists of a target, prerequisites (dependencies), and the commands to build the target. Rules are written in the format:

makefile
target: prerequisites
    commands
Explicit and Implicit Rules: Explicit rules define the exact recipe to build a target, while implicit rules define a general recipe for building a target based on its file extension. Implicit rules are predefined by Make and can be overridden or extended.

#### Common/Useful Rules: Some common and useful rules in Makefiles include:

##### all: The default rule that builds the entire project.
##### clean: Removes generated files and cleans the project.
##### install: Installs the built project or files to a specific location.
##### test: Runs test cases or performs unit testing.
##### dist: Creates a distribution package or archive.
### Variables: 
Variables in Makefiles are used to store values that can be reused throughout the Makefile. They provide flexibility and ease of configuration. Variables are defined with the syntax variable_name = value and are referenced using $(variable_name).

Example:
CC = gcc
CFLAGS = -Wall -O2

target: dependencies
    $(CC) $(CFLAGS) -o target dependencies
Makefiles provide a way to automate the build process, manage dependencies, and avoid unnecessary recompilation. They are useful when you have complex projects with multiple source files and dependencies, as they ensure that only the necessary parts of the project are rebuilt when changes occur. They save time and effort by reducing manual compilation and linking steps and making the build process more efficient.
# Tasks
## 0. make -f 0-Makefile
## 1. make -f 1-Makefile
## 2. make -f 2-Makefile
## 3. make -f 3-Makefile
## 4. A complete Makefile
[C - Makefiles](https://intranet.hbtn.io/projects/2191)
