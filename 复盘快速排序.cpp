#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

const int N=1e6+10; // ���������С
int q[N]; // ��������ֻ��Ҫ��һ�����鼴�� 

void quick_sort(int q[], int l, int r) // ����Ĳ����ֱ������飬���ұ߽�
{
    if(l >= r) return; // �ݹ���ֹ����

    int i = l - 1, j = r + 1; // ����ָ����ƫ�����жϣ�����������Ҫ���ƫ���� 
    int x = q[(l + r) >> 1]; // x��ȡֵ�������⣬����ȡ�м�ֵ

    while(i < j)
    {
        do i++; while(q[i] < x); // ���������ҵ���һ�����ڵ���x��Ԫ��
        do j--; while(q[j] > x); // ���������ҵ���һ��С�ڵ���x��Ԫ��
        if(i < j) swap(q[i], q[j]); // ����������Ԫ��
    }

    quick_sort(q, l, j); // �ݹ鴦����벿��
    quick_sort(q, j + 1, r); // �ݹ鴦���Ұ벿��
} 

int main()
{
    int n; // n������Ҫ�����Ԫ�ظ���
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &q[i]); // �����������Ԫ��    
    }    
    quick_sort(q, 0, n - 1); // ���ÿ���������������µ�����
    for(int i = 0; i < n; i++)
    {
        printf("%d ", q[i]);    
    } 
    return 0;
}	

