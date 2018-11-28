/*Title:查找二维数组中的数*/
/*
在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

PS:添加功能：打印所在位置
*/
/*
思路：
1.动态构造一个二位数组，输入行列数
2.将二维数组传入Find函数中
3.从 右上角的数字开始查找 ：1.若右上角数字==num，返回true；
   由于数组的递增特性           2. 若右上角数字<num ，则缩小范围，跳过当前列 （因为当前列 的数字是递增的，不可能有num）
			                              3.若右上角数字>num, 则跳过当前行（因为右上角数字已经是第一行最大的数字，当第一行前面数字不可能比右上角更大）
*/
#include<iostream>
using namespace std;

bool FindNumInArray(int **arr,int num,int col,int row)
{
	int _row=0;
	int _col=col-1;
	while(_row<row &&_col <col)
	{
		if(arr[_row][_col]==num)
		{
				cout<<"successful"<<endl;
				cout<<'<'<<_row+1<<','<<_col+1<<'>'<<endl;
			return true;
		
		}
		else if(arr[_row][_col]<num)
		{
			_row++;
		}
		else if(arr[_row][_col]>num)
		{
			_col--;
		}
	}
	cout<<"can not find"<<endl;
			return false;
}

int main()
{
	cout<<"请输入数组的行列数"<<endl;
	int **p;
	int row;
	int col;
	cin>>row>>col;
	cout<<"请输入二维数组"<<endl;
	p=new int* [row];
	for(int i=0;i<row;i++)
	{
		p[i]=new int[col]; 
		for(int j =0;j<col;j++)
		{
			cin>>p[i][j];   
		}
	}
	cout<<"请输入需要查找的数字"<<endl;
	int val;
	cin>>val;
	FindNumInArray(p,val,col,row);
	system("pause");
	return 0;
}

