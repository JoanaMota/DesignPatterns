#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <mutex>

class Singleton
{
private:
    // The Singleton's constructor/destructor should always be private/protected to
    // prevent direct construction/destruction calls with the `new`/`delete`
    // operator.
    Singleton(const std::string value) : m_value(value) {}
    ~Singleton() {}
    static Singleton *m_uniqueInstance;
    static std::mutex m_mutex;
    std::string m_value;

public:
    // Delete copy constructor so Singletons can't be cloneable.
    Singleton(Singleton &other) = delete;
    // Delete assignment operator so Singletons can't be assignable.
    void operator=(const Singleton &) = delete;

    // Static method that controls the access to the singleton instance.
    // And allows the creation of only one instance.
    static Singleton *getInstance(const std::string &value)
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        if (m_uniqueInstance == nullptr)
        {
            m_uniqueInstance = new Singleton(value);
        }
        return m_uniqueInstance;
    }

    std::string getValue() const
    {
        return m_value;
    }
};

// Static methods should be defined outside the class.
Singleton *Singleton::m_uniqueInstance{nullptr};
std::mutex Singleton::m_mutex;

#endif /* SINGLETON_HPP */