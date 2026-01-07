//sum of odd numbers and even numbers
# include <iostream>
using namespace std;
int main(){
    int oddSum=0;
    int evenSum=0;
    int n;
    cout<<"Enter value for n : ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        if(i%2==0){
            evenSum+=i;
        }
        else{
            oddSum+=i;
        }

    }

    cout<<"sum of odd numbers = "<<oddSum<<endl;
    cout<<"sum of even numbers = "<<evenSum<<endl;

    return 0;
}