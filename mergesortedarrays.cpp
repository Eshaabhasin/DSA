#include<iostream>
using namespace std;
void mergesorted(int a[],int m,int b[],int n){
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(j>=0 && i>=0){
        if(a[i]>b[j]){
            a[k]=a[i];
            k--;
            i--;
        }
        else{
            a[k]=b[j];
            k--;
            j--;
        }
    }
    while(j>=0){
        a[k]=b[j];
        k--;
        j--;
    }

}
void printarray(int a[],int m){
    for(int i=0;i<m;i++){
        cout<<a[i];
    }
}
int main(){
    int a[7]={3,5,8};
    int m=3;
    int b[4]={1,2,4,6};
    int n=4;
    mergesorted(a,m,b,n);
    printarray(a,m+n);
}