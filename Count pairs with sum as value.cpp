#include<iostream>
using namespace std;

int main()
{
    int a[5] = {1,4,2,3,6};
    int value = 5;
    int count = 0;
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(a[i]+a[j]==value)
            {
                count = count+1;
            }
        }
    }
    cout<<"Count of pairs with sum as value is: "<<count;
}
