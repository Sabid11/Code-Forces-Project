
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    // cout<<"Max = "<<max({a,b,c})<<endl<<"Min = "<<min({a,b,c})<<endl;
    // Minimum
    if(a<b&&a<c){
            cout<<a<<" ";
    }else if(b<c){
        cout<<b<<" ";
    }else{
        cout<<c<<" ";
    }
     // maximum
    if(a>b && a>c){
            cout<<a;
    }else if(b>c){
        cout<<b;
    }else{
        cout<<c;
    }
}
