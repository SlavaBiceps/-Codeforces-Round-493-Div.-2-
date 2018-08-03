#include<iostream>
using namespace std;
int main() {
	int n,k,s;
	int mas[12];
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> mas[i];
		if(mas[i]<mas[k]) k=i;
		s+=mas[i];
	}
	if (n<2||mas[k]==s-mas[k]) {
		cout << "-1";
	} else {
		cout<<"1 "<< k+1;
	}
	return 0;
} 