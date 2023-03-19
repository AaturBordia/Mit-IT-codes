#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char str1[100];
    char str2[100];
    int ch,i,count=0;
    bool cmp=false;
    cout<<"1.Length of the string\n 2.string concatenation\n 3.string comparison\n 4.To insert a sub string\n 5.To delete a substring \n";
    cout<<"Enter your choice: ";
    cin>>ch;
    fflush(stdin);

    switch(ch)
    {
    case 1:
    {


        cout<<"Enter the string: ";
        gets(str1);
        fflush(stdin);
        while(str1[count]!='\0')
        {
            count++;
        }
        cout<<"The length of the string is: "<<count;
    }
    break;
    case 2:
    {
        cout<<"Enter string 1: ";
        gets(str1);
        fflush(stdin);
        cout<<"Enter string 2: ";
        gets(str2);
        fflush(stdin);
        cout<<"String after concatenating: "<<str1<<""<<str2;
    }
    break;
    case 3:
    {
        cout<<"Enter string 1: ";
        gets(str1);
        fflush(stdin);
        cout<<"Enter string 2: ";
        gets(str2);
        fflush(stdin);
        while(str1[count]!='\0'&&str2[count]!='\0')
        {
            if(str1[count]==str2[count])
                cmp=true;
            else
                cmp=false;
            count++;
        }
        if(cmp)
        {
            cout<<"Strings are equal";
        }
        else
        {
            cout<<"Strings are not equal";

        }
    }
        break;

        case 4:
        {
            char a[50], b[50];
            cout<<"Enter the main string:"<<endl;
            gets(a);
            cout<<"Enter the sub string:"<<endl;
            gets(b);
            int n, al, bl;
            cout<<"Enter the location to enter the sub string:";
            cin>>n;
            al=strlen(a);
            bl=strlen(b);

            for(int i=1; i<=(al-n); i++)
            {
                a[al+bl-i]=a[al-i];
            }
            a[al+bl]='\0';

            for(int j=0; j<bl; j++)
            {
                a[n+j]=b[j];
            }
            cout<<a;
        }
        break;

        case 5:
        {
            char a[50], b[50];
            cout<<"Enter the main string:"<<endl;
            gets(a);
            cout<<"Enter the sub string:"<<endl;
            gets(b);
            int al=strlen(a),bl=strlen(b);
            bool flag=false;
            int loc=-1;



            for (int i=0; i<=al-bl; i++)
            {
                for (int j=i; j<i+bl; j++)
                {
                    flag=true;
                    if(a[j]!=b[j-i])
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag==true)
                {
                    loc=i;
                    break;
                }
            }

            if (loc==-1)
            {
                cout<<"Substring not found in string";
                return 0;
            }
            for(int i=0; i<al-loc; i++)
            {
                a[loc+i]=a[loc+bl+i];
            }
            cout<<a;

        }
        break;

        default:
            cout<<"wrong choice";
        }
        return 0;
    }
