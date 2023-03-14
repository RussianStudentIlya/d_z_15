#include <iostream>
#include "sha1.h"
#include "Chat.h"
#include <string.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Chat ch = Chat();

	/*-----�����������-----*/
	ch.reg((char*)"user1", (char*)"pass1", sizeof("pass1"));
	ch.reg((char*)"user2", (char*)"pass2", sizeof("pass2"));
	ch.reg((char*)"user3", (char*)"pass3", sizeof("pass3"));
	ch.reg((char*)"user4", (char*)"pass4", sizeof("pass4"));
	ch.reg((char*)"user5", (char*)"pass5", sizeof("pass5"));

	/*-----�������� ������������-----*/
	ch.del_reg((char*)"user2");
	ch.del_reg((char*)"user4");

	/*-----�������� ������������� ������������-----*/
	cout << "�����: user1" << " ������: pass1" << " ������: " << ch.login((char*)"user1", (char*)"pass1", sizeof("pass1")) << endl;
	
	cout << "�����: user2" << " ������: pass2" << " ������: " << ch.login((char*)"user2", (char*)"pass2", sizeof("pass2")) << endl;

	cout << "�����: user3" << " ������: pass3" << " ������: " << ch.login((char*)"user3", (char*)"pass3", sizeof("pass3")) << endl;

	cout << "�����: user4" << " ������: pass4" << " ������: " << ch.login((char*)"user4", (char*)"pass4", sizeof("pass4")) << endl;

	cout << "�����: user5" << " ������: pass5" << " ������: " << ch.login((char*)"user5", (char*)"pass5", sizeof("pass5")) << endl;

	return 0;
}