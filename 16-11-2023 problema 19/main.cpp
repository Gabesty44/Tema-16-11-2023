#include <iostream>

using namespace std;

int main()
{
int n,a,b,R=0,p=1,c;
cin>>n>>a>>b;
while(n!=0)
{
    c=n%10;
    if(c==a)
        c=b;
    R=R+c*p;
    n/=10;
    p*=10;
}
cout<<R;
return 0;
}
