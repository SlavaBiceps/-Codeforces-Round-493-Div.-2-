#include<bits/stdc++.h>
using namespace std;

int a[105];
vector<int> c;
int main() {
	int n,b,s,res;
	cin >> n >> b;	
	s = 0;
	res= 0;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] % 2 == 0) cnt++;
		else cnt--;
		if(cnt == 0 && i != n) c.push_back(abs(a[i] - a[i + 1]));
	}
	sort(c.begin(), c.end());
	for(int i = 0; i < c.size(); i++){
		if(s + c[i] > b) break;
		s += c[i];
		res++;
	}
	cout << res
}