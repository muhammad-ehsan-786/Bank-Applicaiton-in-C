#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<windows.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
main()
{
		printf("\n\t\t\t\t*********************************");
	int g;
	for(g=1;g<=5;g++){
		if(g==3){
			printf("\n\t\t\t\t|\t BANK MANAGEMENT \t|\t\t");
		}else{
			printf("\n\t\t\t\t|\t\t\t\t|");
		}
	}
	printf("\n\t\t\t\t*********************************");
	printf("\n\n\n\t\t\t!!!!!!!!!! WELCOME TO BANK MANAGEMENT !!!!!!!!!!!");
	int choice,num,accountnumber,accountno;
	float withdraw,deposit,transfer,accountblanc;
	float accountbalanc = 500000;
	do
	{
	printf("\nEnter Your Account Number:\n");
	scanf("%d",&accountnumber);
	if(accountnumber==4603665)
	{
		system("cls");
		do
		{
			postive:
	printf("\t\tWelcome to Account\n");
	printf("Press 1 for Balance Check.\nPress 2 for Deposit.\nPress 3 for Withdraw.\nPress 4 for transfer to other account.\nEnter the number:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
 	printf("Your Balance Rs %.2f \n five lack rupees in your bank account\n \t THANKS FOR VISSITING.",accountbalanc);
 	printf("press 5 for going back:");
 	scanf("%d",&num);
 	break;
	 case 2: 	
	 printf(" please enter the amount Rs:");
	 scanf("%f",&deposit);
	 printf("you deposit Rs:%.2f\n",deposit);
	 accountblanc=deposit+accountbalanc;
	 printf("now %.2f rupees are in your account.\n \t THANKS FOR VISSITING.",accountblanc);
	 	printf("\npress 5 for going back:");
 	scanf("%d",&num);
	 break;
	 case 3:
	 	printf("please enter the ammount Rs:");
	 	scanf("%f",&withdraw);
	 	accountblanc=accountbalanc-withdraw;
	 	printf("you have withdraw Rs:%.2f\nnow %.2f rupees in your account. \t THANKS FOR VISSITING",withdraw,accountblanc);
	 		printf("\npress 5 for going back:");
 	scanf("%d",&num);
	 	break;
	 	case 4:
	 		printf("enter the account number for transcation:");
	 		scanf("%d",&accountno);
	 		printf("enter the amount:");
	 		scanf("%f",&transfer);
	 		if(transfer<=accountbalanc)
	 		{
	 		printf("Rs:%.2f is transfer to %d account\n",transfer,accountno);
	 		accountblanc=accountbalanc-transfer;
	 		printf("now you have Rs%.2f balance in your account",accountblanc);
	 	}
	 		else
	 		printf("please check your account balance");
	 			printf("\npress 5 for going back:");
 	scanf("%d",&num);
	 		break;
	 default:
	 	printf("you press wrong number.\n");
	 	goto postive;
}
}
while(num==5);
printf("please check the number.");
}
else
printf("pleas enter correct account number.\n");
}
	while(accountnumber!=4603665);
	getch();
	return 0;
}
