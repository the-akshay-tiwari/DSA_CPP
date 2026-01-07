//sum from 1 to n
# include <iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"Enter value for n : ";
    cin>>n;
    // with for loop

    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<"sum = "<<sum;

    //with while loop
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"sum = "<<sum;
    

    return 0;
}