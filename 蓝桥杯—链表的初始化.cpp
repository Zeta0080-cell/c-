//���ű�������ĳ�ʼ��
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;//�����е����� 
	struct node *next;//������ָ����һ��Ԫ�ص�ָ�� 
};
int main()
{
	int i,n,a;//n��������Ԫ�صĸ�����a������������ÿ�������dataֵ
	struct node *p,*q,*t,*head;//��������ָ������ṹ��ָ��
	//p��������ʱָ�룬q����ָ����һ��Ԫ�أ�t����ѭ���������,headΪ�����ͷָ�� 
	scanf("%d",&n);//��ȡ�����е�Ԫ��n 
	head=NULL;//��ʼ��headָ���ֵ 
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);//ѭ�����������е�dataԪ��
		//��̬����һ���ռ䣬�������һ����㣬������ʱָ��pָ��������
		p=(struct node *)malloc(sizeof(struct node)); 
		p->data=a;//��a��ֵ��ֵ�������е�dataԪ��
		p->next=NULL;//�������е�nextָ���ֵ��ʱΪ��
		if(head==NULL)
		{
			head=p;//��ͷָ��ָ��ǰ���	
		}	
		else
		{
			q->next=p;//������ǵ�һ�������Ľ�㣬����һ�����ĺ��ָ��ָ��ǰ��� 
		}
		q=p;//ָ��qҲָ��ǰ���	 
	}	
	t=head;//tָ�������������
	while(t!=NULL) 
	{
		printf("%d ",t->data);
		t=t->next;
	}
	return 0;
} 
