#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,r, count=0;;
cout<<"Enter the number ";
cin>>x;
while(x>0)
{
    r=x%10;
    count++;
    x=x/10;
}
cout<<"The number of digits in the given number is "<<count<<endl;

return 0;
}