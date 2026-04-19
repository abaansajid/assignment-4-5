#include <stdio.h>

int main() {
    int arr[] = {6,4,2,1,8,3};
    int n = 6;

    for(int i=0;i<n-1;i++) {
        if(i%2==0 && arr[i] > arr[i+1]) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        if(i%2==1 && arr[i] < arr[i+1]) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}
