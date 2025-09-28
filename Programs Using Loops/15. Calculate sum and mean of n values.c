#include <stdio.h>
int main() {
int i, n, num, sum = 0;
float mean;
printf("Enter number of values (n): ");
scanf("%d", &n);
printf("Enter %d numbers:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &num);
sum += num;
}
mean = (float)sum / n;
printf("Sum: %d\n", sum);
printf("Mean: %.2f\n", mean);
return 0;
}
