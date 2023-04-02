#include<iostream>
using namrspace std;
int main(void)
{
	int num;
	int length =0 ;
	int n[20];
	cout << "十进制";
	cin >> num;
	while(num/2)
	{
		n[length]=num%2;
		length++;
		num=num/2;
	}
	n[length] = num;
	length++;
	cout << "二进制: ";
	for(int i=length-1;i>=0;i--)
	{
		cout << n[i];
	}
	return 0;
}