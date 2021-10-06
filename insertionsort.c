#include <stdio.h>
int main() {
int start = 0;
int end = ARRAY_SIZE - 1;
for (int i = start + 1; i <= end; i++) {
for ( int j = i; j > start &&
intArray[j-1] > intArray[j]; j--) {
int temp = intArray[j-1];
intArray[j-1] = intArray[j];
intArray[j] = temp;
}
}
for (int i = start; i < end; i++) {
	printf("%d ", intArray[i]);
}printf("\n");
return 0;
}
