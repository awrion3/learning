#pragma warning(disable:4996)	//scanf_s() �Լ� ��� ���� ������ ���� ����
#include <stdio.h>				//ǥ������� ���� ��� ���� ����

int main(void)					//���α׷� ���� ���� main() �Լ�
{
	int a, H, D, O, r;			//int�� ���� ����

	scanf("%d", &a);			//�� �Է� : scanf() �Լ� �� ������ ���� ������ ���

	H = a / 100;				//�Է��� ���� ���� �ڸ��� H ���ϱ�
	D = a / 10 % 10;			//�Է��� ���� ���� �ڸ��� D ���ϱ�
	O = a % 10;					//�Է��� ���� ���� �ڸ��� O ���ϱ�

	r = 1;								//�� �ڸ����� ��� �ٸ� �� �� r = 1�� �ʱ�ȭ
	r += H == D || H == O || D == O;	//�� �ڸ��� �� �� �ڸ����� ���� �� r += 1
	r += H == D && H == O;				//�� �ڸ����� ��� ���� �� r += 1

	printf("%d", r);			//�Է��� ���� �� �ڸ��� �� ���� �ڸ����� ���� r ���

	return 0;					//���α׷� ���� ����
}