// cppWrapper.h

#pragma once

using namespace System;

namespace cppWrapper {

	public ref class minimumReturner		 //�����, ������� ����� �������������� � C# application
	{

	public:
		minimumReturner(int, int, int, int); //�����������
		int returner();						 //������� ����������� ������������ ��������
	private:
		int min;							 //������� ������� ����������
	};
}
