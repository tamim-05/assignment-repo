#include <iostream>
using namespace std;

int main(){
    double n1,n2,result;
    char op;

    cout << "enter your calculation: " << endl;
    cin >> n1 >> op >> n2;

    if(op == '+'){
        result = n1+n2;
    }
    else if(op == '-'){
        result = n1-n2;
    }
    else if(op == '*'){
        result = n1*n2;
    }
    else if(op == '/'){
        if(n2 == 0){
            cout << "divider cant be 0." << endl;
        }
        else{
            result = n1/n2;
        }
    }
    else{
        cout << "invalid operator." << endl;
        return 0;
    }
    cout << "your desired result of the calculation is: " << result << endl;
    return 0;
}