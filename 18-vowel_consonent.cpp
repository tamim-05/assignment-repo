#include <iostream>
using namespace std;

int main()
{char n;

    cout << "Enter your charecter: " << endl;
    cin >> n;

    if((n>='a' && n<='z') || (n>='A' && n<= 'Z')){
        if(n== 'a' || n== 'A' || n== 'e' || n== 'E' || n== 'i' || n== 'I' || n== 'o' || n== 'O' || n== 'u' || n== 'U'){
            cout << "given charecter is vowel." << endl;
        }
        else{
            cout << "given charecter is consonent." << endl;
        }
        
    }
    else{
        cout << "invalid input." << endl;
    }
    return 0;
}// onek koshto koira vabte hoise sir