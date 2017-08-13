#include <stdio.h>

int main()
{
    int N,a,b,c;
    int max=0;
    int temp;
    int score[1000]={0};
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {scanf("%d-%d %d",&a,&b,&c);
    score[a]+=c;
    if(max<score[a])
       {max=score[a];temp=a;}
    }

    printf("%d %d",temp,max);
    return 0;
}
