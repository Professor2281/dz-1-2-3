
#include <iostream>

int main()
{
    bool side;
    short sum = 0;
    for (int i = 0; i < 9; i++)
    {
        cout << "¬ведите сторону монетки 1/0(орел/решка): ";
        cin >> side;
        if (side)
            sum++;
    }
     if (sum % 2)
         cout << "—тудент выбрал отрицательную сторону" << endl;
    else cout << "—тудент выбрал положительную сторону" << endl;
}