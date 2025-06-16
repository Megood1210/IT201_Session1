#include <stdio.h>
//Cách 1
// void insertionSort(int arr[], int n){
//     for (int i = 1; i < n; i++){
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key){
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }
//
// int hasDuplicate(int arr[], int n){
//     for (int i = 0; i < n; i++){
//         if (arr[i] == arr[i - 1]){
//             return 1;
//         }
//     }
//     return 0;
// }
//Cách 2
#include <stdlib.h>
void bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    // int n;
    // printf("Nhap vao so luong phan tu cua mang:");
    // scanf("%d", &n);
    // int arr[n];
    // for (int i = 0; i < n; i++) {
    //     printf("Nhap %d so nguyen duong:", n);
    //     scanf("%d", &arr[i]);
    // }
    // insertionSort(arr, n);
    // for (int i = 0; i < n; i++){
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    // if (hasDuplicate(arr, n)){
    //     printf("Mang co phan tu trung\n");
    // }else{
    //     printf("Mang khong co phan tu trung\n");
//     }
    int n;
    printf("Nhap vao so luong phan tu cua mang:");
    scanf("%d", &n);

    if (n <= 0){
        printf("Mang khong hop le\n");
        return 1;
    }
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL){
        printf("Khong the tao mang\n");
        return 1;
    }
    printf("Nhap %d so nguyen duong:\n", n);
    int max = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if (arr[i] < 0){
            printf("Gia tri phai la so nguyen duong\n");
            free(arr);
            return 1;
        }
        if (arr[i] > max){
            max = arr[i];
        }
    }
    int *count = (int*)malloc(max + 1 * sizeof(int));
    if (count == NULL){
        printf("Khong the tao mang\n");
        free(arr);
        return 1;
    }
    int hasDuplicate = 0;
    for (int i = 0; i < n; i++){
        if (count[arr[i]] == 1){
            hasDuplicate = 1;
            break;
        }
        count[arr[i]] = 1;
    }
    bubbleSort(arr, n);
    printf("Mang sau khi sap xep:");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    if (hasDuplicate){
        printf("Mang co phan tu trung\n");
    }else{
        printf("Mang khong co phan tu trung\n");
    }
    free(arr);
    free(count);

    return 0;
}

// Độ phức tạp thời gian của cách 1 là O(n^2)
// Độ phức tạp thời gian của cách 2 :
// - Tìm max: O(n)
// - Tạo mảng và kiểm tra trùng : 0(n)
// - Sắp xếp: O(n^2)
//--> 0(n log n)
