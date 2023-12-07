#include <iostream>

using namespace std;

int main()
{
int s=0,a,b;
cin>>a>>b;
while(a!=0)
{
    if(b%(a%10)!=0)
        s+=a%10;
    a/=10;
}
cout<<s;
return 0;
}
