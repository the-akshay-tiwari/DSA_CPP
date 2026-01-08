//inverted left half pyramid
// * * * *
//   * * *
//     * *
//       *
//and using number also
# include <iostream>
using namespace std;
int main(){
    int n=4;
    for (int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }

        for(int k=0;k<=n-i;k++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}