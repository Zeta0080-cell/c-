//�����ʽ
//������һ����ʽ��xyz+yzz=532;�����x��y��z��ֵ������xyz��yzz��Ϊ��λ����
//���˼�� 
#include<stdio.h>
int main()
{
	int x,y,z,m,sum;
	for(x=0;x<10;x++)
    	for(y=0;y<10;y++)
    		for(z=0;z<10;z++)
    		{
    			sum=100*x+10*y+z+100*y+10*z+z;
    			if(sum==532)
    			{
    				printf("��������λ�����н���ǣ�\n"); 
    				printf("%d %d %d",x,y,z);
				}
		    }
	return 0;
}
