#ifndef FLYWITHWINGS_HPP
#define FLYWITHWINGS_HPP

#include "FlyBehaviour.hpp"

class FlyWithWings : public FlyBehaviour
{
private:
    /* data */
public:
    FlyWithWings(/* args */) {}
    ~FlyWithWings() {}
    void fly(void) override;
};
void FlyWithWings::fly(void)
{
    std::cout << "I Fly with wings" << std::endl;
}

#endif /* FLYWITHWINGS_HPP */
