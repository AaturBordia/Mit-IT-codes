#include <iostream>
using namespace std;
int check_zero(int mat[][10] , int j , int n){
    for(int i = 1;i<n+1;i++){
        if(mat[j][i]==1){
            return 0;
        }
    }
    return 1;
}
void make_zero(int mat[][10] , int j , int n){
    for(int i = 1;i<n+1;i++){
        if(mat[i][j]==1){
            mat[i][j]=0;
        }
    }
}
void topological(int mat2[][10],int n){
    int count = 0;
    int visited[n+1];
    for(int i = 1;i<n+1;i++){
        visited[i] = 0;
    }
    while(count < n){
        for(int i = 1;i<n+1;i++){
            if(visited[i]!=1 && check_zero(mat2,i,n)==1){
                make_zero(mat2,i,n);
                cout << i;
                visited[i]=1;
                count++;
            }
        }
    }
}


int main(){
    int mat2[10][10];
    int mat[10][10],n,m,u,v;
    cout << "enter number of vertices and edges :";
    cin >> n >> m;
    for(int i = 1;i<n+1;i++){
        for(int j = 1;j<n+1;j++){
            mat[i][j] = 0;
            mat2[i][j] = 0;
        }
    }
    cout << "enter adjacent vertices :";
    for(int j = 0;j <m;j++){
        cin >> v >> u;
        mat[u][v] = 1;
        mat2[v][u] = 1;
    }
    topological(mat,n);
}
