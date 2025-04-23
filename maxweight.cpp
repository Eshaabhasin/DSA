#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int edge[n];
    vector<int>weight(n,0);
    for(int i=0;i<n;i++){
        cin>>edge[i];
        if(edge[i]!=-1){
            weight[edge[i]]+=i;
        }
    }
    int maxWeight=0,answer=n-1;
    for(int i=0;i<n;i++){
        if(weight[i]>=maxWeight){
            maxWeight=weight[i];
            answer=i;
        }
    }
    cout<<answer<<endl;

}
