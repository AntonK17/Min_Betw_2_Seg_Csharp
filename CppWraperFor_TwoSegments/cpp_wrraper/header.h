// cppWrapper.h

#pragma once

using namespace System;

namespace cppWrapper {

	public ref class minimumReturner		 //Класс, который будет использоваться в C# application
	{

	public:
		minimumReturner(int, int, int, int); //Конструктор
		int returner();						 //Функция возвращения минимального значения
	private:
		int min;							 //Искомый минимум расстояния
	};
}
