/*Title:���Ҷ�ά�����е���*/
/*
��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������

PS:��ӹ��ܣ���ӡ����λ��
*/
/*
˼·��
1.��̬����һ����λ���飬����������
2.����ά���鴫��Find������
3.�� ���Ͻǵ����ֿ�ʼ���� ��1.�����Ͻ�����==num������true��
   ��������ĵ�������           2. �����Ͻ�����<num ������С��Χ��������ǰ�� ����Ϊ��ǰ�� �������ǵ����ģ���������num��
			                              3.�����Ͻ�����>num, ��������ǰ�У���Ϊ���Ͻ������Ѿ��ǵ�һ���������֣�����һ��ǰ�����ֲ����ܱ����ϽǸ���
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
	cout<<"�����������������"<<endl;
	int **p;
	int row;
	int col;
	cin>>row>>col;
	cout<<"�������ά����"<<endl;
	p=new int* [row];
	for(int i=0;i<row;i++)
	{
		p[i]=new int[col]; 
		for(int j =0;j<col;j++)
		{
			cin>>p[i][j];   
		}
	}
	cout<<"��������Ҫ���ҵ�����"<<endl;
	int val;
	cin>>val;
	FindNumInArray(p,val,col,row);
	system("pause");
	return 0;
}

