#include <stdio.h>
 

struct employee{
    char    name[30];
    int     age;
    int   phonenumber;
};
 
int main()
{
    
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:");          
	gets(emp.name);
    printf("age?:");            
	scanf("%d",&emp.age);
    printf("phonenumber?:");       
	 scanf("%d",&emp.phonenumber);
     
    /*print employee details*/
    printf("\nEntered detail is: \t");
    printf("Name: %s\t"   ,emp.name);
    printf("age: %d\t"     ,emp.age);
    printf("phonenumber: %d\n",emp.phonenumber);
    return 0;
}

