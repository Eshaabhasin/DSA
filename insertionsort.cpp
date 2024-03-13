#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 and arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}