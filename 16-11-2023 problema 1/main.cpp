#include <iostream>

using namespace std;

int main()
{
int n,s=0,p=1,k=0;
cin>>n;
while(n!=0)
{
    k++;
    s+=n%10;
    p*=n%10;
    n/=10;
}
cout<<"Suma cifrelor este "<<s<<endl
<<"Produsul cifrelor este "<<p<<endl
<<"Numarul de cifre este "<<k;
return 0;
}
