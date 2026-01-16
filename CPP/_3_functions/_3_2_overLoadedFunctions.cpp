#include <iostream>
using namespace std;

void bakedPizza()
{
    cout << "This is from pizza 1" << endl;
}

void bakedPizza(string name)
{
    cout << name + " type of pizza" << endl;
}

int main()
{
    /*
        can be overloaded with:
            1. with different parameter
            2. number of parameter
    */
    bakedPizza("Personal fav");
    bakedPizza();
}