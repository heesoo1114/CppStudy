#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	// open, is_open(), wirte(), close();

	// ������ ����, �б�
	std::ofstream writeFile("test2.txt"); // output file stream

	// char arr[8] = "Heesoo";
	// if (writeFile.is_open())
	// {
	// 	writeFile.write(arr, 7); // ù ��°�δ� ���ڿ�, ����
	// 	writeFile << "����" << endl;
	// 	writeFile << "�޷�";
	// }
	// writeFile.close();

	// string str;
	// for (int i = 0; i < 5; i++)
	// {
	// 	cin >> str;
	// 	writeFile << str << endl;
	// }
	// writeFile.close();

	// ���� �б� -> get
	ifstream readFile("test2.txt");

	char buf[1024];
	while (!readFile.eof())
	{
		readFile.getline(buf, 12); // buf, bufũ��
		cout << buf << endl;
	}

	// string str;
	// while (getline(readFile, str))
	// {
	// 	cout << str << endl;
	// }

	// while (!readFile.eof()) // end of file
	// {
	// 	cout << readFile.get() << endl;
	// }
}