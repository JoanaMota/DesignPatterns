#ifndef DUCK_HPP
#define DUCK_HPP

class IDuck
{
public:
    IDuck() {}
    ~IDuck() {}
    virtual void quack() const = 0;
    virtual void fly() const = 0;
};

#endif /* DUCK_HPP */