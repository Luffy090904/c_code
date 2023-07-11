#include<stdio.h>
struct driver {
	char name[20];
	char license_no[20];
	int route_no;
	int kms;
};
int main() {
	int n,i;
	struct driver d[10];
	printf("enter the number of  drivers : ");
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		printf("enter the name of driver %d : ",i+1);
		scanf("%s",&d[i].name);
	}

	return 0;
}
