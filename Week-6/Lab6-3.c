#include <stdio.h>
int main() {
    double A[3][3] = {};
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf", &A[i][0], &A[i][1], &A[i][2]);
    }
    if (A[0][1] == 0 && A[0][2] == 0 && A[1][2] == 0 && A[1][0] == 0 && A[2][0] == 0 && A[2][1] == 0) {
        printf("This is a scalar matrix");
    } else {
        printf("This is not a scalar matrix");
    }
    return 0;
}