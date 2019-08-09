#include <bits/stdc++.h>

using namespace std;
const int N = 101;
int n;
char s[N];
int memo[100][9];

bool go(int i, int mod) {
	if (i == n) {
		return mod == 0;
	}
	if (memo[i][mod] != -1)
		return memo[i][mod];

	return memo[i][mod] = go(i + 1, (mod * 10 + (s[i] - '0')) % 8) || go(i + 1, mod);
}

void print(int i, int mod) {
	if (i == n)
		return;
	if (go(i + 1, (mod * 10 + (s[i] - '0')) % 8)) {
		printf("%c", s[i]);
		print(i + 1, (mod * 10 + (s[i] - '0')) % 8);
	} else {
		print(i + 1, mod);
	}
}

int main() {
	scanf("%s", s);
	n = strlen(s);
	memset(memo, -1, sizeof memo);
	if (go(0, 8)) {
		printf("YES\n");
		print(0, 8);
	} else {
		printf("NO\n");
	}

	return 0;
}
