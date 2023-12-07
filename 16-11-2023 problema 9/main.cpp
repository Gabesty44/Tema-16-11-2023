#include <iostream>

using namespace std;

int main()
{
int n,n1,n2,u,prima,c2;
cin>>n;
n1=n;
u=n%100;
while(n!=0)
{
    prima=n%10;
    n/=10;
}
while(n1>=10)
{
    c2=n1%10;
    n1/=10;
}
cout<<prima<<c2<<u;
return 0;
}
