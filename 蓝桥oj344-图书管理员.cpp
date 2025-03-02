//����oj344-ͼ�����Ա
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

const int N = 1000;

int main()
{
    int n, q; // n����ͼ���������q������ߵ�����
    int book_num[N]; // ����������ͼ���������
    int reader_l[N], reader_num[N]; // ���ߵ������볤�Ⱥ�����������

    // ����ͼ�������Ͷ�������
    scanf("%d %d", &n, &q);

    // ����ͼ�����
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &book_num[i]);
    }

    // ������ߵ������볤�Ⱥ�������
    for (int i = 0; i < q; i++) 
	{
        scanf("%d %d", &reader_l[i], &reader_num[i]);
    }

    // ��ͼ�����������򣬷������������С��ƥ�����
    sort(book_num, book_num + n);

    // ����ÿ�����ߵĲ�ѯ
    for (int i = 0; i < q; i++) 
	{
        int length = reader_l[i]; // ������ĳ���
        int code = reader_num[i]; // ������
        int min_book = -1; // ��ʼ����Сͼ�����Ϊ-1����ʾδ�ҵ���

        // ��������ͼ�����
        for (int j = 0; j < n; j++) 
		{
            // ��ͼ�����ת��Ϊ�ַ���
            string book_str = to_string(book_num[j]);
            // ��������ת��Ϊ�ַ���
            string code_str = to_string(code);

            // ���ͼ�����ĳ���С��������ĳ��ȣ�ֱ������
            if (book_str.length() < length) continue;

            // ��ȡͼ���������λ
            string suffix = book_str.substr(book_str.length() - length);

            // �����ȡ�Ĳ�����������ƥ��
            if (suffix == code_str) 
			{
                // �����ǰͼ������֮ǰ��¼����С�����С��������С����
                if (min_book == -1 || book_num[j] < min_book) 
				{
                    min_book = book_num[j];
                }
            }
        }

        // ������
        printf("%d\n", min_book);
    }

    return 0;
} 
