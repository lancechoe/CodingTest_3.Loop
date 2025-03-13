/*
Problem
Write a program that takes two integers A and B as input and prints their sum.

Input
The first line contains an integer T, the number of test cases.
Each test case consists of a single line containing two integers A and B.
(0 < A, B < 10)
Output
For each test case, print the sum of A and B.
*/

#include <iostream>
using namespace std;

int main(){
    int n, a, b;
    
    cin >> n;

    int sum[n];

    for(int i=0;i<n;i++){
        cin >> a >> b;
        sum[i] = a+b;
    }

    for(int j=0;j<n;j++){
        cout << "Case #" << j+1 << ": " << sum[j] << endl;
    }
}