
#include <stdio.h>

/**
 * @description
 * @param array
 * @param arrayLength
 * @param numberCheck Phần tử cần kiểm tra
 * @return số lần xuất hiện của phần tử
 */
int countExist(int array[], int arrayLength, int numberCheck) {
    int count = 0;
    for (int i = 0; i < arrayLength; i++) {
        if (array[i] == numberCheck) {
            count++;
        }
    }
    return count;
}

//arr[1] = O(1)
//O(1) + O(2) + O(3) + ...  + O(n) = O(n)
// Độ phức tạp thuật toán của chương trình: O(n)

int main(){
    int numbers;
    int numberCheck;
    printf("Nhap vao so luong phan tu cua mang:");
    scanf("%d", &numbers);
    int arr[numbers];
    for (int i = 0; i < numbers; i++) {
        printf("Nhap phan tu thu %d:", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < numbers; i++) {
        printf("%d ", arr[i]);
    }
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d",&numberCheck);

    int result = countExist(arr, numbers,numberCheck);
    printf("So lan xuat hien cua phan tu %d: %d ",  numberCheck,result);

    return 0;
}
