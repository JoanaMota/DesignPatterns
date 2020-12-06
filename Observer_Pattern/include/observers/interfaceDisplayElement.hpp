#ifndef INTERFACE_DISPLAY_HPP
#define INTERFACE_DISPLAY_HPP

class IDisplayElement
{
public:
    IDisplayElement() {}
    ~IDisplayElement() {}
    virtual void display() = 0;
};

#endif /* INTERFACE_DISPLAY_HPP */