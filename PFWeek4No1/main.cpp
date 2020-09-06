#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, ans1=0, ans2=0;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a == 0) {
		if (b == 0 || c == 0) {
			printf("Undefined in mathematics\n");
			return 0;
		}
	}
	else {
		if (b == 0) printf("Cannot use %d as a divisor\n",b);
		if (c == 0) printf("Cannot use %d as a divisor\n",c);
		if (b != 0 && c != 0) {
			ans1 = a % b;
			ans2 = a % c;
			if (ans1 == 0 && ans2 == 0) printf("%d can be divided by %d and %d\n", a, b, c);
		}
	}
	return 0;
}