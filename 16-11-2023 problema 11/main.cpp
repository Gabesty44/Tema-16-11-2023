#include <iostream>

using namespace std;

int main()
{
int n,m,i,R=0;
cin>>n;
for(i=9;i>=0;i--)
{
    m=n;
    while(m!=0)
    {
        if(m%10==i)
            R=R*10+m%10;
        m/=10;
    }
}
cout<<R;
return 0;
}
