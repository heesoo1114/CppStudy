#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	#pragma region ���� ��ġ ã��

	/*string input;

	getline(cin, input);

	cout << input.find("Rome") << endl;*/

	#pragma endregion

	#pragma region �ֹε�Ϲ�ȣ - ����

	/*string input;

	getline(cin, input);

	input.erase(input.find("-"), 1);

	cout << input << endl;*/

	#pragma endregion

	#pragma region �عְŸ�

	/*string inputA;
	string inputB;

	int errorCount = 0;

	cin >> inputA >> inputB;

	for (int i = 0; i < inputA.length(); i++)
	{
		if (inputA[i] != inputB[i])
		{
			errorCount++;
		}
	}

	cout << errorCount << endl;*/

	#pragma endregion

	#pragma region ���
	
	// �� �Է�
	string RealAnswer;
	cout << "�� : ";
	cin >> RealAnswer;

	// ���� �÷��̿� ���� ���ڿ�
	string fakeAnswer = " ";
	for (int i = 0; i < RealAnswer.length(); i++)
	{
		fakeAnswer.replace(i, i, "_");
	}
	
	// ���
	int hp = RealAnswer.length();

	while (hp >= 0)
	{
		cout << "@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << "���� ��� : " << hp << endl;
		cout << fakeAnswer << endl; 

		char input;
		cout << "���ĺ� : ";
		cin >> input;

		int strCount = 0;	// �ϳ��� ������ ���ڰ� �ִ��� Ȯ��
		int celarCount = 0; // ��¥ ��� �Է��� ���� ������ Ȯ��

		for (int i = 0; i < RealAnswer.length(); i++)
		{
			// �Է��� ���ĺ� �� �信 ���ĺ��� �ش��ϴ� �κ��� �� ���ĺ��� ������ ��
			if (input == RealAnswer[i])
			{
				fakeAnswer[i] = input;
				strCount++;
			}

			// ���ڰ� ���ٸ�
			if (fakeAnswer[i] == RealAnswer[i]) 
			{
				celarCount++;
			}
		}
		
		// ��¥ ��� ��¥ ���� ��� ���ٸ�
		if (celarCount == RealAnswer.length())
		{
 			cout << "�ܾ ��� �ϼ��Ͽ����ϴ�." << endl;
			cout << fakeAnswer << endl;
			cout << "@@@@@@@@@@@@@@@@@@@@@@@";
			return 0;
		}

		// �ϳ��� ������ ���ڰ� ���� ��
		if (!strCount) hp--;
	}

	cout << "������ ����Ǿ����ϴ�." << endl;
	cout << fakeAnswer << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@";
	
	#pragma endregion

	return 0;
}