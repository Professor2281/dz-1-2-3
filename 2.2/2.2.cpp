#include <iostream>

void main()
{
    int days = 0, distance = 15, sum = 0, res = 0;
     cout << "Введите кол-во дней: ";
     cin >> days;
    
    for (int i = 1; i <= days; i++) {
        distance += 2;
       sum += distance;

    res = sum - (days * 2);
}
cout << "За " << days << " дня улитка проползла: " << res << " см." << endl;
