#include<stdio.h>
#include<string.h>
struct Student
{
char num[15];
int num1;
int num2;
};

int main()
{
int b[1000];
int N,M,i=0,j=0;
struct Student stu[1000];

scanf("%d",&N);
for(i=0;i<N;i++)
	scanf("%s %d %d",stu[i].num,&stu[i].num1,&stu[i].num2);
scanf("%d",&M);
for(i=0;i<M;i++)
	scanf("%d",&b[i]);
	for(j=0;j<M;j++)
	{
for(i=0;i<N;i++)

		if(b[j] == stu[i].num1)
		{
			printf("%s %d\n",stu[i].num,stu[i].num2);
		}
	}

return 0;
}
