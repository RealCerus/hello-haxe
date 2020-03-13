# hello-haxe
This repository contains projects that I wrote to learn / get familiar with Haxe.

## Projects
1. test: Just a project where I test everything that comes to mind.
2. file-list: My first use of Haxe's file system api. Prints the files and folder structure.

## Building from source
To build the projects you need to [install Haxe](https://haxe.org/download/).\
If you want to compile to Java you need the [hxjava](https://lib.haxe.org/p/hxjava) library which you can get with Haxelib.\
If you want to compile to C++ you need the [hxcpp](https://lib.haxe.org/p/hxcpp) library which you can get with Haxelib.\

To actually compile you need to run either `buildall.bat [interp|java|cpp|all]` or `build.bat [interp|java|cpp|all]` in the respective sub project.\
`interp` = Starts Haxe's own interpreter, `java` = Compiles to Java and runs the Jar, `cpp` = Compiles to c++, `all` = Runs all the other steps successively