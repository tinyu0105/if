#include<iostream>
using namespace std;
int main(){
	int M,D;
	cout<<"月份及日期"<<endl;
	cin>>M>>D;
	int S;
	S=(M*2+D)%3;
	if(S==0&&M<=12&&D<=31)
	cout<<"大吉";
	else if(S==1&&M<=12&&D<=31)
	cout<<"普通";
	else if(S==2&&M<=12&&D<=31)
	cout<<"吉"; 
	else 
	cout<<"輸入錯誤";
} 
