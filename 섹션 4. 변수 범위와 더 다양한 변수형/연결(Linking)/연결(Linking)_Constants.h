/*
namespace Constants
{
	const double pi(3.141592);
	const double gravity(9.8);
}
	extern�� ���� ���� �����̱� ������ �޸𸮸� �����ϰ� ���� ����
	�̸��� ���� ���� �ٸ� ������ ����ؾ� ��
	�ܼ��� �ش� ������Ͽ��� ������ ��

	�� ��ĵ� ������ �ش� ��������� ���� �� ����ϸ� pi, gravity ������ ���纻�� �þ (�޸� ����)
	-> ���� �޸� ���� ���� ���ؼ� const�� ���� �ٲ��� �ʴ� ����̱� ������ extern�� ����Ͽ� �޸𸮸� ������ �� �ְ� ���ִ� ���� ����

namespace Constants1
{
	extern const double pi2(3.141592);
	extern const double gravity2(9.8);
}
	pi2�� gravity2�� �޸𸮸� �����ϰ� ��
*/

namespace Constants2
{
	extern const double pi3;
	extern const double gravity3;
}
/*
	�Ϲ����� ��Ȳ ����

	���� ���� �������� ������ ������Ͽ��� ���ְ�
	�������� ������ �ش� ������ϰ� ���� �̸��� cpp ���Ͽ��� ����
	
	int main()
	{
		Constants2::pi3 = 3.141592;
		Constants2::gravity3 = 9.8;
	}
*/