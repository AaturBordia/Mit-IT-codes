#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u,l,i,f;
    printf("Enter the lower and uppper limit\n");
    scanf("%d%d",&l,&u);
    printf("The prime numbers are");
    while(l<=u)
    {
        i=2;
        f=0;
        while(i<l)
        {
            if(l%i==0)
            {
                f=1;
                break;
            }
            i++;
        }
        if(f==0)
            printf("\n%d",l);
        l++;
    }
    return 0;
}
