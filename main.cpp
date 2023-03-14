#include <iostream>
#include "sha1.h"
#include "Chat.h"
#include <string.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Chat ch = Chat();

	/*-----Регистрация-----*/
	ch.reg((char*)"user1", (char*)"pass1", sizeof("pass1"));
	ch.reg((char*)"user2", (char*)"pass2", sizeof("pass2"));
	ch.reg((char*)"user3", (char*)"pass3", sizeof("pass3"));
	ch.reg((char*)"user4", (char*)"pass4", sizeof("pass4"));
	ch.reg((char*)"user5", (char*)"pass5", sizeof("pass5"));

	/*-----Удаление пользователя-----*/
	ch.del_reg((char*)"user2");
	ch.del_reg((char*)"user4");

	/*-----Проверка существования пользователя-----*/
	cout << "Логин: user1" << " Пароль: pass1" << " Статус: " << ch.login((char*)"user1", (char*)"pass1", sizeof("pass1")) << endl;
	
	cout << "Логин: user2" << " Пароль: pass2" << " Статус: " << ch.login((char*)"user2", (char*)"pass2", sizeof("pass2")) << endl;

	cout << "Логин: user3" << " Пароль: pass3" << " Статус: " << ch.login((char*)"user3", (char*)"pass3", sizeof("pass3")) << endl;

	cout << "Логин: user4" << " Пароль: pass4" << " Статус: " << ch.login((char*)"user4", (char*)"pass4", sizeof("pass4")) << endl;

	cout << "Логин: user5" << " Пароль: pass5" << " Статус: " << ch.login((char*)"user5", (char*)"pass5", sizeof("pass5")) << endl;

	return 0;
}