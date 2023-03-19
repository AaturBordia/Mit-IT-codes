#include<iostream>
#include<stdio.h>

using namespace std;

class student
{
    char name[100];
    int r;
    char c[2];

public:
    void read(student s[],int n)
    {
        for(int i=0; i<n; i++)
        {
            cout<<"Enter your name: ";
            gets(s[i].name);
            cout<<"Enter roll no: ";
            cin>>(s[i].r);
            fflush(stdin);
            cout<<"Enter grade: ";
            gets(s[i].c);

        }
    }
    void display(student s[],int n)
    {
        for(int i=0; i<n; i++)
        {
            cout<<"Details of student "<<i+1<<":\n";
            cout<<"Name: "<<s[i].name<<endl;
            cout<<"Roll No: "<<s[i].r<<endl;
            cout<<"Grade: "<<s[i].c<<endl;
        }
    }
    void sortt(student s[],int n)
    {
        student temp;
        int min;
        for(int i=0; i<n; i++)
        {
            min=i;
            for(int j=i+1; j<n; j++)
            {
                if(s[j].r<s[min].r)
                {
                    min=j;
                }
            }
            temp=s[i];
            s[i]=s[min];
            s[min]=temp;
        }
    }

};

int main()
{
    int n;
    cout<<"Enter the total number of students: ";
    cin>>n;
    fflush(stdin);
    student s[n],std;

    std.read(s,n);
    std.sortt(s,n);
    std.display(s,n);



    return 0;
}
