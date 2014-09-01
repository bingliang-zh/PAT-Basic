//#define bool int
//#define true 1
//#define false 0

#include <stdio.h>
#include <stdlib.h>
struct NODE
{
	char ch;
	struct NODE* Next;
};

struct NODE list[80];
struct NODE head;
char str_comp[80];
int str_comp_length;
bool cal_str();
bool match(struct NODE *a);

int main()
{
	head.Next=&list[0];
	for(int i=0;i!=79;i++)
	{
		list[i].Next=&list[i+1];
	}//initialize the list;

	char temp='&';
	
	for(int i=0;temp!='\n';i++)
	{
		temp=getchar();
		list[i].ch=temp;
	}//initial string

	for(int i=0,temp='&';temp!='\n';i++)
	{
		temp=getchar();
		str_comp[i]=temp;
		str_comp_length=i;
	}//compare string

	//printf("%d",str_comp_length);
	
	//for(int i=0;list[i].ch!='\n';i++)
	//{
	//	printf("%c",list[i].ch);
	//}
	
	while(!cal_str());

	for(struct NODE *temp=head.Next;temp->ch!='\n';temp=temp->Next)
	{
		printf("%c",temp->ch);
	}

	system("pause");
	return 0;
}

bool cal_str()
{
	int i=0;//É¾³ı×Ö·û´®µÄ¸öÊı
	struct NODE *a=&head;
	struct NODE *b=&head;
	for(int i=0;i!=str_comp_length;b=b->Next,i++)
	{;}

	//printf("%c",a->Next->ch);
	//printf("%c",b->ch);
	
	for(;b->ch!='\n';a=a->Next,b=b->Next)
	{
		if(match(a->Next))
		{
			a->Next=b->Next;
			return false;
		}
	}


	return true;
}

bool match(struct NODE *a)
{
	struct NODE *temp=a;
	for(int i=0;i!=str_comp_length;temp=temp->Next,i++)
	{
		if (temp->ch!=str_comp[i])
			return false;
	}
	return true;
}
