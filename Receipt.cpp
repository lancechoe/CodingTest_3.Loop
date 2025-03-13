/*
Receipt Verification
Problem
Junwon visited Costco for the first time last week. It was amazing! However, despite not picking up many items, the total amount seemed suspiciously high. Junwon wants to verify if the total price on the receipt is correctly calculated.

Given:

The total amount X written on the receipt.
The number of different items purchased, N.
For each item, its price (a) and quantity (b).
Write a program to check if the total price calculated from the items matches X.

Input
The first line contains an integer X (the total amount on the receipt).
The second line contains an integer N (the number of different items purchased).
The next N lines contain two integers a (price of the item) and b (quantity), separated by a space.
Output
Print "Yes" if the calculated total matches X.
Otherwise, print "No".
*/

#include <iostream>
using namespace std;

int main(){
    long int x; 
    int n, a, b;
    int sum = 0;

    cin >> x >> n;

    int price[n];

    for(int i=0;i<n;i++){
        cin >> a >> b;
        price[i] = a*b;
        sum = sum + price[i];
    }

    if(sum == x){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}