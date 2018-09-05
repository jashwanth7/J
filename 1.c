#include<stdio.h>
void DonorDetails();
void DonorsList();
void About();
void Exit();
int a[100],age[100],address[100],email[100],mobile[100],bg[100],gender[100];
int i=0;
int main()
{
    int c;
    printf("Welcome To Blood Bank\n ");
    printf("\n)");
    printf("1.Donor Detais\n 2.Donors List\n 3.About\n 4.Exit\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:if(c==1)
           DonorDetails();
           break;
    case 2:if(c==2)
    	   DonorsList();
           break;
    case 3:if(c==3)
    	   About();
           break;
    case 4:if(c==4)
    	   Exit();
           break;
    case 5:if(c>4)
    	   printf("Page Unavailable\n");
           break;
    }
}

void DonorDetails()
{
	printf("ID:");
	printf("%d\n",i);
	    printf("Donor Name: ");
	    scanf("%d\n",&a[i]);
	    printf("Age : ");
	    scanf("%d\n",&age[i]);
	    printf("Address:");
	    scanf("%d\n",&address[i]);
	    printf("Email-Id:");
	    scanf("%d\n",&email[i]);
	    printf("Mobile:");
	    scanf("%d\n",&mobile[i]);
	    printf("Blood Group:");
	    scanf("%d\n",&bg[i]);
	    printf("Gender:");
	    scanf("%d\n",&gender[i]);
	    i++;
}

void DonorsList()
{
	printf("Details of %d\n",a[i]);
	printf("Donor Name\t AGE\t Address\t Email\t Mobile\tBlood Group \t Gender\n");
	printf("a[i]/t /t ,age[i]/t /t,adress[i]/t /t,email[i]/t /t,mobile[i]/t /t,bg[i]/t /t,,gender[i]\n");
}

void About()
{
	printf("About Organisation");

}
void Exit()
{
	printf("Thank You For Visiting\n");
}
