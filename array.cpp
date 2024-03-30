#include <iostream>
using namespace std;

int sum(int &a,int &b);

int main(){
    // int n = 3;
    // int arr[n];
    // for (int i = 0; i < n; i++){
    //     cout<<"Enter Element:"<<endl;
    //     cin>>arr[i];        
    // }
    // for(int element: arr){
    //     cout<<element<<'\n';
    // }
    // return 0;   
    
    // int arr[10]={1,2,3,4,5};
    // for(int element:arr){
    //     cout<<element<<'\n';
    // }
    
    int a=10,b=20;
    cout<<sum(a,b);
    
    return 0;
}
int sum(int &a,int &b){
    return a+b;
}