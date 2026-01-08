// right half pyramid
// *
// * *
// * * *
//and other types
# include <iostream>
using namespace std;
int main(){
    int n=4;
    //char k='A';
    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k--;
        }
        //k++;
        cout<<endl;
    }



    return 0;
}