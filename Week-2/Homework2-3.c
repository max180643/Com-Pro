#include <stdio.h>
int main(){
	int number;
	scanf("%d", &number);
	printf("%-81d", number/10000);
	printf("%-81d", number/1000);
	printf("%-81d", number/100);
	printf("%-81d", number/10);
	printf("%-81d", number);
	return 0;
}
