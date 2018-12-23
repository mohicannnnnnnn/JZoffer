#include<iostream>
using namespace std;
//递归求解 n个球中 任意m个球  不放回  有多少种方法
//思路：假设1，2，3，4 我特定要取一个1号球
// 两种类型结果  :  (1)有 特定的球   F (n-1,m-1)
                  //        （2）无 特定的球  F(n-1,m)  //1号球已经内定，不取它
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

//递归求解: 字符串的全排列
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


//递归求解 : abc的所有子串
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