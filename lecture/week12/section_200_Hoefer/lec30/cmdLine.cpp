#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // number of args
    cout << "Count of arguments passed in: " << argc << endl;

    // for each arg, print out the value in the array of args (argv)
    for (int i = 0; i < argc; i++)
        cout << "Argument " << i << ": " << argv[i] << endl;

    // can convert the arg to a string
    string arg1 = argv[0];
    cout << "Args can be converted to strings: " << arg1 << endl;
    return 0;
}

