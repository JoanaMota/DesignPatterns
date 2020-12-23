#include "creator/pizza_store.hpp"

class CClient
{
private:
    /* data */
public:
    CClient(CPizzaStore *f_pizzaStore);
    ~CClient();
};

CClient::CClient(CPizzaStore *f_pizzaStore)
{
    f_pizzaStore->orderPizza("cheese");
}

CClient::~CClient()
{
}
