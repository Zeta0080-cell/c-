#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
    int t; // ����������
    cin >> t;

    while (t--) {
        int n; // Լ�������ĸ���
        cin >> n;

        int low = 1, high = 1000000000; // k �ĳ�ʼ��Χ
        int loss[100]; // �����洢�ų���ֵ
        int loss_count = 0; // �ų������ĸ���

        // ��ȡԼ������
        for (int i = 0; i < n; i++) {
            int a, x;
            cin >> a >> x;

            if (a == 1) {
                // k >= x
                if (x > low) {
                    low = x;
                }
            } else if (a == 2) {
                // k <= x
                if (x < high) {
                    high = x;
                }
            } else if (a == 3) {
                // k != x
                loss[loss_count++] = x;
            }
        }

        // ��� low > high��˵��û������������k
        if (low > high) {
            cout << "0\n";
            continue;
        }

        // �������� [low, high] �е���������
        long long result = high - low + 1;

        // �ų�������ĳЩֵ����
        for (int i = 0; i < loss_count; i++) {
            if (loss[i] >= low && loss[i] <= high) {
                result--;
            }
        }

        cout << result << endl;
    }

    return 0;
}
