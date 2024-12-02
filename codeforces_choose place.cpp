//codeforces��choose place
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> classroom(6);  // ��vector�洢ÿ�п�����Ϣ

    // ��ȡ��������
    for (int i = 0; i < 6; i++) {
        std::cin >> classroom[i];
    }

    // ������������飬Խ�����ڰ�ĵط�Խ����
    int convenience[6][3] = {
        {3, 2, 1}, // ��һ��
        {3, 2, 1}, // �ڶ���
        {4, 3, 2}, // ������
        {4, 3, 2}, // ������
        {5, 4, 3}, // ������
        {5, 4, 3}  // ������
    };

    int maxConvenience = -1;  // ����λ�õı�����
    int bestRow = -1, bestCol = -1;  // ����λ�õ���������

    // ����ÿ��λ�ã�Ѱ�����ſ�λ
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {  // ÿ��������λ��
            if (classroom[i][j * 3] == '.' && convenience[i][j] > maxConvenience) {
                // �ҵ�һ����λ���������λ�ø�����
                maxConvenience = convenience[i][j];
                bestRow = i;
                bestCol = j;
            }
        }
    }

    // ������λ�ñ��Ϊ'P'
    classroom[bestRow][bestCol * 3] = 'P';

    // ����޸ĺ�Ŀ�������
    for (int i = 0; i < 6; i++) {
        std::cout << classroom[i] << std::endl;
    }

    return 0;
}

