#include <iostream>
#include <vector>

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
    modifyVec(my_vec);
    printVec(my_vec);



    return 0;
}