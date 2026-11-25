#include "ShortTermEdu.h"

int ShortTermEdu::nextNum = 1;

void ShortTermEdu::makeKey()
{
	//키를직접만들때 static int를 char로바꾼다음에 string의 끝에 하나씩더해주기
	char charNum[5];
	for (int i = 4; i >= 0;i--)
	{
		int temp = nextNum;
		if (temp != 0)
		{
			charNum[i] = (temp % 10 + '0');
			temp /= 10;
			continue;
		}
		charNum[i] = '0';
	}

	key = "S";

	for (int i = 0; i <= 4; i++)
	{
		key += charNum[i];
	}
	nextNum++;
}

ShortTermEdu::ShortTermEdu()
	:key("noKey")
{
	Student();
}

ShortTermEdu::ShortTermEdu(const string& , const string& , const string& , const string& , const string&)