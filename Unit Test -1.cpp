#include <stdio.h>
 
struct EMP
{
    char    name[80];
    int     empId;
    float   salary;
};
 
int main()
{
    struct EMP emp;
    float BS,HRA,TA,DA,PF,IT,others;
    printf("\n Enter details :\n");
    printf("\n Name : ");          
	gets(emp.name);
    printf("\n Employee ID :");            
	scanf("%d",&emp.empId);
    printf("\n Basic Salary : ");        
	scanf("%f",&BS);
    DA=0.12*BS;
	HRA=150;
	TA=120;
	others=450;
	PF=0.14*BS;
	IT=0.15*BS;
	emp.salary=BS+DA+HRA+TA+others-(PF+IT); 
    printf("\n Entered detail are : \n");
    printf("\n Name: %s"   ,emp.name);
    printf("\n Id: %d"     ,emp.empId);
    printf("\n Salary: %f",emp.salary);
    return 0;
}

