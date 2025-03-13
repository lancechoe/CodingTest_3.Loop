/*
Problem
Before solving for loop problems in earnest, it's important to note that slow input/output methods can cause time limit exceeded (TLE) errors when handling multiple lines of input or output.

If using C++ with cin/cout, apply the following optimizations:

Use cin.tie(NULL) and ios::sync_with_stdio(false).
Use "\n" instead of endl for faster output.
Avoid mixing C-style I/O functions (scanf, printf, puts, etc.) with C++ streams.
For Java,

Use BufferedReader and BufferedWriter instead of Scanner and System.out.println().
Call BufferedWriter.flush() only once at the end.
For Python,

Use sys.stdin.readline() instead of input().
Since sys.stdin.readline() includes a trailing newline character, use .rstrip() when necessary.
Also, input and output streams are separate, so there is no need to store all test cases before processing them. Instead, process and print results immediately.

Input
The first line contains an integer T (number of test cases, 1 ≤ T ≤ 1,000,000).
Each of the next T lines contains two integers A and B (1 ≤ A, B ≤ 1,000).
Output
Print the sum of A and B for each test case in order, one per line.
*/

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T, a, b;
    cin >> T;

    int sum[T];

    for(int i=0;i<T;i++){
        cin >> a >> b;
        sum[i] = a+b;
    }

    for(int i=0;i<T;i++){
        cout << sum[i] << "\n";
    }
}