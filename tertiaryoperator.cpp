#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    (n%2==0)?cout<<"Even\n":cout<<"Odd\n";
    bool ans=n%2==0?true:false;
    if(ans){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}