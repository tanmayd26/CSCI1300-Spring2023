#include "CashRegister.h"
#include <iostream>

using namespace std;

CashRegister::CashRegister()
{
    num_items = 0;
}

void CashRegister::AddItem(Item itemToAdd)
{
    items[num_items] = itemToAdd;
    num_items++;
}

double CashRegister::CalculateTotal()
{
    double total = 0;
    for (int i = 0; i < num_items; i++)
    {
        total += items[i].getPrice();
    }
    return total;
}