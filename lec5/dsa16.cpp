//functions -> for repititive work
# include <iostream>
using namespace std;
//sum of two numbers
int add(int a,int b){
    return a+b;
}

//min of 2 no
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

//sum of numbers from 1 to N
int sumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

//factorial of a number
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}

//main function
int main(){
    cout<<"Factorial = "<<fact(5);


    return 0;
}