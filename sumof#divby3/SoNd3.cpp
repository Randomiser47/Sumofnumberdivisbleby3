#include <iostream>
using namespace std;

int main(){
    int i; 
    int n =10;
    int sum = 0;
   

    for(i=0;i<=n;i++)
    {
        if (i%3==0)
        sum += i;

    }
    cout<<"The sum is:"<<sum<<endl;

    return 0;
}