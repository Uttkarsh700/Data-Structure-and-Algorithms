/*
 * Binary to Decimal Conversion Program
 * Algorithm: Extract each binary digit and multiply by corresponding power of 2
 * Time Complexity: O(log n) where n is the binary number
 * Space Complexity: O(1)
 */

#include<iostream>
using namespace std;

// Function to convert binary number to decimal representation
// Parameter: binNum - the binary number to convert (e.g., 101 for binary 101)
// Output: prints the decimal equivalent to console
void BintoDec(int binNum){
    // Initialize variables for conversion
    int n = binNum; // Copy of input binary number for processing
    int decNum = 0; // Result decimal number
    int pow = 1;    // Power of 2 (2^0, 2^1, 2^2, 2^3, 2^4 ....)

    // Extract binary digits from right to left
    while (n > 0)
    {
        int lastdig = n % 10;            // Get the rightmost digit (0 or 1)
        decNum = decNum + lastdig * pow; // Multiply by corresponding power of 2 and add
        pow = pow * 2;                   // Next power of 2
        n = n / 10;                      // Remove rightmost digit
    }

    // Display the resulting decimal number
    cout << "Decimal: " << decNum << endl;
}
int main(){
    // Test case: Convert binary 101 to decimal
    // Expected Output: 5 (binary 101 = 1*4 + 0*2 + 1*1 = 5)
    cout << "Binary 101 = ";
    BintoDec(101);

    return 0;
}

