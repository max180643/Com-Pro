#include <stdio.h>
#include <ctype.h>
int main() {
    int total, ascii[128] = {0}, seq[128] = {0}, status = 0, pos = 0;
    char temp;
    scanf("%d", &total);
    for (int i = 0; i < total; i++) {
        scanf(" %c", &temp);
        ascii[(int)tolower(temp)] += 1;
        for (int j = 0; j < 128; j++) {
            if (seq[j] != (int)tolower(temp)) {
                status = 0;
            } else {
                status = 1;
                break;
            }
        }
        if (status == 0) {
            seq[pos] += (int)tolower(temp);
            pos++;
        }
    }
    for (int i = 0; seq[i] != 0; i++) {
        printf("%c: %d\n", seq[i], ascii[seq[i]]);
    }
    return 0;
}