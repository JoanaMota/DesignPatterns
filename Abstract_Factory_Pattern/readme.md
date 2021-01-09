# [The Abstract Factory Method Patter](https://refactoring.guru/design-patterns/abstract-factory) : Creational Pattern
The Abstract Factory Method provides an interface for creating families of related or dependent objects without specifying their concrete classes.

Both the Factory and Abstract Factory encapsulate object creation and lead to more decoupled, flexible designs.

---
## OO Principles:
### The Dependency Inversion Principle
Depend upon abstractions. Do not depend upon concrete classes.
---
## Steps for creating the Pizza Factory:
## Expected Output Example:
```
APP: We need a Pizza store in Chicago, New York and California
Constructing a California Pizza store
Constructing a New York Pizza store
Constructing a California Pizza store
APP: Select Store:
 0 - Chicago
 1 - New York
 2 - California
1
APP: Select Pizza type:
0 - Cheese
1 - Veggie
2 - Pepperoni
1
Pizza Store: Creating Pizza
A NY Style Veggie Pizza is being prepared.
Using Thin Crust Dough
Using Marinara Sauce
Using Reggiano Cheese
Adding Garlic
Adding Onions
Adding Mushrooms
Adding RedPepper
Baking Pizza
Cutting Pizza into diagonal slices
Boxing Pizza
You ordered a NY Style Veggie Pizza
```