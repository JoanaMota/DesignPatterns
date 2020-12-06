# Design Patterns
## My implementation of some common Design Patterns.
## Language: C++

These examples were taken from the book [Head First Design Patterns: A Brain-Friendly Guide](https://www.amazon.com/Head-First-Design-Patterns-Brain-Friendly/dp/0596007124).

I also based my implementation on the examples provided in the [Refactoring GURU](https://refactoring.guru/design-patterns).

---

## Currently Implemented Design Patterns:
- Strategy Pattern
- Observer Pattern

---

## Compilation
I used CMake for building the packages.

To build the Design Pattern just do the following:
1. Create a build folder inside the desired Pattern folder;
2. Inside the created build folder run `cmake ..` for generating the build files;
3. Also inside the created build folder run `make` for building and linking;
4. Execute the program.

## Setup new Packages
The script `setup_package.py` can be used to setup a new clean package.
It will:
- Create a folder for the desired Pattern;
- Create src and include folders inside;
- Create the source file inside the src folder; 
- Create the `CMakeLists.txt` already dully completed to build the generated source file.

Execute the script as follows:
```console
setup_package.py Observer
```

Note: This is only my implementation of these patterns so it can have some mistakes or things to be improved.
