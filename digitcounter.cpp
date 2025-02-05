#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number:";
    cin>>num;
    int count=0;
    while(num>0||num<0){
        num=num/10;
        count++;
    }
    cout<<"Total Number of digits is"<<count;
}