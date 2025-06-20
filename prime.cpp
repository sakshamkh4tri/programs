#include<iostream>
using namespace std;
int main()
{
int n;
int prime;
cout<<"Enter the number: ";
cin>>n;
for(int i=2; i<n; i++){
    if(n%i==0){
        prime=1;
    }
}
if(prime){
    cout<<"Not prime";
}
else{
    cout<<"Prime";
}
return 0;
}