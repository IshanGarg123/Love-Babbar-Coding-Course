// Check Exponential
#include<iostream>
using namespace std;

int Exponential(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    int temp = Exponential(a,b/2);
    cout << temp << endl;
    if(b%2==0)
    {
        return temp*temp;
    }
    return temp*temp*a;
}

int main()
{
    cout << Exponential(2,30) << endl;
}
