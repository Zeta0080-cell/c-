//Ͱ����-level3 (���ظ�Ԫ��)
#include<stdio.h>
int main()
{
  int arr[500005]={0};
  int n=0;
  int num1;
  scanf("%d",&n);//������Ҫ����ĸ��� 
  for(int i=0;i<n;i++)
  {
    scanf("%d",&num1);
    arr[num1]++;
  }
  for(int i=0;i<=n;i++)
  {
    for(int j=1;j<=arr[i];j++)
    {
      printf("%d ",i);
    }
  }
  return 0;
}
