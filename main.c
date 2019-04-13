/**
*
* @Name : ShowAli/main.c
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-04-13
* @Released under : https://github.com/BaseMax/ShowAli//blob/master/LICENSE
* @Repository : https://github.com/BaseMax/ShowAli/
*
**/
#include <stdio.h>
#include <stdlib.h>

#define YELLOW  "\x1B[33m"

void display(int time,char character) {
	for(int index=0; index < time; index++) {
		printf("%c",character);
	}
}
void line() {
	printf("\n");
}
int main(int argc, char const *argv[]) {
	printf("%s\n", YELLOW);
	for(int index=0; index < 9; index++) {
		display(25,' ');
		display(3,'*');
		if(index > 5) {
			display(8,' ');
			if(index == 6) {
				display(6,'*');
				display(1,' ');
			}
			else {
				display(3,'*');
				display(4,' ');
			}
		}
		else {
			display(15,' ');
		}
		line();
	}
	return 0;
}
