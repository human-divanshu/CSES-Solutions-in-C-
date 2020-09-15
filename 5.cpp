#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	if(n == 1) {
		cout << "1";
		return 0;
	}

	if(n <= 3) {
		cout << "NO SOLUTION";
		return 0;
	}

	if(n == 4) {
		cout << "3 1 4 2";
		return 0;
	}

	int a[1000001];

	//fill odd
	int i = 0, count = 1;
	while(count <= n) {
		a[i] = count;
		i++;
		count = count + 2;
	}

	// fill even
	count = 2;
	while(count <= n) {
		a[i] = count;
		i++;
		count += 2;
	}

	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	return 0;
}
