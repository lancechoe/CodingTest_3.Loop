/*
Problem
Given an integer n, write a program to compute the sum of all integers from 1 to n.

Input
The first line contains an integer n (1 ≤ n ≤ 10,000).

Output
Print the sum of all integers from 1 to n.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;

    cin >> n;

    for(int i=1;i<=n;i++){
        sum = sum + i;
    }

    cout << sum << endl;
}