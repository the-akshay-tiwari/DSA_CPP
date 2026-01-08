//1 2 3 4
//1 2 3 4
//1 2 3 4
//1 2 3 4 and its alphabet form

# include <iostream>
using namespace std;
int main(){
    int n=3;
    for(int i=0;i<n;i++){
        int k=65;
        for(int j=0;j<n;j++){
            cout<<(char)k<<" ";
            k++;
        }
        cout<<endl;
    }

    return 0;
}