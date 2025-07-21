#include <stdio.h>

int Lcs_r(const char *a, const char *b, int i, int j);

//int Max(int a, int b) {
//	return (a > b) ? a : (a < b) ? b : a;
//}

int main() {
	const char *a = "stone";
	const char *b = "longest";

	printf("%d", Lcs_r(a, b, 0, 0));

	return 0;
}

int Lcs_r(const char *a, const char *b, int i, int j) {
	if (a[i] == '\0' || b[j] == '\0') {
		return 0;
	}
	else if (a[i] == b[j]) {
		return 1 + Lcs_r(a, b, i + 1, j + 1);
	}
	else {
		return __max(Lcs_r(a, b, i + 1, j), Lcs_r(a, b, i, j + 1));
	}
}
