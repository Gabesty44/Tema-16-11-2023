#include <iostream>

using namespace std;

int main()
{
int n,R=0,p=1,c;
cin>>n;
while(n!=0)
{
    c=n%10;
    if(c==0)
    {
        R*=10;
    }
    else
        R+=c*p;
    p*=10;
    n/=10;
}
cout<<R;
return 0;
}
