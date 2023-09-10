#include<iostream>
#include<cmath>
using namespace std;
void prime_num(int num){
    int flag=0; 
    if(num <=0){
        cout<<"The number is not a prime number!"<<endl;
    }
    int n = sqrt(num);
    for(int i=2; i<n; i++){
        if(num%i==0){
            flag++;
            break;
        }
    }
    if(flag!=0){
        cout<<"The number is not a prime number!"<<endl;
    }
    else{
        cout<<"The number is a prime number"<<endl;
    }
}
int main(){
    int num;
    cin >> num;
    prime_num(num);
}