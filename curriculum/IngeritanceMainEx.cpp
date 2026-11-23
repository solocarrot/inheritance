#include"Student.h"
#include <fstream>
#include<assert.h>

int main(int argc, char* argv[])
{
	//if (argc < 2)
	//{
	//	cout << "file is not right";
	//	assert(false);
	//}
	ifstream instream;
	//instream.open(argv[1]);
	instream.open("text.txt");
	if (!instream.is_open())
	{
		cout << "not found file";
		assert(false);
	}
	string line;
	while (getline(instream, line))
	{
		cout << line << endl;
	}
	instream.close();
}