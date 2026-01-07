// lower or upper
# include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character :  ";
    cin>>ch;
    if(ch<=90 && ch >=65){
        cout<<"'"<< ch <<"' is an upeercase character"<< endl;
    }
    else if(ch<=122 && ch >=97){
        cout<<"'"<< ch <<"' is a lowercase character"<< endl;
    }
    else{
        cout<<"invalid letter";
    }
    int n=3;
    //ternary statement
    cout<< (n >= 0? "positive" : "negative") ;

    return 0;
}