#include<stdio.h>
#include<malloc.h>

main(){
	
	int n;
	
	printf("Enter the no. of employees : ");
	scanf("%d",&n);
	
	
	struct emp {
		
		char name[];
		int id;
		int salary;
		
	}*details[n];
	
	for(int i=0;i<n;i++)
	{
		
		details[i]=(struct emp *)malloc(sizeof(struct emp));
		
		printf("\nEnter details of employee no.%d below : \nName-",i+1);
		scanf("%s",&details[i]->name[20]);
	
		printf("Employee ID-");
		scanf("%d",&details[i]->id);
	
		printf("Salary-");
		scanf("%d",&details[i]->salary);
		
	}
	
	printf("Employee Details : ");
	
	for(int i=0;i<n;i++)
	{
	
		printf("\nName-%s\nID-%d\nSalary-%d",details[i]->name,details[i]->id,details[i]->salary);

	}
	return 0;
	
}
