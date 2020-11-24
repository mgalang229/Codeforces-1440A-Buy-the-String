#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, c0, c1, h;
		string s;
		cin >> n >> c0 >> c1 >> h >> s;
		int sum=0;
		for(char c : s) {
			if(c=='0') 
				sum+=min(c0, c1+h);
			else
				sum+=min(c1, c0+h);
		}
		cout << sum << "\n";
	}
}
