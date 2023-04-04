#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;

int main()
{
	int oldMode =_setmode(_fileno(stdout), _O_U16TEXT);

	wcout << L"	 _______  _______  __   __  _______    _______  __   __  _______  ______     " << endl;
	wcout << L"	|       ||   _   ||  |_|  ||       |  |       ||  | |  ||       ||    _ |	 " << endl;
	wcout << L"	|    ___||  |_|  ||       ||    ___|  |   _   ||  |_|  ||    ___||   | ||	 " << endl;
	wcout << L"	|   | __ |       ||       ||   |___   |  | |  ||       ||   |___ |   |_||_	 " << endl;
	wcout << L"	|   ||  ||       ||       ||    ___|  |  |_|  ||       ||    ___ |    __  |	 " << endl;
	wcout << L"	|   |_| ||   _   || ||_|| ||   |___   |       | |     | |   |___ |   |  | |	 " << endl;
	wcout << L"	|_______||__||__ ||_|   |_||_______|  |_______|  |___|  |_______ |___|  |_|  " << endl;

	int currentMode = _setmode(_fileno(stdout), _O_TEXT);

	cout << "¾È³çÇÏ¼¼¿ä." << endl;
}