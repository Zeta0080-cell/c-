//��������
 #include <stdio.h>

int main() {
    // �׶ӳ�Ա
    char teamA[3] = {'a', 'b', 'c'};
    // �Ҷӳ�Ա
    char teamB[3] = {'x', 'y', 'z'};

    // ��ӡ�����������
    printf("%c vs %c\n", teamA[0], teamB[2]); // a vs z
    printf("%c vs %c\n", teamA[1], teamB[0]); // b vs x
    printf("%c vs %c\n", teamA[2], teamB[1]); // c vs y

    return 0;
}
