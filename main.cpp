#include <iostream>
#include "merge.cpp"
#include "bubble.cpp"
using namespace std;





void main()
{
	/**
	@brief ������������� ������� ��������
	*/
	char mass[10];
	char massm[10];
	/**
	@brief ���� ������� ��� ���������� ���������
	*/
	for(int id=0; id<10; id++)
	{
	cin>>mass[id];
	}
	/**
	@brief ����� ������� ���������� ���������
	*/
	bubble(mass,10);
		for(int id=0; id<10; id++)
	{
	cout<<mass[id];
	}
    /**
    @brief ���� ������� ��� ���������� ��������
    */
for(int id=0; id<10; id++)
	{
	cin>>massm[id];
	}
    /**
	@brief ����� ������� ���������� ��������
	*/
	merge_sort(mass,0,9);
for(int id=0; id<10; id++)
	{
	cout<<massm[id];
	}

system("pause");
}