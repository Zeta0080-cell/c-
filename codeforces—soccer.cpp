#include <iostream>
#include <cmath> // ���� abs ����

using namespace std;

int main() {
    int t; // ����������
    cin >> t;

    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        // ��������ʱ���ķ�����ֵ
        int d1 = abs(x1 - y1);
        int d2 = abs(x2 - y2);

        // ���������ֵ֮��Ĳ��Ƿ�Ϊż��
        if ((d2 - d1) % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
