// Binary search

#include<iostream>
using namespace std;

int BinarySearch(int *arr, int n, int key){

    int start = 0;
    int end = n - 1;

    while(start <= end){

        int mid = (start + end) / 2;

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] < key){ // search in 2nd half
            start = mid + 1;
        }

        else{ // search in 1st half
            end = mid - 1;
        }
    }

    return -1;
}

int main(){

    int arr[] = {2,4,6,8,10,12,14,16};

    int n = sizeof(arr)/sizeof(int);

    int key = 10;

    int index = BinarySearch(arr, n, key);

    cout << "Key found at index: " << index << endl;

    return 0;
}