#include<iostream>
#include <string>
#include<vector>
#include<algorithm>

/*
小易有一个古老的游戏机，上面有着经典的游戏俄罗斯方块。因为它比较古老，所以规则和一般的俄罗斯方块不同。
荧幕上一共有 n 列，每次都会有一个 1 x 1 的方块随机落下，在同一列中，后落下的方块会叠在先前的方块之上，当一整行方块都被占满时，这一行会被消去，并得到1分。
有一天，小易又开了一局游戏，当玩到第 m 个方块落下时他觉得太无聊就关掉了，小易希望你告诉他这局游戏他获得的分数。
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