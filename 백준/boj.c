#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#if 0
#include <stdio.h>

int main() {
    char line[101]; 

    while (gets(line)) {
        printf("%s\n", line);  
    }

    return 0;
}
#endif
#if 0
int main() {
    int n = 0;
    int A[100000] = { 0 };
    int M = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    int a, b;
    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", A[a] + A[b]);
    }
}

#endif

#if 0 //8958
int main() {
    int num = 0;
    scanf("%d\n", &num);
    int xx = 0; // 연속된 수 카운트
    char s = 0;
    int total = 0;
    for (int i = 0; i < num; i++) {
        total = 0;
        xx = 0;
        for (int j = 0; j < 80; j++) {
            scanf("%c", &s);
            if (s == 'O') {
                xx += 1;
                total += xx;
            }
            else if (s == '\n') {
                break;
            }
            else if(s=='X'){
                xx = 0;
            }
        }
        printf("%d\n", total);
    }
    
}
#endif

#if 1 //10250
int main() {
    int num = 0;
    int H, W, sum = 0;
    int cnt = 0;
    int cnt2 = 1;
    int front = 0;
    int back = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d %d %d", &H, &W, &sum);
        cnt = 0;
        for (;;) {
            cnt++;
            sum = sum - H;
            
            if (sum <= 0) {
                front = sum+H;
                back = cnt;
                break;
            }
            
        }
        if (back < 10) {
            printf("%d0%d\n",front, back);
        }
        else if (back >= 10) {
            printf("%d%d\n", front, back);
        }
    }


}

#endif