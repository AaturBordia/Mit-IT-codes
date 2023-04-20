#include <iostream>
using namespace std;
int n;
int dfs(int v,int reach[],int a[][10]){
    int count = 0;
    int st[100];
    int top = -1;
    reach[v] = 1;
    st[++top] = v;
    while(top!= -1){
        int w;
        w = st[top--];
        count++;
        for(int u=1;u<=n+1;u++){
            if(a[w][u]!=0 && !reach[u]){
                st[++top] = u;
                reach[u] = 1;
            }
        }
    }
    return count;
}
int main(){
    int m;
    cout << "enter number of vertices and edges :";
    cin >> n >> m;
    int adjMat[10][10];
    for (int i = 1; i < n+1; i++){
        for (int j = 1; j < n+1; j++){
            adjMat[i][j]=0;
        }
    }
    cout << "enter the vertices that are adjacent :";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjMat[u][v] = 1;
        //adjMat[v][u] = 1;
    }
    for (int i = 1; i < n+1; i++){
        for (int j = 1; j < n+1; j++){
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
    int reach[n+1];
    for(int i = 1;i<n+1;i++){
        reach[i] = 0;
    }
    for(int i = 1;i < n+1;i++){
        if(dfs(i,reach,adjMat)==n){
            cout << i << " is mother vertex" << endl;
        }
    }
    return 0;
}
