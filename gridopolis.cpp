#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char grid[2][n];
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
                cin>>grid[i][j];
        }
    }
    int ans=0;
    for(int i=1;i<n-2;i++){
        if( grid[0][i]=='.' && grid[1][i-1]=='x' && grid[1][i+1]=='x'){
            ans++;
        }
        if( grid[1][i]=='.' && grid[0][i-1]=='x' && grid[0][i+1]=='x'){
            ans++;
        }
    }
    cout<<ans<<endl;

}