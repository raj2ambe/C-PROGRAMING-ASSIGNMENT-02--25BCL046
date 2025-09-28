#include <stdio.h>
int main() {
int i, sex_code, boys_count = 0, girls_count = 0;
printf("Enter sex code for 50 students (1 for boy, 2 for girl):\n");
for (i = 0; i < 50; i++) {
scanf("%d", &sex_code);
if (sex_code == 1) {
boys_count++;
} else if (sex_code == 2) {
girls_count++;
} else {
printf("Invalid code entered.\n");
}
}
printf("Number of boys: %d\n", boys_count);
printf("Number of girls: %d\n", girls_count);
return 0;
}
