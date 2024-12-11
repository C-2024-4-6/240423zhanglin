// ConsoleApplication41.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < size1 && j < size2)
	{
		if (list1[i] <= list2[j])
		{
			list3[k++] = list1[i++];
		}
		else
		{
			list3[k++] = list2[j++];
		}
	}
	while (i < size1)
	{
		list3[k++] = list1[j++];
	}
	while (j < size2)
	{
		list3[k++] = list2[j++];
	}
}
int main()
{
	int size1;
	int size2;
	cin >> size1;
	cin >> size2;
	int list1[80];

	int list2[80];
	for (int i1 = 0; i1 < size1; i1++)
		cin >> list1[i1];
	cout << endl;
	for (int i2 = 0; i2 < size2; i2++)
		cin >> list2[i2];
	int list3[170];
	merge(list1, size1, list2, size2, list3);
	cout << "合并后的第三个数组为" << endl;
	for (int m = 0; m < size1 + size2; m++)
	{
		cout << list3[m] << "  ";
	}
}
//

//void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
//    int i = 0, j = 0, k = 0;
//    
//    while (i < size1 && j < size2) {
//        if (list1[i] <= list2[j]) {
//            list3[k] = list1[i];
//            k++;
//            i++;
//        }
//        else {
//            list3[k++] = list2[j++];
//        }
//    }
//   
//    while (i < size1) {
//        list3[k++] = list1[i++];
//    }
//   
//    while (j < size2) {
//        list3[k++] = list2[j++];
//    }
//}
//
//int main() {
//    int size1, size2;
//    
//    cout << "Enter the size of the first sorted array: ";
//    cin >> size1;
//    int list1[80];
//    cout << "Enter the first sorted array: ";
//    for (int i = 0; i < size1; ++i) {
//        cin >> list1[i];
//    }
//  
//    cout << "Enter the size of the second sorted array: ";
//    cin >> size2;
//    int list2[80];
//    cout << "Enter the second sorted array: ";
//    for (int i = 0; i < size2; ++i) {
//        cin >> list2[i];
//    }
//    int list3[160];
//   
//    merge(list1, size1, list2, size2, list3);
//   
//    cout << "The merged sorted array is: ";
//    for (int i = 0; i < size1 + size2; ++i) {
//        cout << list3[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}
//
