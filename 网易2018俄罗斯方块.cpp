#include<iostream>
#include <string>
#include<vector>
#include<algorithm>

/*
С����һ�����ϵ���Ϸ�����������ž������Ϸ����˹���顣��Ϊ���ȽϹ��ϣ����Թ����һ��Ķ���˹���鲻ͬ��
ӫĻ��һ���� n �У�ÿ�ζ�����һ�� 1 x 1 �ķ���������£���ͬһ���У������µķ���������ǰ�ķ���֮�ϣ���һ���з��鶼��ռ��ʱ����һ�лᱻ��ȥ�����õ�1�֡�
��һ�죬С���ֿ���һ����Ϸ�����浽�� m ����������ʱ������̫���ľ͹ص��ˣ�С��ϣ��������������Ϸ����õķ�����
*/
using namespace std;
int min(vector<int>vec)
{
	sort(vec.begin(),vec.end(),less<int>());
	return vec[0];
}
int main()
{
	int n;
	int m;
	while(cin>>n>>m)
	{
		vector<int>vec(n,0);
		for(int i=0;i<m;++i)
		{
			int input;
			cin>>input;
			vec[input-1]++;
		}
		cout<<min(vec)<<endl;
	}
	system("pause");
	return 0;
}