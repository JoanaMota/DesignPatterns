#ifndef FLYNOWAY_HPP
#define FLYNOWAY_HPP

#include "FlyBehaviour.hpp"

class FlyNoWay : public FlyBehaviour
{
private:
    /* data */
public:
    FlyNoWay(/* args */) {}
    ~FlyNoWay() {}
    void fly(void) override;
};
void FlyNoWay::fly(void)
{
    std::cout << "No, I don't fly" << std::endl;
}
#endif /* FLYNOWAY_HPP */
