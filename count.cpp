#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the  number:";
    cin>>num;
    int first,last,sum;
    last=num%10;
    while(num>10){
    num=num/10;
    first=num;


    }
    sum=first+last;
cout<<"firstdigit and secondigit"<<sum;
}