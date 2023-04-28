#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	#pragma region 문자 위치 찾기

	/*string input;

	getline(cin, input);

	cout << input.find("Rome") << endl;*/

	#pragma endregion

	#pragma region 주민등록번호 - 삭제

	/*string input;

	getline(cin, input);

	input.erase(input.find("-"), 1);

	cout << input << endl;*/

	#pragma endregion

	#pragma region 해밍거리

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

	#pragma region 행맨
	
	// 답 입력
	string RealAnswer;
	cout << "답 : ";
	cin >> RealAnswer;

	// 게임 플레이에 사용될 문자열
	string fakeAnswer = " ";
	for (int i = 0; i < RealAnswer.length(); i++)
	{
		fakeAnswer.replace(i, i, "_");
	}
	
	// 목숨
	int hp = RealAnswer.length();

	while (hp >= 0)
	{
		cout << "@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << "남은 목숨 : " << hp << endl;
		cout << fakeAnswer << endl; 

		char input;
		cout << "알파벳 : ";
		cin >> input;

		int strCount = 0;	// 하나라도 동일한 문자가 있는지 확인
		int celarCount = 0; // 가짜 답과 입력한 답이 같은지 확인

		for (int i = 0; i < RealAnswer.length(); i++)
		{
			// 입력한 알파벳 중 답에 알파벳에 해당하는 부분을 그 알파벳을 삽입해 줌
			if (input == RealAnswer[i])
			{
				fakeAnswer[i] = input;
				strCount++;
			}

			// 문자가 같다면
			if (fakeAnswer[i] == RealAnswer[i]) 
			{
				celarCount++;
			}
		}
		
		// 가짜 답과 진짜 답이 모두 같다면
		if (celarCount == RealAnswer.length())
		{
 			cout << "단어를 모두 완성하였습니다." << endl;
			cout << fakeAnswer << endl;
			cout << "@@@@@@@@@@@@@@@@@@@@@@@";
			return 0;
		}

		// 하나라도 동일한 문자가 없을 때
		if (!strCount) hp--;
	}

	cout << "게임이 종료되었습니다." << endl;
	cout << fakeAnswer << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@";
	
	#pragma endregion

	return 0;
}