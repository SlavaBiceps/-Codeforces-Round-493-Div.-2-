#include<bits/stdc++.h>
#define N 300010
#define ll long long
using namespace std;
char s[N];
int main(){
	int n,x,y,cnt=0,f=0;
	scanf("%d%d%d",&n,&x,&y);
	scanf("%s",s+1);
	for(int i=1;i<=n;i++){
		if(s[i]=='1'){
			if(cnt){
				f++;
				cnt=0;
			}
		}
		else cnt++;
	}
	if(cnt)f++;
	if(!f)printf("0\n");
	else printf("%lld\n",(ll)min(x,y)*(f-1)+(ll)y);
	return 0;
}