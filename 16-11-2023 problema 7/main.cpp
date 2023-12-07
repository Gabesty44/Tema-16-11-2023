#include <iostream>

using namespace std;

int main()
{
int n,m,c,l=0,k=0;
cin>>n;
m=n;
c=n%10;
while(m!=0)
{
    k++;
    m/=10;
}
while(n!=0)
{
    if(n%10==c)
        l++;
    n/=10;
}
if(k==l)
    cout<<"DA";
else
    cout<<"NU";
return 0;
}
