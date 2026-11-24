#pragma once
#include "Gifted.h"
#include "LifeLong.h"

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