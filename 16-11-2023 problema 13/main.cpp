#include <iostream>

using namespace std;

int main()
{
int n,m,i,k;
cin>>n;
for(i=9;i>=0;i--)
{
    m=n;
    k=0;
    while(m!=0)
    {
        if(m%10==i)
            k++;
        m=m/10;
    }
    if(k==0)
        cout<<"Cifra "<<i<<" nu apare"<<endl;
    else
        if(k==1)
            cout<<"Cifra "<<i<<" apare o singura data"<<endl;
        else
            cout<<"Cifra "<<i<<" apare de "<<k<<" ori"<<endl;
}
return 0;
}
