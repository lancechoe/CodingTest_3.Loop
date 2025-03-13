/*
Today is Hyea's interview day. After confidently answering the previous questions, she is given a final coding problem on the board: adding two numbers.

Hyea, who had studied her C++ book diligently, quickly wrote down the solution. The interviewer then asked:
"If the input and output are integers of N bytes in size, how would you implement the program?"

Recalling her studies, Hyea remembered that:

long int can store up to 4-byte integers.
long long int can store up to 8-byte integers.
She wondered,
"If I keep adding 'long' before 'int', will the storage increase by 4 bytes each time?"

Confident in her logic, she started writing out data types on the board, leaving the interviewer speechless.

What integer data type did Hyea write on the board if she believes it can store N-byte integers?

Input
The first line contains an integer N (4 ≤ N ≤ 1,000, N is a multiple of 4).
Output
Print the data type name that Hyea wrote, assuming that each additional "long" increases the storage by 4 bytes.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    int numLong;

    cin >> n;

    numLong = n/4;

    for(int i=0;i<numLong;i++){
        cout << "long ";
    }

    cout << "int" << endl;
}