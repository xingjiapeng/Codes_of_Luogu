#include<bits/stdc++.h>
using namespace std;
bool f[1001]; //f�����ŵ�k+w[i]��������û�б��Ƴ�����
int c[7],w[7] = {0,1,2,3,5,10,20}; // �����0һ��Ҫע�⣡��������±��0��ʼ
int main(){
    for(int i = 1;i<=6;i++)
        scanf("%d",&c[i]);
    memset(f,0,sizeof(f));
    f[0] = 1; //��ʼ���ǳ��ǳ���Ҫ����
    for(int i = 1;i<=6;i++)
        for(int j = 1;j<=c[i];j++) // ÿһ���������������ö��
            for(int k = 1000;k>=0;k--){ //k��ʾ��ǰ����
                if(f[k]&&k+w[i]<=1000)
                    f[k+w[i]] = 1;  // �����k+w[i]��û�гƳ������ͱ����
            }
        int ans = 0;
        for(int i = 1;i<=1000;i++)//ע�������1��ʼ
        {
            if(f[i]) ans++;
        }
        printf("Total=%d",ans); //����ĸ�ʽҪע��
        return 0;
}
