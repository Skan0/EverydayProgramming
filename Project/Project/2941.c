#include<stdio.h>

int main(void) {
	char string[100] = {0};
	gets_s(string, sizeof(string));

	int i = 0;
	int count=0;
	char croalpha[8] = { 'c=','c-','dz=','d-','lj','nj','s=','z=' };
	while (string[i]!=0){
		/*count = (string[i] == 'c') ? 
			(string[i + 1] == '=') ? 
			count++ : (string[i + 1] == '-') ?
			count++ : count : count;*/
		//c로 시작
		if (string[i] == 'c') {
			if (string[i + 1] == '=') {
				count++;
				i++;
			}
			else if (string[i + 1] == '-') {
				count++;
				i++;
			}
			else {
				count++;
			}
		}
		//d로 시작
		else if (string[i] == 'd') {
			if (string[i + 1] == 'z') {
				if (string[i + 2] == '=') {
					count++;
					i += 2;
				}
				else
					count++;
			}
			else if (string[i + 1] == '-') {
				count++;
				i++;
			}
			else
				count++;
		}
		//l로 시작
		else if (string[i] == 'l') {
			if (string[i + 1] == 'j') {
				count++;
				i++;
			}
			else
				count++;
		}
		//n으로 시작
		else if (string[i] == 'n') {
			if (string[i + 1] == 'j') {
				count++;
				i++;
			}
			else
				count++;
		}
		//s로 시작
		else if (string[i] == 's') {
			if (string[i + 1] == '=') {
				count++;
				i++;
			}
			else
				count++;
		}
		//z로 시작
		else if (string[i] == 'z') {
			if (string[i + 1] == '=') {
				count++;
				i++;
			}
			else
				count++;
		}
		//외의 경우
		else
			count++;
		i++;
	}
	printf("%d", count);
}