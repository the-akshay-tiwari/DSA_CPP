#include <iostream>
using namespace std;
int main()
{
    int marks = 89;
    if (marks >= 90)
    {
        cout << "A";
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "B";
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "C";
    }

    return 0;
}