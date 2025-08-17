#include <iostream>
using namespace std;

int main()
{int num;
 bool isprime = true;
 
 cout << "enter your number: ";
 cin >> num;

 if(num <=1){
    isprime = false;
 }
 else{
    for (int i=2; i<= num/2; i++){
        if (num%i == 0){
           isprime = false;
           break;
        }
    }
 }
  
 if(isprime)
   cout<<num<<" is a prime number. "<< endl;
 else
   cout<<num<<" is not a prime number."<<endl;
   
   return 0;

}