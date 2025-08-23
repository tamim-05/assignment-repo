#include <iostream>
using namespace std;

int main(){
    int num, reversed=0, remainder, original;

    cout << "enter an intenger: ";
    cin >> num;

    original=num;

    while(num!=0){
        remainder = num % 10;
        reversed = reversed*10+remainder;
        num = num/10;
    }

    if(original==reversed){
        cout << original << " is a palindrome number" << endl;
    }
    else{
        cout << original << " is not a palindrome number" << endl;
    }

    return 0;
}