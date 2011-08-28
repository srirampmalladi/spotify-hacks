#include <conio.h>
#include <iostream>
#include <string>

#include <libspotify/api.h>

#include <appkey.h>
#include <spshell.h>

using namespace std;

int main() {
	string username;
	char password[255];
	cout << "Username: ";
	cin >> username;

	char c;
	int i = 0;
	do {
		c = _getch();
		password[i++] = c;
	} while(c != 13);
	password[i] = '\0';

	//cout << "Username: " << username << ", Password: " << password << endl;
	
	spshell_init(username.c_str(), password);

	_getch();

}