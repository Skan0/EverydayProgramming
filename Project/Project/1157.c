#include<stdio.h>
#include<string.h>


int main() {
	char words[100000] = { 0 };
	int wordcount[26] = { 0 };

	int i=0, big = 0;
	char result;

	gets_s(words, sizeof(words));
	int size = strlen(words);


	for ( i = 0; i < size; i++)
	{
		if (words[i] >= 'a')
			wordcount[words[i] - 'a']++;
		else
			wordcount[words[i] - 'A']++;
	}
	for ( i = 0; i < 26; i++)
	{
		if (wordcount[i] == big) {
			result = '?';
		}
		else if (wordcount[i] > big) {
			big = wordcount[i];
			result = 'A' + i;
		}
	}
	printf("%c", result);
	return 0;
}
//#include <stdio.h>
//#include <string.h>
//
//char a[1000005];
//int arr[26];
//
//int main() {
//	int max = 0;
//	int size;
//	char ans;
//
//	scanf("%s", a);
//	size = strlen(a);
//
//	for (int i = 0; i < size; i++)
//		if (a[i] >= 'a') arr[a[i] - 'a']++;
//		else arr[a[i] - 'A']++;
//
//	for (int i = 0; i < 26; i++)
//		if (arr[i] == max) {
//			ans = '?';
//		}
//		else if (arr[i] > max) {
//			max = arr[i];
//			ans = 'A' + i;
//		}
//
//	printf("%c", ans);
//
//	return 0;
//}