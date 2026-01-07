//prime number
# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to check : ";
    cin>>n;
    int mid=(n+1)/2; 
    for(int i=2;i*i<=n;i++)
    //for(int i=2;i<mid;i++)
    {
        if(n%i==0){
            cout<<n<<" is a composite number";
            return 0;
        }
    }
    cout<<n<<" is a prime number";

    return 0;
}