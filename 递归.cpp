#include<iostream>
using namespace std;
//�ݹ���� n������ ����m����  ���Ż�  �ж����ַ���
//˼·������1��2��3��4 ���ض�Ҫȡһ��1����
// �������ͽ��  :  (1)�� �ض�����   F (n-1,m-1)
                  //        ��2���� �ض�����  F(n-1,m)  //1�����Ѿ��ڶ�����ȡ��
//
int Find(int n, int m)
{
	if(n<m)
	{
		return 0;
	}
	if(n==m)
	{
		return 1;
	}
	if(m==0)
	{
		return 1;
	}
	return Find(n-1,m-1) + Find(n-1,m);
}

//�ݹ����: �ַ�����ȫ����
void Find2(char *str,int num)
{
	int size = strlen(str);
	if(num == size)
	{
		for(int i =0;i<size;++i)
		{
			cout<<str[i]<<" ";
		}
		cout<<endl;
	}

	for(int i  = num ;i<size;i++)
	{
		{char t = str[num] ; str[num] = str[i] ; str[i] = t;}
		Find2(str,num+1);
		{char t = str[num] ; str[num] = str[i] ; str[i] = t;}
	}

}


//�ݹ���� : abc�������Ӵ�
void Find3(int *arr,int *brr,int a,int b)
{
	if(a==b)
	{
		for(int j = 0;j<a;++j)
		{
			if(brr[j]==1)
			{
				cout<<arr[j]<<" ";
			}
		}
		cout<<endl;
	}
	else
	{
		brr[a]=1;
		Find3(arr,brr,a+1,b);
		brr[a]=0;
		Find3(arr,brr,a+1,b);
	}
}

int main()
{
	char data[]="abc";
	Find2(data,0);

	int arr []= {1,2,3};
	int brr[] = {0,0,0};
	Find3(arr,brr,0,3);
	system("pause");
	return 0;
}