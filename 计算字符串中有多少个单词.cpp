//�����ַ������ж��ٸ����� 
#include<stdio.h>
int main()
{
	char c[100],blank;
	int count=1,i;
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
			blank=c[i];
			if(blank=' ')
			{
				count++;
			}
	}
	printf("%d\n",count);
	return 0;
} 
