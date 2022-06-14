#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int answer,_in;
	long double pi, a, b,_out;
	pi = 3.1415926535;
	a = pi / 180;
	b = 180 / pi;
	printf("\n欢迎使用角度制、弧度制转换工具 Alpha1.0\n");
	printf("请问您是要角->弧还是弧->角（1前者，2后者，3退出）\n");
	scanf("%d",&answer);
	if (answer == 1) {
		printf("您好，请问您要转换的角度为多少（目前仅支持整数）");
		printf(":_____°\b\b\b\b\b\b");
		scanf("%d", &_in);
		_out = a * _in;
		printf("\n%d°转换为弧度制是%erad\n", _in, _out);
	}
	else if (answer==2) {
		printf("您好，请问您要转换的弧度为多少（目前仅支持整数）");
		printf(":_____rad\b\b\b\b\b\b\b\b");
		scanf("%d", &_in);
		_out = b * _in;
		printf("\n%d°转换为角度制是%erad\n", _in, _out);
	}
	else if (answer == 3) {
		printf("再见!\n");
	}
	else {
		printf("不听话来找bug?\n");
	}
	
	system("pause");
	return 0;
}