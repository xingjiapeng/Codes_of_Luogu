#include <iostream>

using namespace std;

const int M = 12880;

int n; //��Ʒ���� 
int m; //������С 
int c; //��Ʒ���� 
int w; //��Ʒ��ֵ 
int dp[M + 5];

int main(){
	cin >> n;
	cin >> m;
	
	for(int i = 1; i <= n; i++){
		cin >> c; //��Ʒ������ 
		cin >> w; //��Ʒ�ļ�ֵ 
		for(int  j = m; j >= c; j--)
			dp[j] = max(dp[j], dp[j - c] + w);
	}
	cout << dp[m] << endl;
	return 0;
}
