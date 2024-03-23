#include <iostream>
#include <vector>

using namespace std;
vector<int> factor(int);

int main(){
    int num;
    int sum=0;
    vector<int> factors;
    cout<<"Enter A Number:"<<endl;
    cin>>num;
    factors = factor(num);
    for(int element: factors){
        sum+=element;
    }
    if (sum==2*num){
        cout<<"It is a Perfect Number";
    }
    else{
        cout<<"It is not a Perfect Number";
    }
    return 0;
}

vector<int> factor(int num){
    vector<int> vect;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            vect.push_back(i);
        }
        else{
            continue;
        }
    }
    return vect;
}