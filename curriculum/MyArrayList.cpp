#include "MyArrayList.h"

MyArrayList::MyArrayList()
	:size(0), capacity(4)
{
	myArrayList = new Student*[capacity];
	for (int i = 0; i < capacity; i++)
	{
		myArrayList[i] = nullptr;
	}
}

MyArrayList::~MyArrayList()
{
	for (int i = 0; i < capacity; i++)
	{
		delete myArrayList[i];
	}
	delete[] myArrayList;
}

void MyArrayList::resize()
{
	if (size == capacity)
	{
		capacity *= 2;
		Student** temp = new Student* [capacity];
		for (int i = 0; i < size; i++)
		{
			temp[i] = myArrayList[i];
		}
		for (int i = size; i < capacity; i++)
		{
			temp[i] = nullptr;
		}
		delete[] myArrayList;
		myArrayList = temp;
	}
}

//txt의 한줄단위로 입력받아서 수업과정을 보고 학생객체를 만들어서 MyArrayList의 배열에 집어넣기
void MyArrayList::input(const string& line)
{
	//str은 처음에는 수업과정을 확인해야됨
	string arr[10];
	int arrIndex = 0;
	for (int i = 0; line.length(); i++)
	{
		if (line[i] == ' ')
		{
			arrIndex++;
			continue;
		}
		arr[arrIndex] += line[i];
	}
	if (arr[0] == "Gifted")
	{
		Student* std = new Gifted(arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7]);

	}
}