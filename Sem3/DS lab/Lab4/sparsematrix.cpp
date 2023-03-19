#include<iostream>
using namespace std;

class SparseMatrix
{
int matrix1[100][100],r1,c1;
int sparse[100][3];
public:
    void input();
    void create_sparse();
    void display();
    void fast_transpose();
    };

void SparseMatrix::input()
{
    cout<<"Enter no of rows: ";
    cin>>r1;
    cout<<"Enter no of cols: ";
    cin>>c1;
    for(int i=0;i<r1;i++)
    {
        for (int j=0;j<c1;j++)
        {
            cout<<"Enter element ["<<i<<"]["<<j<<"]: ";
            cin>>matrix1[i][j];
        }
    }
    create_sparse();
}
void SparseMatrix::create_sparse()
{
    int k=1;
    for(int i=0;i<r1;i++)
    {
        for (int j=0;j<c1;j++)
        {
            if(matrix1[i][j]!=0)
            {
                sparse[k][0]=i;
                sparse[k][1]=j;
                sparse[k][2]=matrix1[i][j];
                k++;
            }
        }
    }

  sparse[0][0]=r1;
  sparse[0][1]=c1;
  sparse[0][2]=k-1;

}
void SparseMatrix::display()
{
    cout<<"\n \tRows|Colums|values";
     for(int i=0;i<=sparse[0][2];i++)
    {
        cout<<"\n";
        for (int j=0;j<3;j++)
        {
            cout<<"\t"<<sparse[i][j];
        }
    }
}

void SparseMatrix::fast_transpose()
{
    int loc, i, col_no;
    int result [100][3];
    int total[sparse[0][1]],index[sparse[0][1]+1];
    for (i=0;i<sparse[0][1];i++)
    {
        total[i]=0;
    }
    for (i=0;i<=sparse[0][2];i++)
    {
        col_no=sparse[i][1];
        total[col_no]++;
    }
    index[0]=1;
    for (i=1;i<sparse[0][1];i++)
    {
        index[i]=index[i-1]+total[i-1];
    }
    result[0][0]=sparse[0][1];
    result[0][1]=sparse[0][0];
    result[0][2]=sparse[0][2];

    for (i=1;i<=sparse[0][2];i++)
    {
        col_no=sparse[i][1];
        loc=index[col_no];
        result[loc][0]=sparse[i][1];
        result[loc][1]=sparse[i][0];
        result[loc][2]=sparse[i][2];
        index[col_no]++;
    }
    cout<<"\n Fast Transpose result";

    cout<<"\n \tRows|Colums|values";
     for(int i=0;i<=result[0][2];i++)
    {
        cout<<"\n";
        for (int j=0;j<3;j++)
        {
            cout<<"\t"<<result[i][j];
        }
    }

}
int main()
{
    SparseMatrix sp1;
    sp1.input();
    sp1.display();
    sp1.fast_transpose();
}


