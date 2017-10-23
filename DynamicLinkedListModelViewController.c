//
//  DynamicLinkedListModelViewController.c
//  DynamicLinkedList
//
//  Created by Mewlan Musajan on 10/23/17.
//  Copyright (c) 2017 Mewlan Musajan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define LEN sizeof(struct Student)

void model();
void view(struct Student *head, struct Student *ptr1, struct Student *ptr2, struct Student *retrieve);
void outPutViewController(struct Student *head);
struct Student * dynamicLinkedListAllocationController(struct Student *ptr1, struct Student *ptr2, struct Student *head);

struct Student
{
	long num;
	float score;
	struct Student *next;
};

int n;

int main(int argc, char const *argv[])
{
	model();
	return 0;
}

void model()
{
	struct Student *head, *ptr1, *ptr2, *retrieve;
	n = 0;
	ptr1 = ptr2 = (struct Student *) malloc(LEN);
	head = NULL;
	view(head, ptr1, ptr2, retrieve);
}

void view(struct Student *head, struct Student *ptr1, struct Student *ptr2, struct Student *retrieve)
{
	outPutViewController(dynamicLinkedListAllocationController(ptr1, ptr2, head));
}

void outPutViewController(struct Student *head)
{
	struct Student *ptr;
	printf("\nNow, These %d records are:\n", n);
	ptr = head;
	if (head != NULL)
	{
		do {
			printf("%ld %5.1f\n", ptr->num, ptr->score);
			ptr = ptr->next;
		} while(ptr != NULL);
	}
}

struct Student * dynamicLinkedListAllocationController(struct Student *ptr1, struct Student *ptr2, struct Student *head)
{
	scanf("%ld, %f", &ptr1->num, &ptr1->score);
	head = NULL;
	while(ptr1->num != 0) {
		++n;
		if (n == 1)
		{
			head = ptr1;
		} else {
			ptr2->next = ptr1;
		}
		ptr2 = ptr1;
		ptr1 = (struct Student*) malloc(LEN);
		scanf("%ld, %f", &ptr1->num, &ptr1->score);
	}
	ptr2->next = NULL;
	return(head);
}




