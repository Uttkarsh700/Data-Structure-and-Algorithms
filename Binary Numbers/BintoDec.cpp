// Write a function to convert binary number to decimal number.


#include<iostream>
using namespace std;

void BintoDec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow =1; // 2^0  2^1  2^2  2^3  2^4 ....
    while(n>0){
    int lastdig = n%10;
    decNum = decNum+lastdig*pow;
    pow=pow*2;
    n=n/10;
    }
    cout<<decNum<<endl;

}
int main(){
    BintoDec(101);
    return 0;
}

