#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string ReverseSentence(string str) {
        string result = str;
        int length = result.size();
        if(length == 0){
            return "";
        }
        // ׷��һ���ո���Ϊ��ת��־λ
        result += ' ';
        int mark = 0;
        // ���ݿո񣬷�ת���е���
        for(int i = 0; i < length + 1; i++){
            if(result[i] == ' '){
                Reverse(result, mark, i - 1);
                mark = i + 1;
            }
        }
        // ȥ����ӵĿո�
        result = result.substr(0, length);
        // ���巴ת
        Reverse(result, 0, length - 1);
        
        return result;
    }
private:
    void Reverse(string &str, int begin, int end){
        while(begin < end){
            swap(str[begin++], str[end--]);
        }
    }
};

int mai3n()
{
	Solution s;
	string str = "abc def";
	string str2;
	str2=s.ReverseSentence(str);
	cout<<str2<<endl;
	system("pause");
	return 0;
}