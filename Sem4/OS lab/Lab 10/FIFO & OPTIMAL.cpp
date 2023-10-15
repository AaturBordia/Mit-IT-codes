#include <iostream>
using namespace std;
void fifo(int f[10], int nf, int p[20], int np)
{
    int c, i, j, flag=0, ct=-1, npf=0, nh=0, k;
    for(i=0; i<np; i++)
    {
        c=p[i];
        if(i<nf)
        {
            f[i]=p[i];
            npf++;
            cout<<p[i]<<":\t";
            for(j=0; j<nf; j++)
            {
                if(f[j]!=-1)
                    cout<<f[j]<<"\t";
            }
            cout<<endl;
        }
        else
        {
            flag=0;
            for(j=0; j<nf; j++)
            {
                if(p[i]==f[j])
                {
                    flag=1;
                    nh++;
                    cout<<endl<<p[i]<<" : Hit\n";
                    break;
                }
            }
            if(flag==0)
            {
                ct=(ct+1)%nf;
                f[ct]=p[i];
                cout<<endl<<p[i]<<": \t";
                for(k=0; k<nf; k++)
                    cout<<f[k]<<"\t";
                npf++;
            }
        }
    }
    cout<<"Total number of page faults= "<<npf<<endl;
}
void optimal(int f[10], int nf, int p[20], int np)
{
    int c, i, j, flag=0, ct=-1, npf=0, nh=0, k, a[np], lg=0;
    for(i=0; i<np; i++)
    {
        c=p[i];
        if(i<nf)
        {
            f[i]=p[i];
            npf++;
            cout<<p[i]<<":\t";
            for(j=0; j<nf; j++)
            {
                if(f[j]!=-1)
                    cout<<f[j]<<"\t";
            }
            cout<<endl;
        }
        else
        {
            flag=0;
            for(j=0; j<nf; j++)
            {
                if(p[i]==f[j])
                {
                    flag=1;
                    nh++;
                    cout<<endl<<p[i]<<" : Hit\n";
                    break;
                }
            }
            if(flag==0)
            {
                for(k=0; k<np; k++)
                    a[k]=999;
                for(k=0; k<nf; k++)
                {
                    for(j=i; j<np; j++)
                    {
                        if(p[j]==f[k])
                        {
                            a[k]=j;
                            break;
                        }
                    }
                }
                for(k=0; k<nf; k++)
                {
                    if(a[lg]< a[k])
                        lg=k;
                }
                f[lg]=p[i];
                cout<<endl<<p[i]<<": \t";
                for(k=0; k<nf; k++)
                    cout<<f[k]<<"\t";
                npf++;
            }
        }
    }         
    cout<<"\nTotal number of page faults= "<<npf<<endl;
}
int main()
{
    int nf, np, f[10], p[20], i=0, ch;
    cout<<"Enter number of frames\n";
    cin>>nf;
    cout<<"Enter reference string\n";
    for(i=0; i<20; i++)
    {
        cin>>p[i];
        if(p[i]==-1)
            break;
    }
    np=i;
    for(i=0; i<nf; i++)
        f[i]=-1;
    cout<<"1. FIFO\n2. Optimal\n";
    cin>>ch;
    if(ch==1)
        fifo(f,nf,p,np);
    else if(ch==2)
        optimal(f,nf,p,np);
    return 0;
}
