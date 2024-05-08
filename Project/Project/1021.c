#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
	int data;
	struct Node* prev;
	struct Node* next;
} Node;

typedef struct {
	Node* front;
	Node* rear;
} Deque;


void initDeque(Deque* deque) {
	deque->front = NULL;
	deque->rear = NULL;
}


int main(void) {
	
	int N, M, temp, count=0;
	scanf_s("%d %d", &N, &M);
	
	while (M--) {
		scanf_s("%d", &temp);
		
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
typedef struct deque
{
    int num;
    struct deque *next;
    struct deque *prev;
} deque;
deque* Init()
{
    deque *node = (deque *)malloc(sizeof(deque));
    node->next = NULL;
    node->prev = NULL;
    return node;
}
deque* bodyConnect(deque *prev, int num)
{
    deque *next = Init();
    next->num = num;
    next->prev = prev;
    prev->next = next;
    return next;
}
void push_front(deque *front, int num)
{
    deque *node = Init(), *back = front->next->prev;
    node->num = num;
    node->next = front->next;
    node->prev = back;
    front->next->prev = node;
    back->next = node;
    front->next = node;
}
int pop_front(deque *front)
{
    int T = front->next->num;
    deque *back = front->next->prev, *temp = front->next->next;
    free(front->next);
    front->next = temp;
    temp->prev = back;
    back->next = temp;
    return T;
}
void push_back(deque *front, int num)
{
    deque *node = Init(), *back = front->prev;
    node->num = num;
    node->next = front;
    node->prev = back;
    front->prev = node;
    back->next = node;
}
int pop_back(deque *front)
{
    int T = front->prev->num;
    deque *back = front->prev->prev;
    free(front->prev);
    front->prev = back;
    back->next = front;
    return T;
}
int findMin(deque *body, int target, int *front, int *back)
{
    int findFront = 0, findBack = 0;
    deque *temp = body;
    while (temp->num != target) temp = temp->next, ++findFront;
    temp = body;
    while (temp->num != target) temp = temp->prev, ++findBack;
    if (findFront >= findBack)
    {
        *front = 0, *back = 1;
        return findBack;
    }
    else
    {
        *front = 1, *back = 0;
        return findFront;
    }
}
int main()
{
    int N, M, Ms[50], returnMin, front = 0, back = 0, rotation = 0;
    deque *head = Init(), *body = head;
    scanf("%d%d", &N, &M);
    for (int i = 0; i < M; i++) scanf("%d", &Ms[i]);
    for (int i = 1; i <= N; i++) body = bodyConnect(body, i);
    body->next = head->next;
    head->next->prev = body;
    for (int i = 0; i < M; i++)
    {
        if (head->next->num != Ms[i])
        {
            returnMin = findMin(head->next, Ms[i], &front, &back);
            if (front) while (returnMin--) push_back(head->next, pop_front(head)), ++rotation;
            else if (back) while (returnMin--) push_front(head, pop_back(head->next)), ++rotation;
        }
        pop_front(head);
    }
    printf("%d", rotation);
    return 0;
}
*/