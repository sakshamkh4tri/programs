#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,r,sum=0;
cout << "Enter a number: ";
cin >> x;
while(x>0){
    r=x%10;
    sum+=r;
    x=x/10;
}
cout<<"sum of the digits of a given number is "<<sum;
return 0;
}