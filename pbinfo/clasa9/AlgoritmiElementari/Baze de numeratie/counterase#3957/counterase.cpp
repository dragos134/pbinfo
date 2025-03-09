#include <iostream>
#include <cstring>
#include <thread>
#include <cmath>
using namespace std;

const int MAX_RESULT_DIGITS = 10000;
const int MAX_EXPONENT_DIGITS = 500;
const int MAX_DIGITS = 500;
const int MAX_BINARY_DIGITS = 1660;

// Multiply a big number (stored in char array) by 2
void multiply_by_2(char result[MAX_RESULT_DIGITS], int& result_size) {
    int carry = 0;
    
    for (int i = 0; i < result_size; i++) {
        int num = (result[i] - '0') * 2 + carry;
        result[i] = (num % 10) + '0';
        carry = num / 10;
    }

    if (carry) {
        result[result_size] = carry + '0';
        result_size++;
    }
}

// Compute 2^exponent where exponent is an `int`
void compute_power_of_two(int exponent, char result[MAX_RESULT_DIGITS]) {
    // Start with result = 1
    result[0] = '1';
    int result_size = 1;

    // Multiply by 2, exponent times
    for (int i = 0; i < exponent; i++) {
        multiply_by_2(result, result_size);
    }

    // Reverse the result (because we stored it backwards)
    for (int i = 0; i < result_size / 2; i++) {
        swap(result[i], result[result_size - i - 1]);
    }

    // Null-terminate the result
    result[result_size] = '\0';
}

// Convert a big number from base-10 (char array) to binary and count 1s
int count_binary_ones(const char number[500]) {
    char temp[MAX_DIGITS]; // Temporary storage for division
    strcpy(temp, number);

    char binary[MAX_BINARY_DIGITS] = {}; // Store binary digits (reversed)
    int binary_length = 0;
    int ones_count = 0;

    // Convert base-10 number to binary
    while (strcmp(temp, "0") != 0) { // While the number is not zero
        int remainder = 0;

        for (int i = 0; temp[i] != '\0'; i++) {
            int digit = temp[i] - '0';
            int new_digit = (remainder * 10 + digit) / 2;
            remainder = (remainder * 10 + digit) % 2;
            temp[i] = new_digit + '0';
        }

        if (remainder == 1) {
            ones_count++;
        }

        binary[binary_length++] = remainder + '0';
        
        // Remove leading zeros
        int start_index = 0;
        while (temp[start_index] == '0') {
            start_index++;
        }
        strcpy(temp, temp + start_index);
    }

    return ones_count;
}

int main()
{
    char n[501], rez[10000];
    int cntOne = 0, size, carry = 0, nextCarry = 0, nextSize, sizeRez = 1;
    cin >> n;
    size = strlen(n);
    nextSize = size;

    for(int i = 0; i < 10000; i++)
    {
        rez[i] = '0';
    }

    int startStep = 0, nextStartStep = 0;
    while(nextSize) // cat timp mai avem cifre
    {
        // cout << n << ' ' << size << ' ' << startStep << ' ' << n[startStep] << '\n';
        
        // incrementam cntOne de fiecare data cand ultima cifra este impara
        cntOne += (n[size - 1] - '0') % 2;
        
        // daca prima cifra este mai mica decat 2, scadem 1 din nextSize si incrementam nextStartStep, care in
        // final va fi folosit pentru a sti de unde incepem sa impartim la 2
        if(n[startStep] - '0' < 2)
        {
            nextSize--;
            nextStartStep++;
        }

        // resetam carry-urile
        carry = 0;
        nextCarry = 0;
        
        // impartim la 2
        for(int i = startStep; i < size; i++)
        {
            nextCarry = (n[i] - '0') % 2;
            n[i] = (carry * 10 + (n[i] - '0')) / 2 + '0';
            carry = nextCarry;
        }
        startStep = nextStartStep;

    }

    compute_power_of_two(cntOne, rez);
    cout << rez;

    return 0;
}
