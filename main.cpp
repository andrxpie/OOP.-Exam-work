#include "Guest.h"
#include "Admin.h"

int main() {
	system("color 09");

	int user, singUp, logIn; Admin admin; Guest guest;
	do {
		cout << " >>> Menu <<<\n";
		cout << " 1. Sing Up\n 2. Log In\n 3. Exit\n";
		cout << " ?: "; cin >> user;
		switch (user) {
		case 1:
			system("cls");
			if (admin.getIsAdmin() == false) {
				cout << " >>> Choose person <<<\n";
				cout << " 1. Admin\n 2. Guest\n 3. Exit\n";
				cout << " ?: "; cin >> singUp;
			} else singUp = 2;
			switch (singUp) {
			case 1:
				system("cls");
				admin.registerAdmin();
				break;
			case 2:
				guest.registerGuest();
				admin.add_guest(guest);
				break;
			case 3:
				system("cls");
				break;
			default:
				cerr << " error: wrong option, re-enter opt: "; cin >> singUp;
				break;
			} break;
		case 2:
			system("cls");
			cout << " >>> Choose person <<<\n";
			cout << " 1. Login As Admin\t2. Login As Guest\n";
			cout << " ?: "; cin >> logIn;
			switch (logIn) {
			case 1:
				system("cls");
				admin.loginAdmin();
				break;
			case 2:
				//guest.loginGuest();
				break;
			default:
				cerr << " error: wrong option, re-enter opt: "; cin >> logIn;
				break;
			} break;
		case 3:
			cout << "\n >>> Bye <<<\n";
			return 0;
		default:
			cerr << " error: wrong option, re-enter opt: "; cin >> user;
			break;
		}
	} while (user != 3);
}