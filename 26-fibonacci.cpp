#include <iostream>
using namespace std;

int main(){
    int n, first=0, second=1, next;
    
    cout << "enter the limit: " << endl;
    cin >> n;

    cout << "fibonacci series: ";
   for (int i=0; i<n ; i++){
    if(i<=1){
        next = i;
    }
    else{
        next = first + second;
        first = second;
        second = next;
    }
    cout << next << " ";
   }
   return 0;
}