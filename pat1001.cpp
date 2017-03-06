```C++
#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
  int a,b,sum;
  while(cin>>a>>b)
  {
   char str[20];
    int mycount=1,temp;
    sum=a+b;
    if (sum<0)
       {
        cout<<"-";
        sum=-sum;
        }
    else if(sum ==0)
        cout<<"0";

    while(sum>0)
    {#千位符取逗号
       temp=sum%10;
       sum=sum/10;
       str[mycount++]=temp+'0';//转为字符
       if (mycount%4==0 && sum!=0)
            str[mycount++]=',';
    }

    for (int i=mycount-1;i>=1;i--)//倒序输出数组
        cout<<str[i];
    }
    return 0;
}

```
