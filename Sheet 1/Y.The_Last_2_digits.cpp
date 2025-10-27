// The last 2 digit
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d,e;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    e = a*b*c*d;
    cout<<setw(2)<<setfill('0')<<e%100;
}
