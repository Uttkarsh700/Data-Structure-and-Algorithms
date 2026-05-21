// Reverse an array  with using extra space


#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {2,4,6,8,10,12,14,16};

    int n = sizeof(arr)/sizeof(int);

    int copyArr[n];

    // Reverse copy
    for(int i = 0; i < n; i++){
        int j = n - i - 1;
        copyArr[i] = arr[j];
    }

    // Copy back to original array
    for(int i = 0; i < n; i++){
        arr[i] = copyArr[i];
    }

    // Print once
    printArr(arr, n);

    return 0;
}