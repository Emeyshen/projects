// Bank Alpha
#include <iostream>
using namespace std;

class Account
{
public:

	int AccountBalance() {

		cout << "��� ������: ";

		return Balance;
	
	}

	int Deposit(int Deposit) {

		cout << "������� ����� �� ������ ������?" << endl;

		cin >> Deposit;

		Balance = Balance + Deposit;

		return Balance;
	}

	int Withdraw(int Withdraw) {

		cout << "������� ����� �� ������ �������?" << endl;

		cin >> Withdraw;

		if (Balance >= Withdraw) {

			Balance = Balance - Withdraw;

			return Balance;

		}

		else cout << "�� ����� ����� ������������ ������." << endl;
	}

private:

	int Balance = 0;

};

int main() {

	setlocale(LC_ALL, "russian");

	int select,deposit,withdraw;

	Account User;

	cout << "Bank Alpha 0.1" << endl;

	cout << "1 - ������, 2 - ������ ������, 3 - ������� ������, 4 - �����." << endl;

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
		cout << "�� ������." << endl; break;
	}

	} while (select != 4);

}