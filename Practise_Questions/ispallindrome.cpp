// Write a function to check whether a given string is a palindrome or not.

#include<iostream>
using namespace std;

// Function to reverse a number
int reverse(int n){
    int rev = 0;

    while(n > 0){
        int lastdig = n % 10;
        rev = rev * 10 + lastdig;
        n = n / 10;
    }

    return rev;
}

// Function to check palindrome
bool isPalindrome(int num){
    int revNum = reverse(num);
    return num == revNum;
}

int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(isPalindrome(num)){
        cout << num << " is a Palindrome Number";
    }
    else{
        cout << num << " is NOT a Palindrome Number";
    }

    return 0;
}