#include <stdio.h>
#include <conio.h>
main()
{
 int manu,qty,rate,total,a,totalAmount=0;
 char addAnother;
 


do
 {
	 printf("\n\n__________MANU___________\n");
	 printf("\n1.Pizza		Price = 180rs/pcs");
	 printf("\n2.Burger 	Price = 70rs/pcs ");
	 printf("\n3.Dosa 		Price = 150rs/pcs");
	 printf("\n4.Idli 		Price = 20rs/pcs");
	 printf("\n5.Sandwich 	Price = 50rs/pcs");
	 printf("\n6.Soft Drink	Price = 30rs/pcs");
	 printf("\nPlease Enter Your Choose... : ");
 
     scanf("%d",&a); 
 
 	switch(a)
		 {
		  case 1:
		    printf("\nYou have selected Pizza.\n Enter the quantity :");
		    scanf("%d",&qty);
		    rate=180;
		    break;
		  case 2:
		    printf("\nYou have selected Burger.\n Enter the quantity :");
		    scanf("%d",&qty);
		    rate=70;
		    break;
		  case 3:
		    printf("\nYou have selected Dosa.\n Enter the quantity :");
		    scanf("%d",&qty);
		    rate=150;
		    break;
		  case 4:
		    printf("\nYou have selected Idli.\n Enter the quantity :");
		    scanf("%d",&qty);
		    rate=20;
		    break;
		  case 5:
		    printf("\nYou have selected Sandwich.\n Enter the quantity :");
		    scanf("%d",&qty);
		    rate=50;
		    break;
		  case 6:
		    printf("\nYou have selected Soft Drink.\n Enter the quantity :");
		    scanf("%d",&qty);
		    rate=30;
		    break;
		  default:
		    printf("\nSorry Unavailable...%ds",a);
		    break;
		 }
		  

			total=qty*rate;
			printf("\nAmount :%d",total);
			 
			totalAmount=totalAmount + total;
		   	printf("\nTotal amount :%d",totalAmount);
		
		
			printf("\nDo you want place more order ? Y & N: ");
			
		
			addAnother= getch();
}while(addAnother == 'y' || addAnother == 'Y');
     	
}
