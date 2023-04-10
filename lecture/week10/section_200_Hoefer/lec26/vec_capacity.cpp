#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> my_vec;

    for (int i = 0; i < 1000; i++)
    {
        cout << "Vector size: " << my_vec.size() << " capacity: " << my_vec.capacity() << endl;
        my_vec.push_back(0);
    }
    return 0;
}