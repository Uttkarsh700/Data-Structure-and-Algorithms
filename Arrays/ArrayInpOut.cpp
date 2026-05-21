// // How to ouput an array using for loop


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={7,2,4,3,1};
//     int len = sizeof(arr)/sizeof(int);
    
//     for(int idx=0; idx<=len-1; idx++){
//         cout<<arr[idx]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int n = sizeof(arr)/sizeof(int);
    
    for(int i=0; i<=n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;
}