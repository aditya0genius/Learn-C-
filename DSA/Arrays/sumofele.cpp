#include <iostream>

using namespace std;
int main()
{
    int nums[5]={5,2,7,4,8},sum=0;

    for(int &elements:nums)
    {
        sum+=elements;
        
    }
    cout<<"Sum of Elements = "<<sum;
    return 0;

}