#include<iostream>
#include<cmath>
/*���������ܼ򵥣�ʵ�ʴ�������ȴ���鷳,�ǵ����𣿿��ǵ���û�취������ô�������
��������һ�룬���ǵ��ƣ�����Ҫ��һ��˼·;
�����ҳ��Թ�DP�����Ҹ����벻����̬�滮����Ӧ����ôд,Ȼ����������һ�£����������һ��
�ҹ����⣬����Ҫ���ƶ�̬�滮:
˼·:��λ������,ÿһλ����Ҫ����
�����������Ҫ�õ�������:1. ��ǰλ֮ǰ���� 2.��ǰλ 3. ��ǰλ֮�����*/
using namespace std;
typedef long long LL;
LL dp[15];
int main()
{
	LL n;
	cin >> n;
	LL res = 0;
	LL r = 10, l = 0;
	while (n >= r / 10)
	{
		int ram = (n / (r / 10)) % 10;   // ��ǰλ
		res += (n / r)*(r / 10);   // (n/r������ǰλ��ߵ���)
		if (ram == 1)
		{
			res += l + 1;
		}
		else if (ram>1)
		{
			res += r / 10;
		}
		l = ram*(r / 10) + l;   // ���µ�ǰλ�ұߵ���
		r *= 10;
	}
	printf("%lld\n", res);
	return 0;
}