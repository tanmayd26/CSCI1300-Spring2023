#include <iostream>
#include <fstream>
#include "Item.h"
#include "split.h"
#include "CashRegister.h"


using namespace std;

int main()
{
    Item my_item;

    my_item.setName("Bag of candy");
    my_item.setUpc("9384747383");
    my_item.setPrice(9.99);

    Item another_item("Bag of mashmellows", "848484", 4.99);

    // my_item.printItem();

    // another_item.printItem();

    /*cout << another_item.getName() << ": UPC " 
            << another_item.getUpc() << " \nPrice: " 
            << another_item.getPrice() << endl; */

    // make an array of items
    const int ARR_SIZE = 50;
    Item itemArr[ARR_SIZE]; // calls default constructor 50 times

    // modify existing object in array
    itemArr[0].setName("computer mouse");
    itemArr[0].setPrice(19.99);
    itemArr[0].setUpc("1344313432");
    
    // overwrite existing object in array with a new object (created via the param. constructor)
    itemArr[0] = Item("computer mouse", "1344313432", 19.99);


    ifstream my_stream; // default constructor for ifstream
    my_stream.open("items.txt");

    // ifstream my_other_stream("items.txt");  // param constructor for ifstream

    int counter = 0;
    if (my_stream.is_open())
    {
        string temp;
        while(getline(my_stream, temp))
        {
             cout << temp << endl; // prints out to screen

             const int SPLIT_SIZE = 3;
             string split_arr[SPLIT_SIZE];

             int ret_val = split(temp,',', split_arr, SPLIT_SIZE);

             if (ret_val == 3)
             {
                // valid line in the file, we can make an object
                //cout << "ready to make an object" << endl;
                double temp_price = stod(split_arr[2]);
                itemArr[counter] = Item(split_arr[0], split_arr[1], temp_price);
                itemArr[counter].printItem();
                counter++;
             }
             // create an object from the temp string

        }
        
    } else{
        cout << "File not found or not accessible" << endl;
    }


    return 0;
}



// https://www.colorado.edu/program/learningassistant/
