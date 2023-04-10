#include <iostream>

using namespace std;

int main()
{
    int my_int = 5;

    cout << my_int << endl;

    cout << &my_int << endl;

    int* my_pointer = &my_int;

    cout << *my_pointer << endl;
    cout << *&my_pointer << endl;

    return 0;
}