#include <iostream>
#include "merge.cpp"
#include "bubble.cpp"
using namespace std;





void main()
{
	/**
	@brief инициализация массиов символов
	*/
	char mass[10];
	char massm[10];
	/**
	@brief ввод массива для сортировки пузырьком
	*/
	for(int id=0; id<10; id++)
	{
	cin>>mass[id];
	}
	/**
	@brief вызов функции сортировки пузырьком
	*/
	bubble(mass,10);
		for(int id=0; id<10; id++)
	{
	cout<<mass[id];
	}
    /**
    @brief ввод массива для сортировки слиянием
    */
for(int id=0; id<10; id++)
	{
	cin>>massm[id];
	}
    /**
	@brief вызов функции сортировки слиянием
	*/
	merge_sort(mass,0,9);
for(int id=0; id<10; id++)
	{
	cout<<massm[id];
	}

system("pause");
}