# [The Decorator Patter](https://refactoring.guru/design-patterns/decorator) : Structural Design Pattern

---
## OO Principles:
---
## Steps for creating the Starbuzz Coffee Application:
1. Take a Espresso object
2. Decorate it with a Mocha object
3. Decorate it with a Whip object
4. Call the cost() and description method and rely on delegation to add on the
condiment costs
## Expected Output:
```
Beverage Constructed
The Espresso costs: 1.99
Beverage Constructed
Constructing Mocha
The Espresso, Mocha costs: 2.19
Beverage Constructed
Constructing Mocha
The Espresso, Mocha, Mocha costs: 2.39
Beverage Constructed
Constructing Milk
The Espresso, Mocha, Mocha, Steamed Milk costs: 2.49
Beverage Constructed
The House Blend costs: 0.89
Beverage Constructed
Constructing Soy
The House Blend, Soy costs: 1.09
Beverage Constructed
Constructing Milk
The House Blend, Soy, Steamed Milk costs: 1.19
Beverage Constructed
Constructing Milk
The House Blend, Soy, Steamed Milk, Steamed Milk costs: 1.29
Beverage Constructed
Constructing Mocha
The House Blend, Soy, Steamed Milk, Steamed Milk, Mocha costs: 1.49
```