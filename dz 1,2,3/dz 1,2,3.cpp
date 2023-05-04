#include <iostream>
using namespace std;
int main()
{
	cout << "Home task #4.2.1\n\n";
	int pizzaID, drinkID, pizzaAmount, drinkAmount,
		temp;
	float pizzaPrice1, pizzaPrice2, pizzaPrice3,
		pizzaPrice4, selPizPrice;
	float drinkPrice1, drinkPrice2, drinkPrice3,
		selDrPrice;
	float sumOrder;
	pizzaPrice1 = 6.75;
	pizzaPrice2 = 8.95;
	pizzaPrice3 = 14.5;
	pizzaPrice4 = 10.25;
	drinkPrice1 = 1.79;
	drinkPrice2 = 2.5;
	drinkPrice3 = 3.09;
	sumOrder = 0;
	cout << "Choose a pizza:\n";
	cout << "1 — Cheese Pizza $" << pizzaPrice1 << "\n";
	cout << "2 — Hawaiian Pizza $" << pizzaPrice2;
	cout << "\n";
	cout << "3 — BBQ Chicken Pizza $";
	cout << pizzaPrice3 << "\n";
	cout << "4 — Seafood Delight Pizza $";
	cout << pizzaPrice4 << "\n";
	cin >> pizzaID;
	cout << "Enter enter the quantity of the selected "
		"pizza:\n";
	cin >> pizzaAmount;
	cout << "Choose a drink:\n";
	cout << "1 — Pepsi (Bottle 20 oz) $";
	cout << drinkPrice1 << "\n";
	cout << "2 — Aquafina (Bottle 20 oz) $";
	cout << drinkPrice2 << "\n";
	cout << "3 — Crush Orange (1 Liter) $";
	cout << drinkPrice3 << "\n";
	cin >> drinkID;
	cout << "Enter enter the quantity of the selected "
		"drink:\n";
	cin >> drinkAmount;
	switch (pizzaID)
	{
	case 1:
		selPizPrice = pizzaPrice1;
		break;
	case 2:
		selPizPrice = pizzaPrice2;
		break;
	case 3:
		selPizPrice = pizzaPrice3;
		break;
	case 4:
		selPizPrice = pizzaPrice4;
		break;
	default:
		cout << "Sorry, there is no such pizza "
			"on the menu\n";
		selPizPrice = 0;
		break;
	}
	switch (drinkID)
	{
	case 1:
		selDrPrice = drinkPrice1;
		break;
	case 2:
		selDrPrice = drinkPrice2;
		break;
	case 3:
		selDrPrice = drinkPrice3;
		break;
	default:
		cout << "Sorry, there is no such drink "
			"on the menu\n";
		selDrPrice = 0;
		break;
	}
	temp = pizzaAmount;
	if (pizzaAmount >= 5)
	{
		cout << "Super discount for you — every "
			"5th pizza is free!\n";
		pizzaAmount = pizzaAmount - pizzaAmount / 5;
	}
	sumOrder = sumOrder + pizzaAmount * selPizPrice;
	if ((drinkAmount >= 3) && (selDrPrice > 2))
	{
		cout << "You have a discount (15%) "
			"on drinks!\n";
		sumOrder = sumOrder + drinkAmount *
			selDrPrice * (1 - 0.15);
	}
	else
	{
		sumOrder = sumOrder + drinkAmount * selDrPrice;
	}
	if (sumOrder > 50)
	{
		cout << "You have a discount (20%) "
			"for the whole order!\n";
		sumOrder = sumOrder * (1 - 0.2);
	}
	cout << "Your order:\n";
	cout << "Pizza" << pizzaID << "-" << temp << "-$";
	cout << selPizPrice << "\n";
	cout << "Drink" << drinkID << "-";
	cout << drinkAmount << "-$" << selDrPrice << "\n";
	cout << "Sum: $" << sumOrder << "\n";
	cout << "Bon Appetit!";
	return 0;
}