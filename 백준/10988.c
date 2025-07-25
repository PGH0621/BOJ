//팰린드롬 
#include <stdio.h>
#include <string.h>

int main() {
	char str[101]; // 최대 100자 + null 문자
	scanf("%s", str);

	int len = strlen(str);
	int is_palindrome = 1;

	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i]) {
			is_palindrome = 0;
			break;
}
	}

	printf("%d\n", is_palindrome);
	return 0;
}
