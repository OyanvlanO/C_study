#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//// ��������
//int partition(int arr[], int low, int high) {
//    int pivot = arr[high]; // ѡ�����һ��Ԫ����Ϊ��׼
//    int i = low - 1; // С�ڻ�׼��Ԫ������
//
//    for (int j = low; j < high; j++) {
//        if (arr[j] < pivot) {
//            i++;
//            int temp = arr[i];
//            arr[i] = arr[j];
//            arr[j] = temp;
//        }
//    }
//    // ����׼�ŵ���ȷλ��
//    int temp = arr[i + 1];
//    arr[i + 1] = arr[high];
//    arr[high] = temp;
//
//    return i + 1;
//}
//
//// ����������
//void quickSort(int arr[], int low, int high) {
//    if (low < high) {
//        int pi = partition(arr, low, high); // ��������
//        quickSort(arr, low, pi - 1);       // ������������
//        quickSort(arr, pi + 1, high);      // ������������
//    }
//}
//
//int main() {
//    int arr[] = { 10, 7, 8, 9, 1, 5 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    printf("����ǰ: ");
//    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
//    printf("\n");
//
//    quickSort(arr, 0, n - 1);
//
//    printf("�����: ");
//    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
//    printf("\n");
//
//    return 0;
//}
