#include <iostream>
#include <thread>

#include "singleton.hpp"
#include "chocolate_boiler.hpp"

void threadFoo()
{
    // Following code emulates slow initialization.
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    Singleton *singleton = Singleton::getInstance("FOO");
    std::cout << singleton->getValue() << "\n";
}

void threadBar()
{
    // Following code emulates slow initialization.
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton *singleton = Singleton::getInstance("BAR");
    std::cout << singleton->getValue() << "\n";
}

int main()
{
    std::cout << "Starting Thread Foo" << std::endl;
    std::thread t1(threadFoo);
    std::cout << "Starting Thread Bar" << std::endl;
    std::thread t2(threadBar);
    std::cout << "Result:" << std::endl;
    t1.join();
    t2.join();

    std::cout << "Creating Chocolate Boiler" << std::endl;

    CChocolateBoiler *boiler = CChocolateBoiler::getInstance();
    boiler->fill();
    boiler->boil();
    boiler->drain();

    return 0;
}