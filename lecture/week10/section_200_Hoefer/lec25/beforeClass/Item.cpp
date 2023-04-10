#include <iostream>
#include "Item.h"


Item::Item(){
    // cout << "in default constructor" << endl;
    name = "";
    upc = "";
    price = 0;
}

Item::Item(string name_in, string upc_in, double price_in)
{
    // cout << "in param constructor" << endl;
    name = name_in;
    upc = upc_in;
    price = price_in;
}

string Item::getName()
{
    return name;
}

void Item::setName(string name_in)
{
    name = name_in;
}

string Item::getUpc()
{
    return upc;
}

void Item::setUpc(string upc_in)
{
    upc = upc_in;
}

double Item::getPrice()
{
    return price;
}

void Item::setPrice(double price_in)
{
    if (price_in > 0)
    {
        price = price_in;
    }
    else
    {
        cout << "Invalid price!" << endl;
    }
}

void Item::printItem()
{
    cout << name << ": UPC " 
        << upc << " \nPrice: " 
        << price << endl;
}