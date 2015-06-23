#pragma once

namespace Tolya{
	public ref class lib
	{
	public:
		/*Метод возвращает деление двух чисел
		Два входных параметра типа float
		На выходе результат деления типа float*/
		static float delenye(float a, float b){
			return a / b;
		}

		/*Метод возвращает умножение двух чисел
		Два входных параметра типа float
		На выходе результат умножения типа float*/
		static float ymnogenie(float a, float b){
			return a * b;
		}
	};

}