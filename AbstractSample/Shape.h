#pragma once
class Shape
{
public:
	virtual int CaclArea() = 0; // Virtual Fucntion does not do anything, we will implement it later in derived classes https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/
	void setSideA(int);
	void setSideB(int);
protected:
	int SideA, SideB;
};

