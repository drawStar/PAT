#include<stdio.h>

int main()
{
    int i=0,j,k=0;
    int n;
    char c;
    int m=1;
    scanf("%d %c",&n,&c);
    while((m+1)*(m+1)/2-1<=n)
        m+=2;
    m=m-2;

    for(i=m;i>0;i=i-2)
    {
        for(j=0;j<k;j++)
            printf(" ");
        for(j=0;j<i;j++)
            printf("%c",c);
        printf("\n");
        k++;
    }
    k--;
        for(i=1;i<=m;i=i+2)
    {
        if (i==1)
            continue;
        for(j=1;j<k;j++)
            printf(" ");
        for(j=0;j<i;j++)
            printf("%c",c);
        printf("\n");
        k--;
    }

    printf("%d",n-((m+1)*(m+1)/2-1));

    return 0;
}
