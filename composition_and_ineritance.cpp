#include <iostream>

class Walker // interface
{
public:
    virtual void Walk() = 0;
};

class Legs : public Walker
{
public:
    void Walk() { std::cout << "I can walk" << std::endl; }
};

class Grabber // Interface
{
public:
    virtual void GrabThings() = 0;
};

class Arms : public Grabber
{
public:
    void GrabThings() { std::cout << "I can grab things" << std::endl; }
};

// ----- Inheritance -----
class InheritanceRobot : public Legs,
                         public Arms
{
public:
    // Walk() and GrabThings() methods are implicitly
    // defined for this class since it inherited those
    // methods from its two superclasses
};

// ----- Composition -----
class CompositionRobot
{
public:
    CompositionRobot(Walker &walker, Grabber &grabber)
        : legs(walker),
          arms(grabber)
    {
    }
    void Walk() { legs.Walk(); }
    void GrabThings() { arms.GrabThings(); }

private:
    Walker &legs;
    Grabber &arms;
};