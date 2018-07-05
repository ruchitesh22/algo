#include<iostream>
#include<cmath>
using namespace std;
long long mult(long long x,long long y,long long n){
long long a,b,c,d;
a=x/pow(10,n/2);
b=x%(long long)pow(10,n/2);
c=y/pow(10,n/2);
d=y%(long long)pow(10,n/2);
cout<<"a:"<<a<<endl;
cout<<"b:"<<b<<endl;
cout<<"c:"<<c<<endl;
cout<<"d:"<<d<<endl<<endl;
if(n!=2)
{cout<<((pow(10,n)*mult(a,c,n/2))+(pow(10,(long long)(n/2))*(mult(a,d,n/2)+mult(b,c,n/2)))+mult(b,d,n/2))<<endl;
 return ((pow(10,n)*mult(a,c,n/2))+(pow(10,(long long)(n/2))*(mult(a,d,n/2)+mult(b,c,n/2)))+mult(b,d,n/2));
}

else
    {
        cout<<((100*a*c)+(10*((a*d)+(b*c)))+(b*d))<<endl;
        return (100*a*c)+(10*((a*d)+(b*c)))+(b*d);
    }
}
int main(){
cout<<(mult(5678,1234,4));
}
