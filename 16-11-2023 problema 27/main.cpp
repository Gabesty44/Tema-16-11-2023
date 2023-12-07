#include <iostream>

using namespace std;

int main()
{
int n,m=0,k,x,l=0,R=0;
cin>>n>>k;
x=k;
while(n!=0)
{
    l++;
    R=10*R+n%10;
    n/=10;
}
while(k!=0)
{
    R/=10;
    k--;
}
while(R!=0)
{
    m=m*10+R%10;
    R/=10;
}
if(x>=l)
    cout<<"VID";
else
    cout<<m;
return 0;
}
