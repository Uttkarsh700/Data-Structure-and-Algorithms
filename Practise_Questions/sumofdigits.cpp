// Write a program to find sum of digits of a number.

#include<iostream>
using namespace std;

int sumofDigits(int n){
    int sum = 0;
    
    while(n>0){
        int lastdig = n%10;
        sum = sum+lastdig;
        n =n/10;
    }
    return sum;
}

int main(){
    cout<<sumofDigits(30);
    return 0;
}