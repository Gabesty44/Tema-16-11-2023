#include <iostream>

using namespace std;

int main()
{
int n,x=1;
cin>>n;
while(n>=10 && x==1)
{
    if(n%10<(n/10)%10)
        x=0;
    n/=10;
}
if(x==1)
    cout<<"DA";
else
    cout<<"NU";
return 0;
}
