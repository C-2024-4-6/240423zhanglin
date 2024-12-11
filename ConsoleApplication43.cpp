// ConsoleApplication43.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

 
    int* arr = new int[size];

 
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, size);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}

