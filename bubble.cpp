#include<stdlib.h>
#include <stdio.h>

/**
@brief Функция сортировки
@detailed Осуществляет сортировку массива символов методом пузырька
@params Массив символов, размер массива
*/
void bubble(char* a, int n)
{
  for (int i=n-1; i>=0; i--)
  {
    for (int j=0; j<i; j++)
    {
      if (a[j] > a[j+1])
      {
        int tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
      }
    }
  }
}