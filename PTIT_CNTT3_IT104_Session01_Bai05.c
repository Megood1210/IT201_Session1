#include <stdio.h>

void insertSort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Nhap vao so luong phan tu cua mang:");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap %d phan tu: \n", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    insertSort(arr, n);
    printf("Mang sau khi sap xep:");
    printArray(arr, n);
    return 0;
}
//Nếu những phần tử đã nhập đã được sắp xếp thì độ phức tạp của chương trình trên là O(n)
//Nếu những phần tử đã nhập là mảng ngẫu nhiên thì độ phức tạp của chương trình trên là O(n)
//Nếu những phần tử đã nhập đã được sắp xếp giảm dần thì độ phức tạp của chương trình trên là O(n^2)
