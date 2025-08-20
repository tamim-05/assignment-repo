#include <iostream>
using namespace std;

int main()
{int n;

    cout << "Enter your number: " << endl;
    cin >> n;

    if(n%2==0){
        cout << "given number is even." << endl;
    }
    else if(n%2!=0){
        cout << "given number is odd." << endl;
    }
    else{
        cout << "invalid input." << endl;
    }
    return 0;
}