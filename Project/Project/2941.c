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
		//c�� ����
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
		//d�� ����
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
		//l�� ����
		else if (string[i] == 'l') {
			if (string[i + 1] == 'j') {
				count++;
				i++;
			}
			else
				count++;
		}
		//n���� ����
		else if (string[i] == 'n') {
			if (string[i + 1] == 'j') {
				count++;
				i++;
			}
			else
				count++;
		}
		//s�� ����
		else if (string[i] == 's') {
			if (string[i + 1] == '=') {
				count++;
				i++;
			}
			else
				count++;
		}
		//z�� ����
		else if (string[i] == 'z') {
			if (string[i + 1] == '=') {
				count++;
				i++;
			}
			else
				count++;
		}
		//���� ���
		else
			count++;
		i++;
	}
	printf("%d", count);
}