#include<iostream>
using namespace std;
class stack{
public:
    int a[100],top=-1;
    void push(int ele){a[++top]=ele;}
    int pop(){return a[top--];}
    bool isEmpty(){return top==-1;}
};
int main(){
stack q;
int a[10][10],n,ch,v1,v2,label,end;
cout<<"enter the value of vertices:";cin>>n;
for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        a[i][j]=0;
cout<<"enter the no of edges:";cin>>ch;
cout << "enter adjacent vertices :";
for(int i=0;i<ch;i++){
            cin>>v1;
            cin>>v2;
            a[v1][v2]=1;
            a[v2][v1]=1;
}
cout<<"enter the start vertex:";cin>>label;
cout<<"enter the end vertex:";cin>>end;
cout<<"path is:";
int visited[n+1];
for(int i=1;i<=end;i++)
    visited[i]=0;
visited[label]=1;
q.push(label);
while(!q.isEmpty()){
        int w=q.pop();
        cout<<w<< "   " ;
        if(w==end)break;
    for(int u=1;u<=end;u++){
       if(a[w][u]==1&&visited[u]!=1){
        q.push(u);
        visited[u]=1;
       }
    }
}
}

