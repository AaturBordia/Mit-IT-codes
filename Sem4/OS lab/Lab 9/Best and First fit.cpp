#include <iostream>
using namespace std;
void sorting(int h[10], int p[10], int nh, int np, int id[10])
{
    int i, j, t;
    for(i=0; i<nh-1; i++)
    {
        for(j=0; j<(nh-i-1); j++)
        {
            if(h[j]>h[j+1])
            {
                t= h[j];
                h[j]= h[j+1];
                h[j+1]= t;
                t=id[j];
                id[j]=id[j+1];
                id[j+1]=t;
            }
        }
    }
}
void bestfit(int h[10], int p[10], int nh, int np)
{
    int i, j, t, hl, vis[np], place[np];
    int id[10];
    for(i=0; i<nh; i++)
    {
        id[i]=i;
    }
    vis[np]={0};
    place[np]={0};
    sorting(h,p,nh,np,id);
    for(i=0; i<np; i++)
    {
        for(j=0; j<nh; j++)
        {
            if(p[i]<=h[j])
            {
                vis[i]=1;
                place[i]= id[j];
                hl= h[j]-p[i];
                h[j]=hl;
                sorting(h,p,nh,np,id);
                break;
            }
        }
    }
    for(i=0; i<np; i++)
    {
        if(vis[i]==1)
        {
            cout<<"Process "<<i<<" with memory of "<<p[i]<<" alloted to hole number "<<place[i]<<endl;
        }
    }
    cout<<"Remaining holes are:\n";
    for(i=0; i<nh; i++)
    {
        if(h[i]!=0)
            cout<<h[i]<<endl;
    }
    cout<<"Remaining processes are:\n";
    for(i=0; i<np; i++)
    {
        if(vis[i]==0)
            cout<<p[i]<<endl;
    }
}
void firstfit(int h[10], int p[10], int nh, int np)
{
    int i, j, t, hl, vis[np], place[np];
    vis[np]={0};
    place[np]={0};
    for(i=0; i<np; i++)
    {
        for(j=0; j<nh; j++)
        {
            if(p[i]<=h[j])
            {
                vis[i]=1;
                place[i]= j;
                hl= h[j]-p[i];
                h[j]=hl;
                break;
            }
        }
    }
    for(i=0; i<np; i++)
    {
        if(vis[i]==1)
        {
            cout<<"Process "<<i<<" with memory of "<<p[i]<<" alloted to hole number "<<place[i]<<endl;
        }
    }
    cout<<"Remaining holes are:\n";
    for(i=0; i<nh; i++)
    {
        if(h[i]!=0)
            cout<<h[i]<<endl;
    }
    cout<<"Remaining processes are:\n";
    for(i=0; i<np; i++)
    {
        if(vis[i]==0)
            cout<<p[i]<<endl;
    }
}
int main() 
{
    int h[10], p[10], np, nh, i, ch;
    cout<<"Enter number of holes and their memory\n";
    cin>>nh;
    for(i=0; i<nh; i++)
        cin>>h[i];
    cout<<"Enter number of processes and their memory\n";
    cin>>np;
    for(i=0; i<np; i++)
        cin>>p[i];
    cout<<"1 for Best Fit or 2 for First Fit\n";
    cin>>ch;
    if(ch==1)
        bestfit(h, p, nh, np);
    else if(ch==2)
        firstfit(h, p, nh, np);
    else
        cout<<"Invalid choice\n";
    return 0;
}