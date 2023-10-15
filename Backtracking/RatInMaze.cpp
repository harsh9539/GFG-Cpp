#include<bits/stdc++.h>
using namespace std;

bool isSafe(int maze[][20],int x,int y,int n){
    if(x>=0 && x<n && y>=0 && y<n && maze[x][y]==1){
        return true;
    }
    return false;
}

bool solveMaze(int maze[][20],int x,int y,int sol[][20],int n){
    if(x==n-1 && y==n-1){
        sol[x][y]=1;
        return true;
    }
    if(isSafe(maze,x,y,n)){
        sol[x][y]=1;
        if(solveMaze(maze,x+1,y,sol,n)){
            return true;
        }
        if(solveMaze(maze,x,y+1,sol,n)){
            return true;
        }
        sol[x][y]=0;
        return false;
    }
    return false;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maze[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>maze[i][j];
            }
        }
        int sol[n][n];
        memset(sol,0,sizeof(sol));
        if(solveMaze(maze,0,0,sol,n)){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<sol[i][j]<<" ";
                }
            }
        }
        else{
            cout<<"-1";
        }
        cout<<endl;
    }


    return 0;
}