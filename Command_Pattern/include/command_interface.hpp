#ifndef COMMAND_HPP
#define COMMAND_HPP

class ICommand
{
public:
    ICommand(){};
    virtual ~ICommand(){};
    virtual void execute(void) = 0;
    virtual void undo(void) = 0;
    virtual void print(void) = 0;
};
class CNoCommand : public ICommand
{
public:
    CNoCommand(){};
    ~CNoCommand(){};
    void execute(void) override
    {
        std::cout << "Does nothing" << std::endl;
    }
    void undo(void) override
    {
        std::cout << "Does nothing" << std::endl;
    }
    void print(void) override
    {
        std::cout << "NoCommand";
    }
};

#endif /* COMMAND_HPP */
