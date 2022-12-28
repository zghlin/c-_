#include<iostream>
using namespace std;
int main() {
	int num;
	int length = 0;
	int n[20];
	cout << "十进制：";
	cin >> num;
	//循环除2，把余数存储在数组中
	while (num / 2) {
		n[length] = num % 2;
		length++;
		num = num / 2;
	}
	//存储最后一个余数
	n[length] = num;
	length++;
	cout << "二进制：";
	//将余数从下往上输出
	for (int i = length - 1;i >= 0;i--) {
		cout << n[i];
	}
	return 0;
}
