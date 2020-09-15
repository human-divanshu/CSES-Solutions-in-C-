#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;

	long a[200001];
	long m[200001];

	scanf("%d", &n);

	if(n == 1) {
		cout << "0";
		return 0;
	}

	for(int i = 0; i < n; i++) {
		scanf("%ld", &a[i]);
	}

	m[0] = a[0];
	for(int i = 1; i < n; i++) {
		m[i] = max(m[i-1], a[i]);
	}

	long ans = 0;
	for(int i = 0; i < n; i++) {
		//ans = max(ans, m[i] - a[i]);
		ans = ans + (m[i] - a[i]);
	}

	cout << ans;


	return 0;
}
