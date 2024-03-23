#include <iostream>

using namespace std;

int main(){
    float marks[5];
    cout<<"Enter your marks: "<<endl;
    cin>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4];
    float avg = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/(sizeof(marks)/sizeof(marks[0]));
    float tot = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    float percent = (tot/500)*100;
    // cout<<sizeof(marks)/sizeof(int);
    cout<<"Total Marks: "<<tot<<endl;
    cout<<"Average Marks: "<<avg<<endl;
    cout<<"Percentage: "<<percent<<endl;
    return 0;
}