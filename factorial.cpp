// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int fact = 1;
//     cout << "Enter the number for factorial: ";
//     cin >> n;
//     for (int i = 1; i < n; i++)
//     {
//         fact = fact * (i + 1);
//     }
//     cout << "Factorial of given num is: " << fact;

//     return 0;
// }


//using recursion


#include <iostream>
using namespace std;

int factorial(int f)
{
    if (f == 0 || f == 1)
    {
        return 1;
    }
    else
    {
        return factorial(f - 1) * f;
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The factorial of the given number is " << factorial(n);

    return 0;
}