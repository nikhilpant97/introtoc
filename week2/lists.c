#include<stdio.h>
#include<stdlib.h>

struct node {
	int salary;
	int phone[8];
	char name[50];
	struct node *next;
};

void print_list(struct node *n)
{
	while(n != NULL) {
	int i;
	printf("name: ");
	for(i = 0; i < 50; i++)
		printf(" %c", n->name[i]);
	printf("\nphone: ");
	for(i = 0; i < 8; i++);
		printf("%c", n->phone[i]);
	printf("\nsalary", n->salary);
	n = n->next;
	}
}


struct node *create_node(char n[50],int p[8],int s, struct node *next)
{


	struct node *new_node;

	new_node = (struct node *) malloc(1 * sizeof(struct node));
	new_node -> name[50] 	= n[50];
	new_node -> phone[8]	= p[8];
	new_node -> salary	= s;
		return new_node;
}

struct node *add_to_front(struct node *new_node, struct node *list)
{
	new_node->next = list;

	list = new_node;

}


int main(int argc, const char *argv[])
{
	struct node *list_start = NULL;
	int e, n, p, s;
	printf("enter 1 to add employee or 0 to view list\n");
	scanf("%d", &e);
	if (e == 1){
		int t;
		int i;
		char n[50];
		char p[8];
		printf("if first employee press 1 else enter int\n");
		scanf("%d", &t);
		if (t == 1) {

			printf("enter name\n");
			for (i = 0; i < 50; i++){
				char l;
				printf("enter letter\n");
				scanf("%c", &l);
				n[i] = l;
			} 
			printf("enter phone\n");
			for (i = 0; i < 50; i++){
				int l;	
				printf("enter number\n");
				scanf("%d", &l);
				p[i] = l;
			}
			printf("enter salary\n");
			scanf("%d", &s);
			list_start = create_node(n, p, s, NULL);
		}
		else {
			printf("enter name\n");
			for (i = 0; i < 50; i++){
				char l;
				printf("enter letter\n");
				scanf("%c", &l);
				n[i] = l;
			} 
			printf("enter phone\n");
			for (i = 0; i < 50; i++){
				int l;	
				printf("enter number\n");
				scanf("%d", &l);
				p[i] = l;
			}
			printf("enter salary\n");
			scanf("%d", &s);
			list_start = add_to_front(list_start, create_node(n, p, s, NULL));
						  }
			}
						  else
						  print_list(list_start);
						  return 0;
						  }
