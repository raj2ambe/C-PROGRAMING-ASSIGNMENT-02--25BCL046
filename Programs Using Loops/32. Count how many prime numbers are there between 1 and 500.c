#include <stdio.h>
int main() {
int i, j, is_prime, count = 0;
for (i = 2; i <= 500; i++) {
is_prime = 1;
for (j = 2; j <= i / 2; j++) {
if (i % j == 0) {
is_prime = 0;
break;
}
}
if (is_prime) {
count++;
}
}
printf("Number of prime numbers between 1 and 500 is: %d\n", count);
return 0;
}
