/*
Problem Description
Write a program that reads multiple test cases, where each test case contains two integers A and B. For each test case, the program should output the sum of A and B.

The input ends when two zeros (0 0) are provided.

Input
The input consists of multiple test cases, each on a new line. Each test case contains two integers A and B (0 < A, B < 10).
The last test case will be 0 0, which signals the end of the input.
Output
For each test case, output the sum of A and B.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b;

    vector<pair<int,int>> nums;
    
    while(a != 0){
        cin >> a >> b;
        if(a!=0){
        nums.push_back(make_pair(a,b));
        }
    }

    for(int i=0;i<nums.size();i++){
        cout << nums[i].first + nums[i].second << "\n";
    }
}