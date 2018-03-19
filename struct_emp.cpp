#include<stdio.h>
#include<malloc.h>

main(){
	
	struct emp {
		
		char name[];
		int id;
		int salary;
		
	}*details;
	
	details=(struct emp *)malloc(sizeof(struct emp));
	
	printf("Enter employee details below : \nName-");
	scanf("%s",&details->name[20]);
	
	printf("Employee ID-");
	scanf("%d",&details->id);
	
	printf("Salary-");
	scanf("%d",&details->salary);
	
	printf("Employee Details : ");
	
	printf("\nName-%s\nID-%d\nSalary-%d",details->name,details->id,details->salary);
	
	return 0;
	
}
