#include <stdio.h>
int main() {
    char fname[101], lname[101];
    scanf("%s %s", fname, lname);
    printf("%c.%c.", fname[0], lname[0]);
    return 0;
}