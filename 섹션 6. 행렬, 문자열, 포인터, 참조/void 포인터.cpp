#include <iostream>

using namespace std;

int main()
{
	// void ������, generic �����Ͷ�� �θ�

	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i; // int�� �ּҵ� ���� �� ����
	ptr = &f; // float�� �ּҵ� ���� �� ����
	ptr = &c; // char�� �ּҵ� ���� �� ����

	/*
		<void �������� �Ѱ�>

		1. ������ ������ �� �� ����
		- ������ ������ �ϱ� ���ؼ��� �����Ͱ� ����Ű�� �ִ� ������ Ÿ���� �˾ƾ� �ϴµ� void �����ʹ� �� �� ����
		
		2. �������� �� �� ����
		- ������ �� ��ȯ�� �ؾ� �������� ��������
	*/

	return 0;
}