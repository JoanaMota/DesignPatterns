#ifndef TURKEY_HPP
#define TURKEY_HPP

class ITurkey
{
public:
    ITurkey() {}
    ~ITurkey() {}
    virtual void gobble() const = 0;
    virtual void fly() const = 0;
};

#endif /* TURKEY_HPP */