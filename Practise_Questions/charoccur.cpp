// Write a function that accepts a character (ch) as parameter and returns the character that occurs after ch in the english alphabet eg: input = 'c' return 'd' note for 'z' return 'a'

#include<iostream>
using namespace std;

char getnextChar(char ch){

    if(ch == 'z'){
        return 'a';
    }
    else{
        return ch + 1;
    }
}

int main(){

    cout << getnextChar('a') << endl;

    return 0;
}