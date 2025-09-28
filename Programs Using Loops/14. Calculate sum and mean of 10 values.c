#include <stdio.h>
int main() {
int i, num, sum = 0;
float mean;
printf("Enter 10 numbers:\n");
for (i = 0; i < 10; i++) {
scanf("%d", &num);
sum += num;
}
mean = (float)sum / 10;
printf("Sum: %d\n", sum);
printf("Mean: %.2f\n", mean);
return 0;
}
