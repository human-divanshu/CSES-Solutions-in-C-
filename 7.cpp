#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	scanf("%d", &n);
	
	for(int k = 1; k <= n; k++) { 
		long long ans = (pow(k, 2) * (pow(k, 2) - 1)) / 2 - (4*(k-1)*(k-2));
		cout << ans << endl;
	}
	
	
	return 0;
}
