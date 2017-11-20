#include<stdio.h>
#include<string.h>
typedef struct person person;
typedef struct list
{
int number_of_trannie;
person *person;
}list;
typedef struct person
{
char name[20];
int age;
int height;
int weight;
char sex;
float exp;
person *next;
//struct bodypara;
}person;

/*struct bodypara{
int chest;
int biceps;
};*/

int main()
{
printf("\n**********  Welcome to the Ashutosh GYM  **********\n");
list *trannie;
int a,b;
char name[20];
float age,height;
float exp,weight;
int s;
char sex[10];
while(1)
	{	
	printf("\nChoose from the options below");
	printf("\n\t1.Add person\n");
	scanf("%d",&a);
	switch(a)
		{
	case 1:printf("\nGym trannie details");
		printf("\nEnter name-");
		scanf("%s",name);
		printf("\nEnter age-");
		scanf("%f",&age);
		printf("\nEnter height-");
		scanf("%f",&height);
		printf("\nEnter weight-");
		scanf("%f",&weight);
		printf("\nEnter 1 for male and 2 for female-");
		scanf("%d",&s);
		if(s==1)
			sex[10] = "Male";
		else if(s==2)
			sex[10] = "Female";
		else
			printf("Not Valid");
		printf("\nEnter experience");
		scanf("%f",&exp);
		createperson(name,age,height,weight,sex,exp);
		printf("\n*********Data Entry complete************\n");
		break;
	
		
		}
	}
}
void createperson(char name[20],float age,float height, float weight,char s,float exp)
{
struct person *one;
one->name[20]=name[20];
one->age=age;
one->height=height;
one->weight=weight;
one->sex=s;
one->exp=exp;
one->next=NULL;
}


void display(char name[20],list *list)
{
int i=0;
person **temp;
if(list==NULL)
     printf("\nThere are no Trannie in thr GYM\n");

  else {
             for(i=0;i<list->number_of_trannie;i++)
               {
                  if(list->person->name==name)
                     *temp=list->person;
   
               }
       } 
}

