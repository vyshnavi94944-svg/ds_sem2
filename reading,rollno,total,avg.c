#include <stdio.h>
struct student {
    int rno;
    int m1, m2, m3;
    int total,average;

};

int main() {
    int n, i;
    struct student s[50];

    printf("Enter number of students:\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter student %d details: ", i + 1);
        scanf("%d %d %d %d", &s[i].rno, &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].average = s[i].total/3;
    }

    printf("R.No Total Average\n");
    for(i = 0; i < n; i++) {
        printf("%d   %d   %d\n", s[i].rno, s[i].total, s[i].average);
    }

    return 0;
}


