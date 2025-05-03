//https://www.codechef.com/practice/course/two-pointers/SLIDINGWINDO/problems/SLDW0102
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=0;
    int maximum_sum=INT_MIN;
    int sum=0;
        
     while(j<n){
            sum+=arr[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                maximum_sum=max(maximum_sum,sum);
                sum-=arr[i];
                i++;
                j++;
                
            }
        
        
    }
    cout<<maximum_sum<<endl;
    
	// your code goes here

}
