

#include <stdio.h>
#include<stdlib.h>

struct product{
    
    char proName[20],category[20],quantity[20],purchaseDate[20],expiryDate[20];
    int price;
    struct product *next;
};
typedef struct product pro;
int main()
{
    
    pro *p = (pro*)malloc(sizeof(pro));

    pro *head=p ;
    p->next=NULL;
  //  for(i=0;i<3;i++){
  
  
  while(1){
        char temp[20];
        int tempo;
	int switchvar;
	
	//gets(temp);

	printf("Enter 1 to add the product and \n 2 to display the products \n 3 to exit ") ;
	scanf("%d",&switchvar);
	switch(switchvar){

	    case 1:
		printf("Enter the Product Name");
		scanf("%s",temp);
	strcpy(p->proName, temp);

	//puts(p->proName);   ***********
		printf("Enter Category");
	scanf("%s",temp);
	strcpy(p->category, temp);

		printf("Enter Quantity");
	scanf("%s",temp);
	strcpy(p->quantity, temp);

		printf("Enter the Purchase date");
	scanf("%s",temp);
	strcpy(p->purchaseDate, temp);

		printf("Enter the expiry date");
	scanf("%s",temp);
	strcpy(p->expiryDate, temp);

		printf("Enter the price");
	scanf("%d",tempo);
	p->price=tempo;

	p->next = (pro*)malloc(sizeof(pro));
	p=p->next;
	//p->next=NULL ;




	 break;

	case 2:
	    while(head->next != NULL){

		puts(head->proName);
		puts(head->category);
		puts(head->quantity);
		puts(head->purchaseDate);
		puts(head->expiryDate);
		printf("%d",p->price) ;
		head=head->next;


	    }
	    break;
	 case 3:
		exit(0);
		break;
	 default:
		printf("Enter valid number");
		break;
     }


  }
  //  }

}
