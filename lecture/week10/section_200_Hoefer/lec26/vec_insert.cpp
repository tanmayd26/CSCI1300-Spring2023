#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void modifyVec(vector<int> vec)
{
    for (int i = 0 ; i < vec.size(); i++)
    {
        vec.at(i) = -1;
    }
}

void printVec(vector<int> to_print)
{
    for (int i = 0; i < to_print.size(); i++)
    {
        cout << to_print.at(i) << ", ";
    }
    cout << endl;
}

int main()
{

    vector<int> my_vec = {4,5,1,2,9,3};

    printVec(my_vec);

    // FIND an item
    vector<int>::iterator it = find(my_vec.begin(), my_vec.end(), 2);

    if (it != my_vec.end())
    {
        // calculate the index of the found position
        cout << "Item found at position " << it - my_vec.begin() << endl;
    }

    // now add an element at that position
    my_vec.insert(it, 99);

    printVec(my_vec);

    return 0;
}