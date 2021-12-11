#include<stdio.h>
#include <string.h>
struct Student
{
	int num;
	char name[20];
	float score;
	struct Student* next;
};
int main()
{
	struct Student a, b, c, d, * head, * p;
	a.num = 202005495; strcpy_s(a.name, "wang"); a.score = 99;
	b.num = 202005496; strcpy_s(b.name, "li"); b.score = 99;
	c.num = 202005497; strcpy_s(c.name, "liu"); c.score = 99;
	d.num = 202005498; strcpy_s(d.name, "xu"); d.score = 99;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = NULL;
	p = head;
	do
	{
		printf("%ld %s%5.1f\n", p->num, p->name, p->score);
		p = p->next;
	} while (p != NULL);
	return 0;
}
