#include <iostream>

using namespace std;
int main()
{
	
	cout<<"Hello World";
    int no_of_lines,mid;
    cout<<"Enter the no. of Lines"<<endl;
    cin>>no_of_lines;
    mid=no_of_lines/2;
    for(int i=0;i<no_of_lines;i++){
        if(no_of_lines%2!=0){
            if(i==mid){
                cout<<"\n";
                for(int j=0;j<no_of_lines;j++)
                {
                 cout<<"*";
                }  
            }
            else{
                cout<<"\n*";
            }

        }
    }
	return 0;
}
