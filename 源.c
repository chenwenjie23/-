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
	struct tagList * next;
}List,PList;

struct tagList*creat(void) {
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
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (struct tagList*)malloc(LEN);
		scanf("%ld,%f", &p1->ele.num, &p1->ele.score);
		p2->next = NULL;
		return(head);
	}
}
//Ѱ���е�
struct tagList*findmid(struct tagList*head)
{
	//���ÿ�������ָ��
	struct tagList*p1, *p2;
	p1 = p2 = head;
	if (head != NULL)
		//һ��ָ��һ�α��������ڵ㣬һ��ָ�����һ�������������ʱ����ָ��λ�ü�Ϊ�е�
		do
		{
			p2=p1 = p1->next;
			p1 = p1->next;
		} while (p1 != NULL);
		return p2;
}
int circle(struct tagList*head)
{
	//���ÿ�������ָ��
	struct tagList*p1, *p2;
	p1 = p2 = head;
	if (head != NULL)
		while(1)
		{
			p2 = p1 = p1->next;
			p1 = p1->next;
			if (p1->next = NULL)
				return -1;
			else
				if (p1 == p2)
					return 1;
		};
}
int main()
{
	struct tagList*pt;
	pt = creat();
	printf("%ld,%f", &pt->ele.num, &pt->ele.score);
	return 0;
};