//#include<stdio.h>
//#include<stdlib.h>
//typedef struct {
//	int data;
//	int count;
//	struct Node* next;
//}Node;
//Node* create( int data) {
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	newNode->data = data;
//	newNode->next = NULL;
//	return newNode;
//}
//void insertNode(Node** head, int data) {
//	Node* newNode = create(data);
//	if (*head == NULL) {
//		*head = newNode;
//	}
//	else {
//		Node* temp = *head;
//		while (temp->next != NULL) {
//			temp = temp->next;
//		}
//		temp->next = newNode;
//	}
//}
//void search(Node* head, int small, int count) {
//	Node* cur = head;
//	while (cur != NULL ) {
//		if (small == cur->data) {
//			cur->count = count;
//			//�ش� ��带 �ٸ� ����Ʈ�� �ְ� �����Ѵ�.
//		}
//		cur = cur->next;
//
//	}
//}
//int main(void) {
//	Node* head = NULL;
//	Node* prev = NULL;
//	int N, count = 0;
//	
//	scanf_s("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		int temp;
//		scanf_s("%d", &temp);
//		insertNode(&head, temp);
//	}
//	
//	int small = 1000;
//	while (head->next != NULL) {// ����Ʈ���� ���� ���� �����͸� ã��
//		if (head->data < small) {
//			small = head->data;
//		}
//		head = head->next;
//	}
//	while (head->next != NULL && head->data == small) {//���� ���� �����Ϳ� ���Ѵ�.
//		head->count = count;
//		count++;
//	}
//
//	while (head->next != NULL) {
//
//	}
//}

#include<stdio.h>

int main(void) {
	int N, arr[50], cnt = 0;
	// ������ ����
	scanf_s("%d", &N);

	// ������ ������
	for (size_t i = 0; i < N; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			if (arr[i] >= arr[j] && j != i)
			{
				if (arr[i] == arr[j])
				{
					if (j < i)
						cnt++;
				}
				else
					cnt++;
			}
		}
		printf("%d ", cnt);
		cnt = 0;
	}
}