#include <iostream>

using namespace std;

int main()
{
int x,y,z=0,p=1;
cin>>x>>y;
while(x!=0)
{
    z=z+x%10*p;
    p*=10;
    z=z+y%10*p;
    x/=10;
    y/=10;
    p*=10;
}
cout<<z;
return 0;
}
