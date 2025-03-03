//to take marks and print the highest
#include<stdio.h>
struct student{
	int id;
	char name[20];
	int marks;
};
int main(){
	struct student a[48];
	int n=0,i=0,gt=0,lw=99999;
	printf("\nenter how many students you want to take data of: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the id of student %d: ",i+1);
		scanf("%d",&a[i].id);
		fflush(stdin);
		printf("\nEnter the name of student %d: ",i+1);
		gets(a[i].name);
		printf("\nEnter the total marks of student %d: ",i+1);
		scanf("%d",&a[i].marks);
    }
    for(i=0;i<n;i++){
    	if(a[i].marks>gt){
    		gt=a[i].marks;
		}
		if(a[i].marks<gt){
    		lw=a[i].marks;
		}
	}
	printf("\n\nthe highest marks of the student is: ");
	for(i=0;i<n;i++){
    	if(a[i].marks==gt){
    		printf("\n Id number: %d",a[i].id);
    		printf("\n Name of student: %s",a[i].name);
    		printf("\n Total marks of student: %d",a[i].marks);
		}
	}
	printf("\n\nThe lowest marks of student is: ");
	for(i=0;i<n;i++){
		if(a[i].marks==lw){
    		printf("\n Id number: %d",a[i].id);
    		printf("\n Name of student: %s",a[i].name);
    		printf("\n Total marks of student: %d",a[i].marks);
		}
	}
	return 0;
}