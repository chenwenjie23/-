#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct tagList)
int n;
typedef struct Student {
	long num;
	float score;
}student;
typedef student Element;
typedef struct tagList {

	Element ele;
	struct tagList * prior;
	struct tagList * next;
}List, PList;
struct tagList*creat(void) 
{
	struct tagList* head;
	struct tagList* p1, *p2;
	n = 0;
	p1 = p2 = (struct tagList*)malloc(LEN);
	scanf("%ld,%f", &p1->ele.num, &p1->ele.score);
	head = NULL;
	while (p1->ele.num != 0)
	{
		n += 1;
		if (n == 0)
		{
			head = p1;
			p1->prior = NULL;
		}
		else
		{
			p2->next = p1;
			p1->prior = p2;
		}
		p2 = p1;
		p1 = (struct tagList*)malloc(LEN);
		scanf("%ld,%f", &p1->ele.num, &p1->ele.score);
	}
		p2->next = NULL;
		return(head);
}int main()
{
	struct tagList*pt;
	pt = creat();
	printf("%ld,%f", &pt->ele.num, &pt->ele.score);
	return 0;
};
