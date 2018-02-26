// Bank Alpha
#include <iostream>
using namespace std;

class Account
{
public:

	int AccountBalance() {

		cout << "Ваш баланс: ";

		return Balance;
	
	}

	int Deposit(int Deposit) {

		cout << "Сколько денег вы хотите внести?" << endl;

		cin >> Deposit;

		Balance = Balance + Deposit;

		return Balance;
	}

	int Withdraw(int Withdraw) {

		cout << "Сколько денег вы хотите вывести?" << endl;

		cin >> Withdraw;

		if (Balance >= Withdraw) {

			Balance = Balance - Withdraw;

			return Balance;

		}

		else cout << "На вашем счету недостаточно средст." << endl;
	}

private:

	int Balance = 0;

};

int main() {

	setlocale(LC_ALL, "russian");

	int select,deposit,withdraw;

	Account User;

	cout << "Bank Alpha 0.1" << endl;

	cout << "1 - баланс, 2 - внести деньги, 3 - вывести деньги, 4 - выход." << endl;

	do
	{

	cin >> select;

	switch (select)
	{
	case 1: {
				cout << User.AccountBalance() << endl; break;
	}
	case 2: {
				User.Deposit(deposit); break;
	}
	case 3: {
				User.Withdraw(withdraw); break;
	}
	default:
		cout << "Ты долбаёб." << endl; break;
	}

	} while (select != 4);

}