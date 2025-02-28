//�ٴθ���-�������� 
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e6 + 10;
int q[N];
int n;

void quick_sort(int q[], int l, int r) {
    int i, j; // ��������ָ��
    int x;
    x = q[(l + r) / 2]; // ѡȡ�м�ֵ��Ϊ��׼
    i = l - 1;
    j = r + 1; // ��ָ�븳���ֵ��������ƫ����

    if (l >= r) {
        return;
    }

    while (i < j) {
        do {
            i++;
        } while (q[i] < x); // �����ƶ�i��ֱ���ҵ�һ�����ڵ���x��Ԫ��
        do {
            j--;
        } while (q[j] > x); // �����ƶ�j��ֱ���ҵ�һ��С�ڵ���x��Ԫ��
        if (i < j) {
            swap(q[i], q[j]); // ���i < j���ͽ���q[i]��q[j]
        }
    }

    quick_sort(q, l, j); // �ݹ鴦����벿��
    quick_sort(q, j + 1, r); // �ݹ鴦���Ұ벿��
}

int main() {
    cin >> n; // ������Ҫ���������n
    for (int i = 0; i < n; i++) {
        cin >> q[i]; // ����Ҫ��������ִ�������
    }
    quick_sort(q, 0, n - 1); // �������򣬴���������˿�ʼ
    for (int i = 0; i < n; i++) {
        cout << q[i] << " "; // �������������
    }
    return 0;
}

