#ifndef HOME_THEATER_FACADE_HPP
#define HOME_THEATER_FACADE_HPP

#include "components/dvd_player.hpp"
#include "components/tv.hpp"
#include "components/amplifier.hpp"

class CHomeTheaterFacade
{
private:
    CAmplifier m_amp;
    CTV m_tv;
    CDvdPlayer m_dvd;

public:
    CHomeTheaterFacade(CAmplifier f_amp, CTV f_tv, CDvdPlayer f_dvd) : m_amp(f_amp), m_tv(f_tv), m_dvd(f_dvd) {}
    ~CHomeTheaterFacade() {}
    void watchMovie()
    {
        std::cout << "Get ready to watch a movie ..." << std::endl;
        m_tv.on();
        m_dvd.on();
        m_dvd.play();
        m_amp.on();
        m_amp.setVolume(8);
        m_amp.setSurround();
    }
    void turnOffMovie()
    {
        std::cout << "Turning off movie ..." << std::endl;
        m_amp.off();
        m_dvd.stop();
        m_dvd.eject();
        m_dvd.off();
        m_tv.off();
    }
};

#endif /* HOME_THEATER_FACADE_HPP */