#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n,n1,n2,n3,n4,cu,cz,u2,prima,k,c2,x=1,R=0;
cin>>n;
n1=n2=n3=n4=n;
cu=n%10;
u2=n%100;
while(n1!=0)
{
    k++;
    n1/=10;
}

while(n2>=pow(10,k-2))
{
    cz=n2%10;
    n2/=10;
}
while(n!=0)
{
    prima=n%10;
    n/=10;
}
while(n3>=10)
{
    c2=n3%10;
    n3/=10;
}
while(n4!=0)
{
    if(x==1)
    {
        R=R*10+n4%10;
        x-=1;
    }
    else
        x+=1;
    n4/=10;
}
cout<<"Cifra unitatilor este "<<cu<<endl
<<"Cifra zecilor este "<<cz<<endl
<<"Prima cifra este "<<prima<<endl
<<"Numarul format din ultimele 2 cifre este "<<u2<<endl
<<"Numarul format din primele 2 cifre este "<<prima<<c2<<endl
<<"Numarul format din prima, a treia etc. cifra este "<<R;
return 0;
}
