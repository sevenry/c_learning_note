#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

typedef struct node 
{ 
	char *question; 
	struct node *no; 
	struct node *yes;
} node;
//why
int yes_no(char *question)//调用该函数的时候，接收的参数是create结构体问题，答案如果是y则有返回，否则无返回。
{
	char answer[3];
	printf("%s? (y/n): ", question); 
	fgets(answer, 3, stdin);
	return answer[0] == 'y';
}

node* create(char *question)//create是一个node结构体，存储的是一个问题。
{
	node *n = malloc(sizeof(node)); 
	n->question = strdup(question); 
	n->no = NULL;
	n->yes = NULL;
	return n; 
}

void release(node *n) {
  	if (n) {
	    if (n->no)
			release(n->no); 
		if (n->yes)
			release(n->yes); 
		if (n->question)
			free(n->question); 
		free(n);
	} 
}

int main() 
{
	char question[80];
	char suspect[20];
	node *start_node = create("Does suspect have a mustache"); 
	start_node->no = create("Loretta Barnsworth"); 
	start_node->yes = create("Vinny the Spoon");

	node *current; 
	do 
	{
		current = start_node; 
		while (1) 
		{
			if (yes_no(current->question)) //这里说明yes_no有返回值，即得到的结果是y。
			{
				if (current->yes)//第一次循环如果走到这里，说明mustache回答是y，因为此时current设置了yes的值，所以if成立
				{
					//puts("ww");
					current = current->yes;
				} 
				else 
				{
					//puts("hhh");
					printf("SUSPECT IDENTIFIED\n"); 
					break;
				}
			} 
			else if (current->no) //第一次循环如果走到这里，则是mustache回答n，current设置了no的值，所以if成立。
			//其实这一段和上面的大if的结果是一样的，就是根据第一次的问题如果给出确定回答，来猜测嫌疑人是不是某人。
			//第二次提问是不是某人，无论根据第一次的结果猜的是a还是b，只要答案是n，就一定会跳过第一个if（因为yes_no的回答是n）；
				//同时跳过这个else if，因为猜测是不是某人的问题的no是空值。所以一定进入下一个else。
			{
				//puts("kue");
				current = current->no; 
			} else {
				printf("Who's the suspect? "); //所以这一段中要求给出嫌疑人信息。
				fgets(suspect, 20, stdin);
				node *yes_node = create(suspect); 
				current->yes = yes_node;
				//printf("biubiubiu%s\n",current->question );

				node *no_node = create(current->question); 
				current->no = no_node;

				printf("Give me a question that is TRUE for %s but not for %s? ", 
					suspect,current->question); 
				fgets(question, 80, stdin); 
				free(current->question);//注意，如果这里多输入几轮，会发现后面没有释放的空间会多算一个。
				//意思是，spoon名字算的是16个，但是输入的“zhang”这样的会算成7个。可能是函数调用的问题。
				current->question = strdup(question);//此处更改了current的问题。这里currents是继承第一次mustache的回答yes／no
				//后给出的进一步问题。即原来是 question1：xxx? yes/no，question2:aaa？yes／no;现在是 question1:xxx? yes/no
				//question2 : xxxx? yes/no;question3:aaa?yes/no。
				break; 
			}
		}
	} while(yes_no("Run again")); 
	release(start_node);
	return 0;
}




