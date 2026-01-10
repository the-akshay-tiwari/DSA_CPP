//decimal to binary conversion
# include <iostream>
using namespace std;
int decToBin(int decNum){
    int temp=decNum;
    int binNum=0;
    int i=0;
    int pow=1;
    while(temp!=0){
        int dig=temp%2;
        binNum+=dig*pow;
        pow*=10;
        temp/=2;
        i++;
    }
    return binNum;
}

int main(){
    int decNum;
    cout<<"enter the decimal number : ";
    cin>>decNum;
    
    cout<<"binary of "<<decNum<<" = "<<decToBin(decNum);

    return 0;
}