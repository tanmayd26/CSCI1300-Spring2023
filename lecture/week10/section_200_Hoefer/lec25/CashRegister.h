#include <iostream>
#include "Item.h"


class CashRegister
{
private:
    Item items[100];
    int num_items;

public:
    CashRegister();

    void AddItem(Item itemToAdd);

    double CalculateTotal();
};