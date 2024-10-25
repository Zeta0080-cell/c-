#include <stdio.h>

unsigned long long rabbit_pairs(int n) {
    if (n == 1 || n == 2) {
        return 1; 
    }
    unsigned long long prev2 = 1; // F(1)
    unsigned long long prev1 = 1; // F(2)
    unsigned long long current = 0;
    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2; // F(n) = F(n-1) + F(n-2)
        prev2 = prev1; // ����F(n-2)
        prev1 = current; // ����F(n-1)
    }
    return current; // ���ص�n���µ����Ӷ���
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%llu\n", rabbit_pairs(n)); // �����n���µ����Ӷ���
    return 0;
}
