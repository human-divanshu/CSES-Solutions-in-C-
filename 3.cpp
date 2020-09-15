#include <bits/stdc++.h>
using namespace std;

int main() {

	string in;
	getline(cin, in);


	if(in.length() == 1) {
		cout << 1;
		return 0;
	}

	char p, c;
	p = in[0];
	int max = 1, local = 1;
	for(int i = 1; i < in.length(); i++) {
		c = in[i];

		if(p == c) {
			local++;
			if(local > max) max = local;
		} else {
			p = c;
			local = 1;
		}
	}

	cout << max;


	return 0;
}
