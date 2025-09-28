#include <stdio.h>
int main() {
int i, n;
long long factorial = 1;
printf("Enter a number: ");
scanf("%d", &n);
if (n < 0) {
printf("Factorial of a negative number doesn’t exist.\n");
} else {
for (i = 1; i <= n; i++) {
factorial *= i;
}
printf("Factorial of %d is: %lld\n", n, factorial);
}
return 0;
}
