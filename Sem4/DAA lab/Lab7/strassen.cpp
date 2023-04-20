#include<iostream>
using namespace std;
int main()
{
    int i, j, a[2][2],b[2][2],c[2][2];
    cout<<"Enter the elements of matrix A: ";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            cin>>a[i][j];
    }
    cout<<"Enter the elements of matrix B: ";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            cin>>b[i][j];
    }
    int p, q, r, s, t, u, v;
    p= (a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
    q= (a[1][0]+a[1][1])*b[0][0];
    r= a[0][0]*(b[0][1]-b[1][1]);
    s= a[1][1]*(b[1][0]-b[0][0]);
    t= (a[0][0]+a[0][1])*b[1][1];
    u= (a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
    v= (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
    c[0][0]= p+s+v-t;
    c[0][1]= r+t;
    c[1][0]= q+s;
    c[1][1]= p+r-q+u;
    cout<<"The multiplication of these matrices are: \n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
            cout<<c[i][j]<<"\t";
        cout<<"\n";
    }
    return 0;
}
