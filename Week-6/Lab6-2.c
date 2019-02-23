#include <stdio.h>
int main() {
    double A[3][3] = {};
    double B[3][3] = {};
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf", &A[i][0], &A[i][1], &A[i][2]);
    }
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf", &B[i][0], &B[i][1], &B[i][2]);
    }
    printf("A x B\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            double sum = 0;
            for (int k = 0; k < 3; k++) {
                sum = sum+A[i][k]*B[k][j];
            }
            printf("%.2f ", sum);
        }
        printf("\n");
    }
    return 0;
}