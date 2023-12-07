#include <iostream>

using namespace std;

int main()
{
int n,s;
cin>>n;
while(n>9)
{
    s=0;
    while(n!=0)
    {
        s+=n%10;
        n/=10;
    }
    n=s;
}
cout<<s;
return 0;
}
