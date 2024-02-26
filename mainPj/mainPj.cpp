#include <iostream>
#include <Windows.h>
#include <string>
#include <string.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int pizzaMenu, drinkMenu;
	int yveren = 0;
	double Chet = 0, ChetNap = 0;
	int colvo; 

	int sir = 0;
	int pep = 0;
	int fruit = 0;
	int bezsir = 0;

	int cola = 0;
	int pepsi = 0;
	int voda = 0;
	
	cout << "\n\n\tДобро пожаловать в пиццерию!\n";

	while (true)
	{

	
		do
		{
			cout << "Ваш Счет = " << Chet+ChetNap << "\n" ;
			cout << "\n\nВыберите пиццу: \n";
			cout << "1) Сырная - 1.000 \n2) Пеперони - 1.300 \n3) Фруктовая - 2.200 \n4) Без сыра :( - 700 \n5) Меню напитков\n6) Офформить заказ\n";
			cin >> pizzaMenu;
			system("cls");

		} while (pizzaMenu != 1 && pizzaMenu != 2 && pizzaMenu != 3 && pizzaMenu != 4 && pizzaMenu != 5 && pizzaMenu != 6);

		if (pizzaMenu == 1)
		{
			do
			{
				cout << "Введите Кол-во товара\n";
				cin >> colvo;
				cout << "Вы уверены в ее покупке?\n";
				cout << "1) Неет... \n2) Да!\n";
				cin >> yveren;
				system("cls");

			} while (yveren < 0 && yveren >=3);
			if (yveren == 2)
			{
				Chet += 1000*colvo;
				sir += colvo;
			}
		}
		else if (pizzaMenu == 2)
		{
			do
			{
				cout << "Введите Кол-во товара\n";
				cin >> colvo;
				cout << "Вы уверены в ее покупке?\n";
				cout << "1) Неет... \n2) Да!\n";
				cin >> yveren;
				system("cls");

			} while (yveren < 0 && yveren >= 3);
			if (yveren == 2)
			{
				Chet += 1300* colvo;
				pep += colvo;
			}
		}
		else if (pizzaMenu == 3)
		{
			do
			{
				cout << "Введите Кол-во товара\n";
				cin >> colvo;

				cout << "Вы уверены в ее покупке?\n";
				cout << "1) Неет... \n2) Да!\n";
				cin >> yveren;
				system("cls");

			} while (yveren < 0 && yveren >= 3);
			if (yveren == 2)
			{
				Chet += 2200* colvo;
				fruit += colvo;
			}
		}
		else if (pizzaMenu == 4)
		{
			do
			{
				cout << "Введите Кол-во товара\n";
				cin >> colvo;

				cout << "Вы уверены в ее покупке?\n";
				cout << "1) Неет... \n2) Да!\n";
				cin >> yveren;
				system("cls");

			} while (yveren < 0 && yveren >= 3);
			if (yveren == 2)
			{
				Chet += 750* colvo;
				bezsir += colvo;
			}
		}
		else if (pizzaMenu == 5)
		{
			do
			{

				cout << "Ваш Счет = " << Chet + ChetNap << "\n";
				cout << "\n\nВыберите напиток: \n";
				cout << "1) Кола - 200 \n2) Вода - 100 \n3) Пепси - 150 \n";
				cin >> drinkMenu;
				system("cls");

			} while (drinkMenu != 1 && drinkMenu != 2 && drinkMenu != 3);
			if (drinkMenu == 1)
			{
				do
				{
					cout << "Введите Кол-во товара\n";
					cin >> colvo;

					cout << "Вы уверены в покупке?\n";
					cout << "1) Неет... \n2) Да!\n";
					cin >> yveren;
					system("cls");

				} while (yveren < 0 && yveren >= 3);
				if (yveren == 2)
				{
					ChetNap += 200* colvo;
					cola += colvo;
				}
			}
			else if (drinkMenu == 2)
			{
				do
				{
					cout << "Введите Кол-во товара\n";
					cin >> colvo;

					cout << "Вы уверены в покупке?\n";
					cout << "1) Неет... \n2) Да!\n";
					cin >> yveren;
					system("cls");

				} while (yveren < 0 && yveren >= 3);
				if (yveren == 2)
				{
					ChetNap += 100 * colvo;
					voda += colvo;
				}
			}
			else if (drinkMenu == 3)
			{
				do
				{
					cout << "Введите Кол-во товара\n";
					cin >> colvo;

					cout << "Вы уверены в покупке?\n";
					cout << "1) Неет... \n2) Да!\n";
					cin >> yveren;
					system("cls");

				} while (yveren < 0 && yveren >= 3);
				if (yveren == 2)
				{
					ChetNap += 150* colvo;
					pepsi += colvo;
				}

			}
		}
		else if (pizzaMenu == 6)
		{
			if (pep + sir + fruit + bezsir + voda + pepsi + cola == 0)
			{
				cout << "\n\n\tВЫ НЕЧЕГО НЕ ЗАКАЗАЛИ\n";
				break;
			}
			cout << "\n\n\tПодводя Итог вы заказали:\n";
			if (voda > 0)
			{
				cout << "Вода: " << voda << "\n";
			}
			if (pepsi > 0)
			{
				cout << "Пепси: " << pepsi << "\n";
			}
			if (cola > 0)
			{
				cout << "Кола: " << cola << "\n";
			}
			if (pep > 0)
			{
				cout << "Пеперони: " << pep << "\n";
			}
			if (sir > 0)
			{
				cout << "С сыром: " << sir << "\n";
			}
			if (fruit > 0)
			{
				cout << "Фруктовая: " << fruit << "\n";
			}
			if (bezsir > 0)
			{
				cout << "Без сыра: " << bezsir << "\n";
			}
			cout << "Счет Без Скидкой = " << Chet+ChetNap << "\n";
			if (ChetNap <= 200 || cola+pepsi+voda <= 3)
			{
				ChetNap = ChetNap * 0.85;
			}
			for (int i = pep + sir + fruit + bezsir; i >= 5; i-5);
			{
				Chet = Chet - bezsir;
			}
			if (Chet+ChetNap >= 5000)
			{
				cout << "Счет Со Скидкой = " << (Chet+ ChetNap) * 0.8 << "\n";
			}
			break;


		}

	}

	//system("slc");
	//system("pause");

	return 0;
}