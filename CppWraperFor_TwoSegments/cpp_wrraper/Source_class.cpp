// This is the main DLL file.

#include "stdafx.h"
#include "header.h"

cppWrapper::minimumReturner::minimumReturner(int x1, int y1, int x2, int y2)  //Конструктор сразу находит минимальное значение по входным параметрам
{	
	if (x1>=y1) 
		{
		if(x2>=y2)
			{
			if (y1>x2) min=y1-x2;
			else if (y2>x1) min=y2-x1;
			else min=0;
			}
		else
			{
			if(y1>y2) min=y1-y2;
			else if (x2>x1) min=x2-x1;
			else min=0;
			}
		}
	else
		{
		if (x2>=y2)
			{
			if (y2>y1) min=y2-y1;
			else if (x1>x2) min=x1-x2;
			else min=0;
			}
		else
			{
			if (x2>y1) min=x2-y1;
			else if (x1>y2) min=x1-y2;
			else min=0;
			}
		}
};

int cppWrapper::minimumReturner::returner()		//Возвращаем min
{
	return min;
};