/*
Problem
Write a program that takes two integers, A and B, as input and outputs their sum.

Input
The input consists of multiple test cases.

Each test case is given on a single line, containing two integers A and B.
(0 < A, B < 10)

Output
For each test case, print the sum of A and B.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b;

    vector<pair<int,int>> nums;

    while(cin >> a >> b){
        nums.push_back(make_pair(a,b));
    }

    for(int i=0;i<nums.size();i++){
        cout << nums[i].first + nums[i].second << "\n";
    }
}