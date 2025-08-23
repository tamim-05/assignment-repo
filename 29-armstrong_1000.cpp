#include <iostream>
#include <cmath>
using namespace std;

int main()
{int num, temp, originalnum, remainder, n=0;
    double result;

    cout << "armstrong numbers from 1 to 1000 are: " << endl;

    for(num = 1; num <= 1000; num++){
        originalnum=num;
        n=0;
        result=0.0;

    temp=num;
    while (temp !=0){
        temp /= 10;
        ++n;
    }

    temp=num;
    while (temp!=0){
        remainder = temp % 10;
        result += pow(remainder,n);
        temp /= 10;
    }

    if((int)result == originalnum){
        cout << originalnum << " ";
    }

    }

   
    cout << endl;

    return 0;
} 