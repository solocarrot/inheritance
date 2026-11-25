#pragma once
#include "Gifted.h"
#include "LifeLong.h"
#include "ShortTermEdu.h"

class MyArrayList 
{
private:
	Student** myArrayList;
	int capacity;
	int size;
	
public:
	MyArrayList();
	~MyArrayList();

	void input(const string& line);
	void resize();
};