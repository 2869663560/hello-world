#include<iostream>
using namespace std;
void sort(int arr1[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr1[i] << endl;
	}

}
int main() {

	int arr[] = { 10, 90, 100, 20, 30 ,90 };
	int len = (sizeof(arr) / sizeof(arr[0]));
	sort(arr, len);


	return 0;

}