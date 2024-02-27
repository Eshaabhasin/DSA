#include<iostream>
using namespace std;
int sum1(int n){
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sum1(n);
}