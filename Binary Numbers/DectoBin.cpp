/*
 * Decimal to Binary Conversion Program
 * Algorithm: Extract remainder using modulo operation and build binary number
 * Time Complexity: O(log n) where n is the decimal number
 * Space Complexity: O(1)
 */

#include<iostream>
using namespace std;

// Function to convert decimal number to binary representation
// Parameter: decNum - the decimal number to convert
// Output: prints the binary equivalent to console
void DectoBin(int decNum){
    // Initialize variables for conversion
    int n = decNum; // Copy of input number for processing
    int pow = 1;    // Power of 10 for position (units, tens, hundreds, etc.)
    int binNum = 0; // Result binary number

    // Extract binary digits from right to left using modulo 2
    while (n > 0)
    {
        int rem = n % 2;     // Get remainder (0 or 1)
        binNum += rem * pow; // Add remainder at appropriate position
        n = n / 2;           // Reduce number by half
        pow = pow * 10;      // Move to next position
    }

    // Display the resulting binary number
    cout << "Binary: " << binNum << endl;
}

int main(){
    // Test case: Convert decimal 100 to binary
    // Expected Output: 1100100 (100 in binary = 64+32+4 = 100)
    cout << "Decimal 100 = ";
    DectoBin(100);

    return 0;
}