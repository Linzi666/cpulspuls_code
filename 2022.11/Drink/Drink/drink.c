#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

//��һ�ַ���
int fun1(int money)
{
	//moneyǮ������
	int emp = 0; //��ƿ����
	int drink = 0; //������ˮ������
	while (money--) //ÿѭ��һ�Σ���һƿ��ˮ������һ��Ǯ
	{
		drink++; //������ˮ����ˮ����+1
		emp++;//ƿ������Ҳ+1
		if (emp == 2) //�����ƿ������2��
		{
			emp = 0; //��ƿ���
			drink++;//��ˮ+1 �����Դ�ʱ��ƿ�ֶ���1��
			emp++;// ���Կ���ֱ�� emp = 1 ������д�ű�����
		}
	} //ѭ�����������˶���ƿ��ˮ ����drink����
	
	return drink;

}


int fun2(int n)
{
	//�ڶ��ַ���
	// n ��ƿ����
	int a = n; //��ˮ����
	while (n>1) //������Σ����ƿ�ӿ϶���ʣ��һ�������� n =1ʱѭ������
	{
		if (n % 2 == 1)
		{
			//���ƿ���ǵ�������ô����֮���ʣ��һ���������ٻ���֮�������һ��
			a += n / 2;
			n++; //����û�л�����ƿ��
		}
		else //ƿ����ż����ֱ��/2����
			a += n / 2; 

		n /= 2;
	}
	return a;
}

//��һ�ַ�����Ҫѭ��20�Σ��ڶ��ַ��� ҲҪѭ�����Σ���ô��û�и��򵥵ķ�����
int fun3(int n)
{
	return n * 2 - 1;
} //û����ֱ�� *2-1 ���������=.=


int main()
{
	int n = 120;
	printf("��һ�ַ�������ˮ:%d\n",fun1(n));
	printf("�ڶ��ַ�������ˮ:%d\n", fun2(n));
	printf("�����ַ�������ˮ:%d\n", fun3(n));


	return 0;
}