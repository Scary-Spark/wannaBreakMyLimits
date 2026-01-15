#include <iostream>
#include <vector>

// syntax: typedef type newName_t
//  _t is mainly used to show it defined as typedef

typedef std::string text_t;
typedef int number_t;

// another way: using
using decimal_t = double;
using char_t = char;

int main()
{
    text_t firstName = "Scary";
    std::cout << firstName << std::endl;

    number_t age = 12;
    std::cout << age << std::endl;
}