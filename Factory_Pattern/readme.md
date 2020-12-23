# [The Factory Method Patter](https://refactoring.guru/design-patterns/factory-method) : Creational Pattern
The Factory Method Pattern defines an interface for creating an object, but lets subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.

---
## OO Principles:
---
## Steps for creating the Pizza Factory:
### Create the Product:
**Pizza**
### Create the Concrete Products:
All the products produced by a concrete creator:

**- NYCheesePizza**

**- NYClamPizza**

**- ChicagoCheesePizza**

**- ChicagoClamPizza**

...
### Create the Creator:
**Pizza Store**

This is the one responsible for creating the abstract *Factory Method*(`createPizza()`).

The creator never really knows which concrete product was produced.

### Create the Concrete Creators
**Pizza Stores**

These are responsible for overriding the base *Factory Method* so it returns a different type of product. The *Factory Method* is the one responsible for producing products. 

Note that the *Factory Method* doesn’t have to create new instances all the time. It can also return existing objects from a cache, an object pool, or another source.

The Concrete Creators are the only ones with knowledge of how to create the Concrete Products.

![](PizzaFactory.png)
## Expected Output:
```
APP: We need a Pizza store in Chicago, New York and California
Constructing a California Pizza store
Constructing a New York Pizza store
Constructing a California Pizza store
APP: Select Store:
 0 - Chicago
 1 - New York
 2 - California
0
APP: Select Pizza type:
0 - Cheese
1 - Clam
2 - Veggie
1
Pizza Store: Creating Pizza
Preparing Chicago Clam Pizza
Tossing dough which will be Extra Thick Crust
Adding Plum Tomato Sauce
Adding Toppings:
 - Clams
Baking Pizza
Cutting Pizza into diagonal slices
Boxing Pizza
You ordered a Chicago Clam Pizza
```