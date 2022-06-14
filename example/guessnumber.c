#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate(int x);
int check(int x);
int num; 

int main(void) {

	int _in;
	int _result;
	char name[10];
	char answer;

	printf("\nI am a simple computer.\n");
	printf("What's your name?\n");

	scanf("%s",name);

	printf("Hi,%s\n",name);
	generate(1);
	printf("Would you like guess what's my favorite number.\n");
	printf("y or n(n to quit)");

	scanf("%s", &answer);

	while ( answer == 'y' ) {
		printf("\nPlease enter which number you are thinking now:");
		printf("___\b\b\b");

		scanf("%d", &_in);
		_result = check(_in);

		if (_result == 1) {
			printf("%s, you are clever.\n", name);
			printf("The number is indeed %d\n",num);
			break;
		}
		else if (_result == 0) {
			printf("Sorry,would you like guess again?\n");
			printf("y or n(n to quit)");
			scanf("%s", &answer);
		}
	}

	if ( answer =='n') {
		printf("\nThe number is %d", num);
	}
	printf("\nThanks for talking with me.");
	
	system("pause");

	return 0;
}

int generate(int x) {
	if (x == 1) {
		srand(time(NULL));
		num = rand() % 101;
	}
}

int check(int x) {
	if (x == num) {
		return 1;
	}
	else {
		return 0;
	}
}