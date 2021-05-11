#include <stdio.h>
int main()
{
	int count=0;
	while (getchar()!='\n')
       {
	   count=count+1;
       }
    printf("一共输入了%d个字符！\n",count);
    return 0;
}
