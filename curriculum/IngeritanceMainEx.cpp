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

//할것 1. 학생 한종류더 만들어서 구현하고 테스트해보기 txt에 있는 값들 클래스에 맞게 잘들어가지나(?) 클래스에맞게어케넣지?
//2. cmd에서 i누르면 추가되는 것 d누르면 삭제되는것 구현하기.
//까지만 하루종일해도 충분할거같음 빠르게완성되면 3. 자동으로 key값을 만드는 함수구현하기.