#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	int in;

	scanf("%d", &n);
	long long sum = 0, realsum = 0;

	for(int i = 0; i < n - 1; i++) {
		scanf("%d", &in);
		sum = sum + in;
	}

	for(int i = 1; i <= n; i++) {
		realsum = realsum + i;
	}
	//cout << sum << endl;
	//cout << realsum << endl;
	cout << (realsum - sum);


	return 0;
}
