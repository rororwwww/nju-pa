#include <iostream>
#include <string>
#include <cstdio>
#include <type_traits>

using namespace std;

int main() {

    auto u = 123U;
    auto i = 123;

    if (typeid(u) == typeid(int))
    {
        cout << "typeid(u) == typeid(int)" << endl;
    }

    if (typeid(u) == typeid(unsigned int))
    {
       cout << "typeid(u) == typeid(unsigned int)" << endl;
    }
    

    if (typeid(i) == typeid(int))
    {
        cout << "typeid(i) == typeid(int)" << endl;
    }
    
    if (typeid(i) == typeid(unsigned int))
    {
       cout << "typeid(i) == typeid(unsigned int)" << endl;
    }

    cout << "This is my new file" << endl;    
    
    return 0;
}

