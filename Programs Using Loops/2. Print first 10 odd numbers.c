#include <stdio.h>
int main() {
int i, count = 0;
printf("First 10 odd numbers are:\n");
for (i = 1; count < 10; i++) {
if (i % 2 != 0) {
printf("%d ", i);
count++;
}
}
printf("\n");
return 0;
}
