#include <iostream>

using namespace std;

class Item
{
    private:
        string name;
        string upc;
        double price;

    public:
        Item();
        Item(string name_in, string upc_in, double price_in);

        string getName();
        void setName(string name_in);

        string getUpc();
        void setUpc(string upc_in);

        double getPrice();
        void setPrice(double price_in);


};