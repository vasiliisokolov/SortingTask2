#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a = { 2, 9, 12, 3, 4, 11, 5, 15 }; 
    int result = 9;
    int number1, number2, sum;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            sum = a[i] + a[j];
            if (sum == result)
            {
                number1 = a[i];
                number2 = a[j];
                break;
            }
        }
    }
    std::cout << "Number one is " << number1 << " , number two is " << number2;
}