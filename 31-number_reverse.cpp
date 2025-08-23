#include <iostream>
using namespace std;

int main(){
    int num, reversed=0, remainder;

    cout << "enter an intenger: ";
    cin >> num;

    while(num!=0){
        remainder = num % 10;
        reversed = reversed*10+remainder;
        num = num/10;
    }

    cout << "reversed number= " << reversed << endl;
    return 0;
}