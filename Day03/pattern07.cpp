#include <iostream>

using namespace std;

int main() {
    int row,column;
    cout<<"Enter number of Rows";
    cin>>row;
    cout<<"Enter number of column";
    cin>>column;
    for(int i=1;i<=row;i++) {
        for(int j=1;j<=column;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}