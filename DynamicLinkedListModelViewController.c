//
//  DynamicLinkedListModelModelViewController.c
//  DynamicLinkedList
//
//  Created by Mewlan Musajan on 10/23/17.
//  Copyright (c) 2017 Mewlan Musajan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)

int N;
struct Student
{
	long int num;
	float score;
	struct Student *next;
};

int main(int argc, char const *argv[])					
{
	void model();
	model();
	return 0;
}

void model()
{
	struct Student *head, *ptr1, *ptr2;
	ptr1 = ptr2 = (struct Student*) malloc(LEN);
	void view(struct Student *head, struct Student *ptr1, struct Student *ptr2);
	view(head, ptr1, ptr2);
}

void view(struct Student *head, struct Student *ptr1, struct Student *ptr2)
{
	void outPutViewController(struct Student *head);
	struct Student * dynamicLinkedListAllocationController(struct Student *head, struct Student *ptr1, struct Student *ptr2);
	outPutViewController(dynamicLinkedListAllocationController(head, ptr1, ptr2));
}

void outPutViewController(struct Student *head)
{
	struct Student *ptr;
	ptr = head;
	while (ptr != NULL) {
		printf("%ld, %f\n", ptr->num, ptr->score);
		ptr = ptr->next;
	}
}

struct Student * dynamicLinkedListAllocationController(struct Student *head, struct Student *ptr1, struct Student *ptr2)
{
	scanf("%ld, %f", &ptr1->num, &ptr1->score);
	N = 0;
	head = NULL;
	while (ptr1->num != 0) {
		++N;
		if (N == 1)
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







