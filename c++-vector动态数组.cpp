//c++-vector��̬���� 
#include<iostream>
#include<algorithm>
#include<vector> // ʹ�ö�̬�����������ͷ�ļ� 
using namespace std;

int main() {
    vector<int> a(10, 2); // ��a�������10���ռ䣬�����ÿ��ֵ����ʼ��Ϊ2 
    vector<int> b(10);    // Ĭ�ϳ�ʼ��Ϊ0
    vector<int> c;
    c.resize(10);         // ͨ���÷������»�ȡ����c�Ŀռ� 

    // �����������ڱ�����������
    for (auto p = a.begin(); p != a.end(); p++) {
        cout << *p << " "; // ���ֵ���ÿո����
    }
    cout << endl; // ����

    return 0;
}

