
#include <iostream>

int main()
{
    bool side;
    short sum = 0;
    for (int i = 0; i < 9; i++)
    {
        cout << "������� ������� ������� 1/0(����/�����): ";
        cin >> side;
        if (side)
            sum++;
    }
     if (sum % 2)
         cout << "������� ������ ������������� �������" << endl;
    else cout << "������� ������ ������������� �������" << endl;
}