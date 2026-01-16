#include <iostream>

double calcTotal(double prices[], int size);
int main()
{
    double prices[] = {49.22, 11.231, 11.23, 52.12};
    int size = sizeof(prices) / sizeof(prices[0]);
    std::cout << "Total: " << calcTotal(prices, size) << std::endl;
}

double calcTotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        double d = prices[i];
        total += d;
    }
    return total;
}