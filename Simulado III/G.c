#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, m, i, dp[n];
	scanf("%d", &n);
	dp[1] = 2, dp[2] = 2;
	
	for(i=3; i<=n; i++)
	{
		dp[i] = dp[i-1]+dp[i-2];
	}
	
	printf("%d", dp[n]);
	
	return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
const int N=47;
long long dp[N];
int main()
{
	int n;cin>>n;
	dp[1]=2; 
	dp[2]=2;
	for(int i=3; i<=n; i++)
		dp[i] = dp[i-1]+dp[i-2];
		
	cout<<dp[n]<<'\n';
	
}
*/
