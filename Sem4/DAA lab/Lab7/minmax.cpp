#include<iostream>
using namespace std;
class element
{
public:
    int mn;
    int mx;
};
element findminmax( int a[], int l, int h)
{
    element m, m1, m2;
    if(l==h)
    {
        m.mn= a[l];
        m.mx= a[l];
        return m;
    }
    if(h==(l+1))
    {
        if(a[l]>a[l+1])
        {
            m.mx= a[l];
            m.mn= a[l+1];
        }
        else
        {
            m.mx= a[l+1];
            m.mn= a[l];
        }
        return m;
    }
    int mid= (l+h)/2;
    m1= findminmax(a, l, mid);
    m2= findminmax(a, mid+1, h);
    if(m1.mn < m2.mn)
        m.mn= m1.mn;
    else
        m.mn= m2.mn;
    if(m1.mx < m2.mx)
        m.mx= m2.mx;
    else
        m.mx= m1.mx;
    return m;
}
int main()
{
    int i, n, l=0, h;
    cout<<"Enter number of elements\n";
    cin>>n;
    int a[n];
    h=n-1;
    cout<<"Enter elements\n";
    for(i=0; i<n; i++)
        cin>>a[i];
    element m;
    m= findminmax(a, l, h);
    cout<<"Minimun= "<<m.mn<<endl;
    cout<<"Maximum= "<<m.mx<<endl;
    return 0;
}
