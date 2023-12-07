#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n,n1,n2,n3,k=0,i,x,ogl=0,mij,y,j=1,z,y1,l=0;
cin>>n;
n1=n2=n3=n;
while(n1!=0)
{
    k++;
    n1/=10;
}
if(k%2==0)
{
    while(n>=pow(10,k/2))
        n/=10;
    if(k>5)
        x=n2-n*pow(10,k/2)+1;
    else
        x=n2-n*pow(10,k/2);
    cout<<x<<n;

}
else
{
    if(k/2==2)
        j=100;
    else
        j*=pow(10,k/2);
    z=n3%j;
    while(n2>=pow(10,k/2))
        n2/=10;
    y=n3-n2*pow(10,(k/2)+1)+1;
    y1=y;
    while(y1!=0)
    {
        l++;
        y1/=10;
    }
    if(l==k/2)
        mij=0;
    else
        while(y>=10)
        {
            mij=y/10;
            y/=10;
        }
    cout<<z<<mij<<n2;
}
return 0;
}
