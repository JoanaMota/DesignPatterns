#include <iostream>
#include "MallarDuck.hpp"
#include "ModelDuck.hpp"
#include "interfaces/FlyBehaviours/FlyNoWay.hpp"

int main()
{
    MallarDuck mallarDuck;
    mallarDuck.display();
    mallarDuck.performQuack();
    mallarDuck.performFly();
    FlyNoWay flyBehaviour;
    mallarDuck.setFlyBehaviour(&flyBehaviour);
    mallarDuck.performFly();

    ModelDuck modelDuck;
    modelDuck.display();
    modelDuck.performQuack();
    modelDuck.performFly();
}
