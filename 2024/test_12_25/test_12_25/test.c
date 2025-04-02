#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//// 分区函数
//int partition(int arr[], int low, int high) {
//    int pivot = arr[high]; // 选择最后一个元素作为基准
//    int i = low - 1; // 小于基准的元素索引
//
//    for (int j = low; j < high; j++) {
//        if (arr[j] < pivot) {
//            i++;
//            int temp = arr[i];
//            arr[i] = arr[j];
//            arr[j] = temp;
//        }
//    }
//    // 将基准放到正确位置
//    int temp = arr[i + 1];
//    arr[i + 1] = arr[high];
//    arr[high] = temp;
//
//    return i + 1;
//}
//
//// 快速排序函数
//void quickSort(int arr[], int low, int high) {
//    if (low < high) {
//        int pi = partition(arr, low, high); // 分区索引
//        quickSort(arr, low, pi - 1);       // 排序左子数组
//        quickSort(arr, pi + 1, high);      // 排序右子数组
//    }
//}
//
//int main() {
//    int arr[] = { 10, 7, 8, 9, 1, 5 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    printf("排序前: ");
//    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
//    printf("\n");
//
//    quickSort(arr, 0, n - 1);
//
//    printf("排序后: ");
//    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
//    printf("\n");
//
//    return 0;
//}
