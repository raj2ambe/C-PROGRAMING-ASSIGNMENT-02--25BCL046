#include <stdio.h>
int main() {
int i, num, pos_count = 0, neg_count = 0, zero_count = 0;
printf("Enter 200 numbers:\n");
for (i = 0; i < 200; i++) {
11
scanf("%d", &num);
if (num > 0) {
pos_count++;
} else if (num < 0) {
neg_count++;
} else {
zero_count++;
}
}
printf("Positive numbers: %d\n", pos_count);
printf("Negative numbers: %d\n", neg_count);
printf("Zero numbers: %d\n", zero_count);
return 0;
}
