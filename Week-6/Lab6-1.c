#include <stdio.h>
int main() {
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int input, check1[] = {0, 0}, check2[] = {0, 0};
    scanf("%d", &input);
    while (input > 20 || input < 1) {
        scanf("%d", &input);
    }
    for (int i = 0; i < sizeof(M)/sizeof(M[0]); i++) {
        if (input == M[i]) {
            check1[0] = 1;
            check1[1] = i;
        }
    }
    for (int i = 0; i < sizeof(N)/sizeof(N[0]); i++) {
        if (input == N[i]) {
            check2[0] = 1;
            check2[1] = i;
        }
    }
    if (check1[0]) {
        printf("%d is in M at index [%d]", input, check1[1]);
    } else if (check2[0]) {
        printf("%d is in N at index [%d]", input, check2[1]);
    } else {
        printf("%d is not in neither M nor N", input);
    }
    return 0;
}
