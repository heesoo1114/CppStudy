#include<iostream>
#include<vector>

using namespace std;

int main()
{
	#pragma region ����

	vector<int> v1; // ����ִ� int�� vector v1 ����

	vector<int> v2(5); // 5���� ���Ҹ� ������ int�� vector v2 ���� 
	// (5���� ���Ҵ� �ʱ�ȭ�� ������ �ʾұ� �⺻���� 0�� �ʱ�ȭ �Ǿ� ����)

	vector<int> v3(5, 2); // 2�� �ʱ�ȭ�� 5���� ���Ҹ� ������ int�� vector v3 ���� 

	vector<int> v4(2, 6); // 6���� �ʱ�ȭ�� 2���� ���Ҹ� ������ int�� vector v4 ����
	vector<int> v5(v4); // v4�� �����ؼ� int�� vector v5 ����
	// (���� ���ο� ���ڵ��� ���� �� ����)

	// �񱳿����ڷ� ��Һ� ����

	#pragma endregion

	#pragma region ����Լ�

	int num = 1;
	vector<int> v;
	vector<int> vA;

	v.assign(6, 2); // v�� 2�� �ʱ�ȭ�� 6���� ���Ҹ� �Ҵ�

	v.at(num);	// v�� num��° ���Ҹ� ��ȯ (����X �ӵ� ����)
	v[num];		// v�� num��° ���Ҹ� ��ȯ (����0 �ӵ� ����)

	v.front();	// v�� ù ��° ���� ��ȯ
	v.back();	// v�� ������ ���� ��ȯ

	v.clear(); // v�� ��� ���Ҹ� ���� (���Ҹ� ����, �޸𸮴� �״��)

	v.push_back(5); // v�� ������ ���� �ڿ� 7�� �Ҵ�Ǿ� �ִ� ���� ����
	v.pop_back();	// v�� ������ ���� ����

	v.begin();	// v�� ù ��° ���Ҹ� ����Ŵ 
	v.end();	// v�� ������ ������ ������ ����Ŵ 
	v.rbegin(); // v�� ������ ���Ҹ� ����Ŵ 
	v.rend();	// v�� ù ��° ������ ���� ����Ŵ
	// �� 4���� ����Լ��� interator�� �Բ� ����ϰ� ��ȯ�ϴ� ���� �ƴ� ����Ű�� ����

	v.reserve(num); // num���� ���Ҹ� ������ ��ġ�� �þƵ� (�̸� �����Ҵ��� ����)
	
	v.resize(num); // ũ�⸦ num���� ���� (ũ�Ⱑ Ŀ���� ��� �� �������� �⺻���� 0���� �ʱ�ȭ)
	v.resize(num, 5); // ũ�⸦ num���� ���� �� ũ�Ⱑ Ŀ���� ��� �� ������ 5�� �ʱ�ȭ

	v.size(); // v�� size ��ȯ
	v.capacity(); // v�� capacity ��ȯ	

	vA.swap(v); // vA�� v�� size�� capacity�� �������� (v2�� capacity�� 0�� �ӽ��� ��ü�� ����� ��������)
	vector<int>().swap(v); // v�� capacity�� ������ 

	v.insert(3, 4, 5); // 3��° ��ġ�� 5�� �ʱ�ȭ�� 4���� ���� ���� (�ڿ� �ִ� ���ҵ��� �ڷ�)
	v.insert(2, 3); // 2��° ��ġ�� 3���� �ʱ�ȭ�� ���� ���� (������ ���� iterator ��ȯ)

	vector<int>::iterator iter = v.begin(); 
	v.erase(iter); // iter�� ����Ű�� ���� ����
	// size�� ����, capacity�� �״��

	v.empty(); // v�� ��������� true ��ȯ. ������� ������ false ��ȯ
	// vector�� ����ִ����� ���� ������ size�� 0 (capacity�ʹ� ��� X)

	#pragma endregion

	#pragma region capacity��size
	
	v.size();
	// v�� ������ ���� ��ȯ

	v.capacity();
	// �Ҵ�� ������ ũ�� ��ȯ

	/*
		size 1 => capacity 1
		size 2 => capacity 2
		size 3 => capacity 4
		size 4 => capacity 4
		size 5 => capacity 8
		size 6 => capacity 8
		size 7 => capacity 8
		size 8 => capacity 8
		size 9 => capacity 16

		������ size���� size�� capacity ���� Ŀ���� 
		capacity�� �⺻�� size * 2 = capacity �Ҵ�����

		�̷������� capacity�� ���ϴ� ������
		push_back()�� �� �� size�� Ű���� �ϴµ� �̶� �׻� �����Ҵ��� ���ָ� ��ȿ�����̱� ������ �̸� ���ؼ� �����Ҵ��� ����

		capacity : �Ҵ�� �޸��� ����	
		size : �Ҵ�� �޸� ���� ��� ����
	*/

	#pragma endregion

	return 0;
}