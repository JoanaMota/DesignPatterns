# Design Patterns
**My implementation of some common Design Patterns.**
# Language: C++

These examples were taken from the book [Head First Design Patterns: A Brain-Friendly Guide](https://www.amazon.com/Head-First-Design-Patterns-Brain-Friendly/dp/0596007124).

I also based my implementation on the examples provided in the [Refactoring GURU](https://refactoring.guru/design-patterns).

---

# Currently Implemented Design Patterns:
- [The Strategy Pattern : Behavioral](https://github.com/JoanaMota/DesignPatterns/wiki/The-Strategy-Pattern)
- [The Observer Pattern : Behavioral](https://github.com/JoanaMota/DesignPatterns/wiki/The-Observer-Pattern)
- [The Decorator Pattern : Structural](https://github.com/JoanaMota/DesignPatterns/wiki/The-Decorator-Pattern)
- [The Factory Method Pattern : Creational](https://github.com/JoanaMota/DesignPatterns/wiki/The-Factory-Method-Pattern)
- [The Abstract Factory Method Pattern : Creational](https://github.com/JoanaMota/DesignPatterns/wiki/The-Abstract-Factory-Method-Pattern)
- [The Singleton Pattern : Creational](https://github.com/JoanaMota/DesignPatterns/wiki/The-Singleton-Pattern)
- [The Command Pattern : Behavioral](https://github.com/JoanaMota/DesignPatterns/wiki/The-Command-Pattern)
- [The Adapter Pattern : Structural](https://github.com/JoanaMota/DesignPatterns/wiki/The-Adapter-Pattern)
- [The Facade Pattern : Structural](https://github.com/JoanaMota/DesignPatterns/wiki/The-Facade-Pattern)
- [The Template Method Pattern : Behavioral](https://github.com/JoanaMota/DesignPatterns/wiki/The-Template-Method-Pattern)

:star: [The comparison between the different patterns can be found here](https://github.com/JoanaMota/DesignPatterns/wiki/Home)

Note: These are only my implementation of the patterns so it can have some mistakes or things to be improved.

## Other Patterns:
- [The Curiously Recurring Template Pattern (CRTP)](https://www.fluentcpp.com/2017/05/12/curiously-recurring-template-pattern/): Consists in inheriting from a template class and use the derived class itself as a template parameter of the base class. This way we can use the derived class in the base class by downcasting the `this` pointer through a `static_cast<>`. In this regard, the derived class offers an interface to the base class. Another usage of the CRTP is to create **static interfaces**.
---

# Compilation
I used CMake for building the packages.

To build the Design Pattern just do the following:
1. Create a build folder inside the desired Pattern folder;
2. Inside the created build folder run `cmake ..` for generating the build files;
3. Also inside the created build folder run `make` for building and linking;
4. Execute the program.

# Setup new Packages
The script `setup_package.py` can be used to setup a new clean package.
It will:
- Create a folder for the desired Pattern;
- Create src and include folders inside;
- Create the source file inside the src folder; 
- Create the `CMakeLists.txt` already dully completed to build the generated source file.

Execute the script as follows:
```console
$ setup_package.py Observer
```

