#include <iostream>

using namespace std;

int main()
{
int n,m,k=0,l=0;
cin>>n;
m=n;
while(m!=0)
{
    k++;
    m/=10;
}
if((n%10)%2==0)
{
    n/=10;
    while(n!=0)
    {
        if((n%10)%2==1)
            l++;
        n/=10;
    }
}
if(l==k-1)
    cout<<"DA";
else
    cout<<"NU";
return 0;
}
