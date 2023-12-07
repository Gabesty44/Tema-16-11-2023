#include <iostream>

using namespace std;

int main()
{
int n,R=0,ogl=0;
cin>>n;
while(n!=0)
{
    if((n%10)%2==0)
        R=R*10+n%10;
    n/=10;
}
while(R!=0)
{
    ogl=ogl*10+R%10;
    R/=10;
}
cout<<ogl;
return 0;
}
