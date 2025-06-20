#include <iostream>
using namespace std;
int main()
{
    int n, r;
    int sum;
    cout << "Enter the number for checking ";
    cin >> n;
    int num = n;
    while (n > 0)
    {
        r = n % 10;
        sum = r + (sum * 10);
        n = n / 10;
    }
    if (sum == num)
    {
        cout << "Num is palindrome ";
    }
    else
    {
        cout << "Not a palindrome ";
    }

    return 0;
}