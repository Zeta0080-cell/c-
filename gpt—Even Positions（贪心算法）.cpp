#include <stdio.h>
#include <string.h>

#define MAX_N 200000

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        char s[MAX_N + 1];
        scanf("%s", s);
        int n = strlen(s);
        
        int left_needed = 0, right_needed = 0;
        int left_count = 0, right_count = 0;
        
        // ͳ����֪�������ź�������
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                left_count++;
            } else if (s[i] == ')') {
                right_count++;
            }
        }
        
        // ������Ҫ���������ź�����������
        left_needed = (n / 2) - left_count;
        right_needed = (n / 2) - right_count;
        
        // ������Ų����㻨��
        int cost = 0;
        int stack[MAX_N]; // �����洢�����ŵ�λ��
        int top = -1; // ջ�Ķ���ָ��
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '?') {
                if (left_needed > 0) {
                    s[i] = '(';
                    left_needed--;
                    stack[++top] = i; // ��¼�����ŵ�λ��
                } else {
                    s[i] = ')';
                }
            } else if (s[i] == '(') {
                stack[++top] = i; // ��¼�����ŵ�λ��
            } else if (s[i] == ')') {
                if (top >= 0) {
                    int left_index = stack[top--]; // ƥ���������λ��
                    cost += (i - left_index);
                }
            }
        }
        
        printf("%d\n", cost);
    }
    
    return 0;
}
