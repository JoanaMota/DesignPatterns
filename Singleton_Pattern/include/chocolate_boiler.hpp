#ifndef CHOCOLATE_BOILER_HPP
#define CHOCOLATE_BOILER_HPP

class CChocolateBoiler
{
private:
    CChocolateBoiler() : m_empty(true), m_boiled(false) {}
    ~CChocolateBoiler() {}
    static CChocolateBoiler *m_uniqueInstance;
    static std::mutex m_mutex;
    bool m_empty;
    bool m_boiled;

public:
    CChocolateBoiler(CChocolateBoiler &other) = delete;
    void operator=(const CChocolateBoiler &) = delete;

    static CChocolateBoiler *getInstance()
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        if (m_uniqueInstance == nullptr)
        {
            m_uniqueInstance = new CChocolateBoiler();
        }
        return m_uniqueInstance;
    }

    bool isEmpty()
    {
        return m_empty;
    }
    bool isBoiled()
    {
        return m_boiled;
    }

    void fill()
    {
        if (isEmpty())
        {
            m_empty = false;
            m_boiled = false;
            // fill the boiler with a milk/chocolate mixture
            std::cout << "filling" << std::endl;
        }
    }
    void drain()
    {
        if (!isEmpty() && isBoiled())
        {
            m_empty = true;
            // drain the boiled milk and chocolate
            std::cout << "draining" << std::endl;
        }
    }
    void boil()
    {
        if (!isEmpty() && !isBoiled())
        {
            m_boiled = true;
            // bring the contents to a boil
            std::cout << "boiling" << std::endl;
        }
    }
};

CChocolateBoiler *CChocolateBoiler::m_uniqueInstance{nullptr};
std::mutex CChocolateBoiler::m_mutex;

#endif /* CHOCOLATE_BOILER_HPP */