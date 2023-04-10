#include <iostream>
#include <fstream>
#include "Item.h"


using namespace std;

int main()
{
    Item my_item;

    my_item.setName("Bag of candy");
    my_item.setUpc("9384747383");
    my_item.setPrice(9.99);

    Item another_item("Bag of mashmellows", "848484", 4.99);

    cout << my_item.getName() << ": UPC " 
            << my_item.getUpc() << " \nPrice: " 
            << my_item.getPrice() << endl;

    cout << another_item.getName() << ": UPC " 
            << another_item.getUpc() << " \nPrice: " 
            << another_item.getPrice() << endl;

    //my_item.price = -1;


    return 0;
}