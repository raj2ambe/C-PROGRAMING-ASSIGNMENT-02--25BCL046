#include <stdio.h>
int main() {
int i, n, count = 0;
printf("Enter a number (n): ");
scanf("%d", &n);
printf("First %d odd numbers are:\n", n);
for (i = 1; count < n; i++) {
if (i % 2 != 0) {
printf("%d ", i);
count++;
}
}
printf("\n");
return 0;
}
