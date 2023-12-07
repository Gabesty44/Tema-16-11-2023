#include <iostream>

using namespace std;

int main()
{
int n,u,s=0;
cin>>n;
u=n%10;
while(n>=10)
    n/=10;
s=u+10*n;
cout<<s;
return 0;
}
