#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float i;
    float inc=1;
    i=1;
    int currentprecision=0;
    int totalprecision=2;
    while(currentprecision<=totalprecision){
        while(i*i<=n){
            i=i+inc;

        }
        i=i-inc;
        inc=inc/10;

        currentprecision=currentprecision+1;
    }
    cout<<i;


   
}