#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }

    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool ans=isprime(n);
    if(n!=1 && ans==true){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a prime number";
    }
}