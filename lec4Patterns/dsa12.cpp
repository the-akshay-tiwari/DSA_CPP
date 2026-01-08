//floyd's triangle
# include <iostream>
using namespace std;
int main(){
    int n=4;
    //int k=1;
    char k='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

    return 0;
}