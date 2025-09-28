#include <stdio.h>
int main() {
int num, square, temp, count = 0;
printf("Enter a number: ");
scanf("%d", &num);
square = num * num;
temp = num;
while (temp > 0) {
temp /= 10;
count++;
}
int last_digits = 1;
for (int i = 0; i < count; i++) {
last_digits *= 10;
}
if (square % last_digits == num) {
printf("%d is an automorphic number.\n", num);
} else {
printf("%d is not an automorphic number.\n", num);
}
return 0;
}
