#include <iostream>

using namespace std;
int isPrime(int);

int main(){
    int num;
    cout<<"Enter a Number:"<<endl;
    cin>>num;
    switch (isPrime(num)){
    case -1:
        cout<<"Neither Prime nor Composite";
        break;
    case 0:
        cout<<"Composite";
        break;
    case 1:
        cout<<"Prime";
        break;
    default:
        cout<<"Failed to Execute";
        break;
    }
    return 0;
}

int isPrime(int num){
    if(num==0||num==1){
        return -1;
    }
    else if(num==2){
        return 1;
    }
    else{
        for(int i=2;i<num;i++){
            if(num%i==0){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
    return 2;
}