// Say Digit
#include<iostream>
using namespace std;

void SayDigit(int n,string arr[])
{
    if(n==0)
    {
        return;
    }

    int temp = n%10;
    SayDigit(n/10,arr);
    cout << arr[temp] << " ";
}


int main()
{
    int a;
    cin >> a;
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    SayDigit(a,arr);
    return 0;
}