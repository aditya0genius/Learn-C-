#include <iostream>

using namespace std;
int main()
{
	
	cout<<"Hello World";
    int no_of_lines;
    cout<<"Enter the no. of Lines";
    cin>>no_of_lines;
    for(int i=0;i<no_of_lines;i++){
        if(no_of_lines%2!=0){
            if(i=no_of_lines/2){
                for(int j=0;j<no_of_lines;j++)
                {
                 cout<<"*";
                }  
            }
            else{
                cout<<"*";
            }

        }
    }
	return 0;
}
