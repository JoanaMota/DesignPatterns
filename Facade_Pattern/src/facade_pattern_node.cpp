#include <iostream>
#include "home_theater_facade.hpp"

int main()
{
    CAmplifier amp;
    CTV tv;
    CDvdPlayer dvd;
    CHomeTheaterFacade homeTheater(amp, tv, dvd);
    homeTheater.watchMovie();
    homeTheater.turnOffMovie();
    return 0;
}