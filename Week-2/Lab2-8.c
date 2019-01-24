#include <stdio.h>
int main(){
	char fname[30], lname[30];
	int id, day, month, year;
	float grade;
	scanf("%s", fname);
	scanf("%s", lname);
	scanf("%d", &id);
	scanf("%d/%d/%d", &day, &month, &year);
	scanf("%f", &grade);
	printf("Fullname: %s %s\n", fname, lname);
	printf("ID: %d\n", id);
	printf("DOB: %02d-%02d-%d\n", day, month, year);
	printf("GPA: %.2f\n", grade);
	return 0;
}
