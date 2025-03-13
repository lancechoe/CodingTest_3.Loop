/*
Problem
Write a program that takes an integer N as input and prints the multiplication table for N. Follow the given output format.

Input
The first line contains an integer N. (1 ≤ N ≤ 9)

Output
Print the multiplication table of N, from N × 1 to N × 9, following the given format.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    
    cin >> n;

    for(int i=1;i<10;i++){
        cout << n << " * " << i << " = " << n*i << endl;
    }
}