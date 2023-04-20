#include <iostream>
using namespace std;
void simple_merge(int a[], int low, int mid, int high)
{
    int i,j,k,c[20];
    k=low;
    i=low;
    j=(mid+1);
    while((i<=mid)&&(j<=high))
    {
        if(a[i]<a[j])
            c[k++]=a[i++];
        else
            c[k++]=a[j++];
    }
    while(i<=mid)
        c[k++]=a[i++];
    while(j<=high)
        c[k++]=a[j++];
    for(i=low; i<=high; i++)
        a[i]=c[i];
}
void merge_sort(int a[], int low, int high)
{
    int mid;
    if(low<high)
    {
        mid=((low+high)/2);
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        simple_merge(a,low,mid,high);
    }
}
int main()
{
    int n, i;
    cout<<"Enter no. of elements\n";
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cout<<"Enter element\n";
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    for(i=0; i<n; i++)
    {
        cout<<"Element= "<<a[i]<<endl;
    }
    return 0;
}
