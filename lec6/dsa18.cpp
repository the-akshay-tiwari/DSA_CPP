//
# include <iostream>
using namespace std;
int binToDec(int binNum){
    int decNum=0;
    int pow=1;
    while(binNum>0){
        int rem=binNum%10;
        decNum+=rem*pow;
        pow*=2;
        binNum/=10;
    }
    return decNum;
}
int main(){
    int binNum;
    cout<<"enter the binary number : ";
    cin>>binNum;
    
    cout<<"Decimal form of "<<binNum<<" = "<<binToDec(binNum);
    
    return 0;
}