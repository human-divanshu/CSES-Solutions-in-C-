#include <bits/stdc++.h>
using namespace std;



void solve() {

	long long x, y;
	scanf("%lld %lld", &x, &y);

	// diagonal at x, x
	long long d1 = x-1;
	long long d = d1 * d1 + d1 + 1;
	//cout << "d = " << d << endl;
	if(y == x) {
		cout << d << endl;
	} else if(y > x) {
		d1 = y - 1;
		d = d1 * d1 + d1 + 1;
		if(y % 2 == 0) 
			cout << (d - (y - x)) << endl;
		else
			cout << (d + (y - x)) << endl;
	} else {
		// y < x
		if(x % 2 == 0) 
			cout << (d + (x - y)) << endl;
		else
			cout << (d - (x - y)) << endl;
	}

}

int main() {

	int t;

	scanf("%d", &t);

	while(t > 0) {
		solve();
		t--;
	}

	return 0;
}
