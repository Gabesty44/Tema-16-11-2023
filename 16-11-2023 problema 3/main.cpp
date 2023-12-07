#include <iostream>

using namespace std;

int main()
{
int n,m,ogl=0;
cin>>n;
m=n;
while(n!=0)
{
    ogl=ogl*10+n%10;
    n/=10;
}
if(m==ogl)
    cout<<"Numarul este palindrom";
else
    cout<<"Numarul nu este palindrom";
return 0;
}
