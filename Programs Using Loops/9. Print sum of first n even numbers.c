#include <stdio.h>
int main() {
int i, n, count = 0, sum = 0;
printf("Enter a number (n): ");
scanf("%d", &n);
for (i = 1; count < n; i++) {
if (i % 2 == 0) {
sum += i;
count++;
}
}
printf("Sum of first %d even numbers is: %d\n", n, sum);
return 0;
}
