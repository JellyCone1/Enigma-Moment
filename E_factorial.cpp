#include <iostream>

using namespace std;
int factorial(int);

int main(){
    int num;
    cout<<"Find Factorial of:"<<endl;
    cin>>num;
    int result = factorial(num);
    cout<<"Factorial of "<<num<<" is: "<<result;
}

int factorial(int num){
    int result = num;
    while (num>1){
        result*=(num-1);
        --num;
    }
    return result;
}