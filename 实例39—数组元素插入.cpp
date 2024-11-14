#include <stdio.h>

#define MAX_SIZE 10 // �������������С

// �������ڽ���Ԫ�ز��뵽�������������
void insertIntoSortedArray(int arr[], int size, int newElement) 
{
    int i;
    // �ҵ������
    for (i = size - 1; (i >= 0) && (newElement < arr[i]); i--) 
	{
        arr[i + 1] = arr[i]; // ��Ԫ������ƶ�
    }
    // ������Ԫ��
    arr[i + 1] = newElement;
}

int main() 
{
    int arr[MAX_SIZE] = {1, 3, 5, 7, 9}; // �����������
    int size = 5; // ����ĵ�ǰ��С
    int newElement = 6; // Ҫ�������Ԫ��

    // ȷ�������пռ������Ԫ��
    if (size < MAX_SIZE)
	{
        // ������Ԫ��
        insertIntoSortedArray(arr, size, newElement);
        size++; // ���������С
    } 
	else 
	{
        printf("Array is full. Cannot insert new element.\n");
    }

    // ��ӡ���
    printf("Sorted array after insertion: ");
    for (int i = 0; i < size; i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
