//c++标准头文件
#include<iostream>
//预编译指令
using namespace std;
//打印数组的函数：有两个参数：第一个接收数组的地址，第二个接收数组的长度
void sort(int arr1[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr1[i] << endl;
	}

}
//main函数
int main() {
	//创建数组并给数组初始化
	int arr[] = { 10, 90, 100, 20, 30 ,90 };
	//创建变量并给变量赋数组长度
	int len = (sizeof(arr) / sizeof(arr[0]));
	//调用函数
	sort(arr, len);


	return 0;

}
