#include<iostream>
using namespace std;
int main()
{
    int Number;
    int Sum = 0;
    cout << "Enter your number: ";
    cin >> Number;
    cout << "\n";
    cout << "Sum of digits in " << Number << " is ";
    for (; Number > 0; Number /= 10)
    {
        Sum += Number % 10;
    }
    cout << Sum;
    cout << "\n" << endl;
    return 0;
}