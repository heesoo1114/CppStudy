#include "Header/bomberman.h"
#include <iostream>;
#include <io.h>
#include <fcntl.h>

using namespace std;

void AsciiArt()
{
	int oldMode = _setmode(_fileno(stdout), _O_U16TEXT);

	wcout << L"	 _______  _______  __   __  _______    __   __  _______  __    _  " << endl;
	wcout << L"	|  _    ||       ||  |_|  ||  _    |  |  |_|  ||   _   ||  |  | | " << endl;
	wcout << L"	| |_|   ||   _   ||       || |_|   |  |       ||  |_|  ||   |_| | " << endl;
	wcout << L"	|       ||  | |  ||       ||       |  |       ||       ||       | " << endl;
	wcout << L"	|  _   | |  |_|  ||       ||  _   |   |       ||       ||  _    | " << endl;
	wcout << L"	| |_|   ||       || ||_|| || |_|   |  | ||_|| ||   _   || | |   | " << endl;
	wcout << L"	|_______||_______||_|   |_||_______|  |_|   |_||__| |__||_|  |__| " << endl;

	int currentMode = _setmode(_fileno(stdout), _O_TEXT);

	
}