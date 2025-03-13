/*
Stars Printing Problem
Problem
Print stars in the following pattern:

The first line has 1 star.
The second line has 2 stars.
The N-th line has N stars.
Input
The first line contains an integer N (1 ≤ N ≤ 100).

Output
Print stars in the following pattern, starting from the first line to the N-th line. Each line should have the number of stars corresponding to the line number.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1;i<n+1;i++){
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout << "\n";
    }
}