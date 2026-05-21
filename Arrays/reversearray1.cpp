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

    int start = 0;
    int end = n - 1;

    while(start < end){

        // swap() exchanges the values of arr[start] and arr[end]
        // internally it works like:
        // temp = arr[start]
        // arr[start] = arr[end]
        // arr[end] = temp

        swap(arr[start], arr[end]);

        start++;
        end--;
    }

    printArr(arr, n);

    return 0;
}