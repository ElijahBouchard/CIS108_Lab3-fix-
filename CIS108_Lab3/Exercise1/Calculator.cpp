#include "Calculator.h"
#include <cmath>

namespace Calculator
{
	double currentValue = 0.0f;
	double memoryValue = 0.0f;

	//Clears the calculator’s current value
	void clearValue()
	{
		currentValue = 0.0f;
	}

	//Adds a number to the calculator’s current value, and returns the new current value
	double addValue(double val)
	{
		currentValue += val;

		return currentValue;
	}

	//Subtracts a number from the calculator’s current value, and returns the new current value
	double subtractValue(double val)
	{
		currentValue -= val;

		return currentValue;
	}

	//Multiplies a number to the calculator’s current value, and returns the new current value
	double multiplyValue(double val)
	{
		currentValue *= val;

		return currentValue;
	}

	//Divides a number from the calculator’s current value, and returns the new current value
	double divideValue(double val)
	{
		currentValue /= val;

		return currentValue;
	}

	//Store the calculator’s current value in the memory value
	void memoryStore()
	{
		memoryValue = currentValue;
	}

	//Change the calculator’s current value to whatever is in the memory value, and returns the new current value
	double memoryRecall()
	{
		currentValue = memoryValue;

		return currentValue;
	}

	//Clear the memory value
	void memoryClear()
	{
		memoryValue = 0.0f;
	}

	//Invert the sign of the calculator’s current value, and returns the new current value
	double invert()
	{
		currentValue *= -1;

		return currentValue;
	}

	//Calculates the calculator’s current value to a specific power, and returns the new current value
	double power(double val)
	{
		currentValue = pow(currentValue, val);

		return currentValue;
	}

	//Returns current value
	double getValue()
	{
		return currentValue;
	}

	//Sets current value
	void setValue(double val)
	{
		currentValue = val;
	}
}