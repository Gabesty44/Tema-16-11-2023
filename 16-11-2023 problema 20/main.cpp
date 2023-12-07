#include <iostream>

using namespace std;

int main()
{
int n,R=0,p=1,c;
cin>>n;
while(n!=0)
{
    c=n%10;
    if(c!=0)
        c-=1;
    R=R+c*p;
    n/=10;
    p*=10;
}
cout<<R;
return 0;
}
