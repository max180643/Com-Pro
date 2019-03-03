#include <stdio.h>

int check_pos(char i);
int swap_pos(int pos, char i);
void print_out(int i);

int main() {
    int pos;
    char start, swap[31];
    scanf("%c %s", &start, swap);
    pos = check_pos(start);
    for (int i = 0; swap[i] != '\0'; i++) {
        pos = swap_pos(pos, swap[i]);
    }
    print_out(pos);
    return 0;
}

int check_pos(char i) {
    int pos;
    if (i == 'L') {
        pos = 1;
    } else if (i == 'C') {
        pos = 2;
    } else if (i == 'R') {
        pos = 3;
    }
    return pos;
}

int swap_pos(int pos, char i) {
    int now;
    if (i == 'A' && pos == 1) {
        now = 2;
    } else if (i == 'A' && pos == 2) {
        now = 1;
    } else if (i == 'B' && pos == 2) {
        now = 3;
    } else if (i == 'B' && pos == 3) {
        now = 2;
    } else if (i == 'C' && pos == 1) {
        now = 3;
    } else if (i == 'C' && pos == 3) {
        now = 1;
    }
    return now;
}

void print_out(int i) {
    if (i == 1) {
        printf("%c", 'L');
    } else if (i == 2) {
        printf("%c", 'C');
    } else if (i == 3) {
        printf("%c", 'R');
    }
}
