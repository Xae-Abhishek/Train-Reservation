#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// global declaration 
char string[100];


// structure of node

struct node
{
	// train information

	char trainname[100];
	char boarding[100];
	char destination[100];
	long long int trainnumber;

	// if seat is booked
	int seatnumber;
	char passengername[100];
	

	// booking==1 means seat is reserved else not reserved
	int booking;
	
	struct node *next;
	
}*train1='\0',*train2='\0',*train3='\0';

// train 1-2-3 [head] pointers represent different trains


// functions
void reservation();
void cancellation();
void inquiry();

void main()
{
	
	int choice;
	
	for(;;)
	{
		system("cls");
		printf("\n\n\t enter 1 for seat reservation");
		printf("\n\n\t enter 2 for cancelling your reservation");
		printf("\n\n\t enter 3 to check availability in train");
		printf("\n\n\t enter 4 to exit the program");
		printf("\n\n\t choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
					reservation();
					break;

			case 2:
					cancellation();
					break;
			
			case 3:
					inquiry();
					break;

			case 4:
					break;

			default:
					
					printf("\n\n\t enter from given choices only");

		}

		if(choice==4)
		{
			// exiting the program
			system("cls");
			
			printf("\n\n\t Closing The Program");
			printf("\n\n\t Have A Good Day Bye");
			
			break;
		}
		
	}

}

void reservation()
{
	system("cls");
	int choice2;
	struct node *temp,*temp1,*temp2,*temp3;
	
	// deatis of train 1 
	printf("\n\n\t Train Name : Jaisalmer express");
	printf("\n\n\t Train number : 122990");
	printf("\n\n\t from : Kolkata");
	printf("\n\n\t To : Jaisalmer");
	printf("\n\n\t Price : 1200");


	// deatis of train 2 
	printf("\n\n\n\n\t Train Name : Mumbai Intercity Express");
	printf("\n\n\t Train number : 133890");
	printf("\n\n\t from : Mumbai");
	printf("\n\n\t To : Delhi");
	printf("\n\n\t Price : 850");

	// deatis of train 3 
	printf("\n\n\n\n\t Train Name : shrinagar express");
	printf("\n\n\t Train number : 182456");
	printf("\n\n\t from : Punjab");
	printf("\n\n\t To : Shrinagar");
	printf("\n\n\t Price : 1456");

	printf("\n\n\n\n\t Train number you want to book : ");
	scanf("%d",&choice2);
	switch(choice2)
	{
		case 122990:
					printf("");
					int count=0;	
			
					if(train1=='\0')
					{
						
						
					
							
							
							train1=(struct node *)malloc(sizeof(struct node));
							
							printf("\n\n\t enter the Passenger name : ");
							fflush(stdin);
							gets(train1->passengername);
							
							
							strcpy(train1->trainname,"Jaisalmer express");
							strcpy(train1->boarding,"kolkata");
							strcpy(train1->destination,"Jaisalmer");
							train1->trainnumber=122990;
							train1->seatnumber=1;
							train1->booking=1;
							train1->next='\0';
							
							
							temp2=train1;
							count=1;
					}
					else
					{
						
							temp=train1;
							
							for(;temp->next!='\0';)
							{
								temp=temp->next;
								
							}
						
							if(temp->seatnumber<200)
							{
								
								temp2=(struct node *)malloc(sizeof(struct node));
						
							printf("\n\n\t enter the Passenger name : ");
							fflush(stdin);
							gets(temp2->passengername);
							
							strcpy(temp2->trainname,"Jaisalmer express");
							strcpy(temp2->boarding,"kolkata");
							strcpy(temp2->destination,"Jaisalmer");
							temp2->trainnumber=122990;
							
							temp2->seatnumber=temp->seatnumber+1;
							temp2->booking=1;
							temp2->next='\0';
							
							temp->next=temp2;
							count=1;
							}
							else
							{
								printf("\n\n\t ALL SEATES ARE ALREDY RESERVED");
								printf("\n\n\t press enter to continue");
								fflush(stdin);
								gets(string);
								
							}		
						
					}
					
					if(count==1)
					{
						
							
							system("cls");
							
							printf("\n\n\t YOUR RECEIPT FOR RESERVATION");
							
							printf("\n\n\t Train Name : ");
							puts(temp2->trainname);
							printf("\n\t Train Number : %lld",temp2->trainnumber);
							
							printf("\n\n\t Boarding : %s",temp2->boarding);
							printf("\n\n\t Destination : %s",temp2->destination);
							
							printf("\n\n\t Passenger Name : ");
							puts(temp2->passengername);
							
							printf("\n\t Seat Number : %d",temp2->seatnumber);;
							
							printf("\n\n\t press enter to continue");
							fflush(stdin);
							gets(string);
					}
					
			
					break;
		case 133890:
			
					printf("");
					int count3=0;	
			
					if(train2=='\0')
					{
						
						
					
							
							
							train2=(struct node *)malloc(sizeof(struct node));
							
							printf("\n\n\t enter the Passenger name : ");
							fflush(stdin);
							gets(train2->passengername);
							
							
							strcpy(train2->trainname,"Mumbai Intercity Express");
							strcpy(train2->boarding,"Mumbai");
							strcpy(train2->destination,"Delhi");
							train2->trainnumber=133890;
							train2->seatnumber=1;
							train2->booking=1;
							train2->next='\0';
							
							
							temp2=train2;
							count3=1;
					}
					else
					{
						
							temp=train2;
							
							for(;temp->next!='\0';)
							{
								temp=temp->next;
								
							}
						
							if(temp->seatnumber<200)
							{
								
								temp2=(struct node *)malloc(sizeof(struct node));
						
							printf("\n\n\t enter the Passenger name : ");
							fflush(stdin);
							gets(temp2->passengername);
							
							strcpy(temp2->trainname,"Mumbai Intercity express");
							strcpy(temp2->boarding,"Mumbai");
							strcpy(temp2->destination,"Delhi");
							temp2->trainnumber=133890;
							
							temp2->seatnumber=temp->seatnumber+1;
							temp2->booking=1;
							temp2->next='\0';
							
							temp->next=temp2;
							count3=1;
							}
							else
							{
								printf("\n\n\t ALL SEATES ARE ALREDY RESERVED");
								printf("\n\n\t press enter to continue");
								fflush(stdin);
								gets(string);
								
							}		
						
					}
					
					if(count3==1)
					{
						
							
							system("cls");
							
							printf("\n\n\t YOUR RECEIPT FOR RESERVATION");
							
							printf("\n\n\t Train Name : ");
							puts(temp2->trainname);
							printf("\n\t Train Number : %lld",temp2->trainnumber);
							
							printf("\n\n\t Boarding : %s",temp2->boarding);
							printf("\n\n\t Destination : %s",temp2->destination);
							
							printf("\n\n\t Passenger Name : ");
							puts(temp2->passengername);
							
							printf("\n\t Seat Number : %d",temp2->seatnumber);;
							
							printf("\n\n\t press enter to continue");
							fflush(stdin);
							gets(string);
					}
					
			
					break;
		case 182456:
					printf("");
					int count2=0;	
			
					if(train3=='\0')
					{
						
						
					
							
							
							train3=(struct node *)malloc(sizeof(struct node));
							
							printf("\n\n\t enter the Passenger name : ");
							fflush(stdin);
							gets(train3->passengername);
							
							
							strcpy(train3->trainname,"Mumbai Intercity Express");
							strcpy(train3->boarding,"Mumbai");
							strcpy(train3->destination,"Delhi");
							train3->trainnumber=182456;
							train3->seatnumber=1;
							train3->booking=1;
							train3->next='\0';
							
							
							temp2=train3;
							count2=1;
					}
					else
					{
						
							temp=train3;
							
							for(;temp->next!='\0';)
							{
								temp=temp->next;
								
							}
						
							if(temp->seatnumber<200)
							{
								
								temp2=(struct node *)malloc(sizeof(struct node));
						
							printf("\n\n\t enter the Passenger name : ");
							fflush(stdin);
							gets(temp2->passengername);
							
							strcpy(temp2->trainname,"Mumbai Intercity express");
							strcpy(temp2->boarding,"Mumbai");
							strcpy(temp2->destination,"Delhi");
							temp2->trainnumber=182456;
							
							temp2->seatnumber=temp->seatnumber+1;
							temp2->booking=1;
							temp2->next='\0';
							
							temp->next=temp2;
							count2=1;
							}
							else
							{
								printf("\n\n\t ALL SEATES ARE ALREDY RESERVED");
								printf("\n\n\t press enter to continue");
								fflush(stdin);
								gets(string);
								
							}		
						
					}
					
					if(count2==1)
					{
						
							
							system("cls");
							
							printf("\n\n\t YOUR RECEIPT FOR RESERVATION");
							
							printf("\n\n\t Train Name : ");
							puts(temp2->trainname);
							printf("\n\t Train Number : %lld",temp2->trainnumber);
							
							printf("\n\n\t Boarding : %s",temp2->boarding);
							printf("\n\n\t Destination : %s",temp2->destination);
							
							printf("\n\n\t Passenger Name : ");
							puts(temp2->passengername);
							
							printf("\n\t Seat Number : %d",temp2->seatnumber);;
							
							printf("\n\n\t press enter to continue");
							fflush(stdin);
							gets(string);
					}
					
			
					break;
					
			default:
					 system("cls");
					 printf("\n\n\t Incorrect Train Number");
					 printf("\n\n\t press enter to continue");
					 fflush(stdin);
					 gets(string);
	}
	
	
	
}

void cancellation()
{
	system("cls");
	int choice;
	
	printf("\n\n\t CANCELLATION SECTION");
	
	printf("\n\n\t 1 for Jaisalmer Express");
	printf("\n\n\t 2 for Mumbai intercity Express");
	printf("\n\n\t 3 for Shrinagar Express");
	printf("\n\n\t Choice : ");
	
	scanf("%d",&choice);
	
	int seatno;
	struct node *temp;
	int count;
	switch(choice)
	{
		case 1:
				
			    printf("\n\n\t enter your seat number : ");
			    scanf("%d",&seatno);
			    
			  	temp=train1;
			    count=0;
			    
			    for(;temp!='\0';)
			    {
			    	
			    	if(temp->seatnumber==seatno)
			    	{
			    		count=1;

			    		temp->booking=0;
			    		break;
					}
					
					temp=temp->next;
				}
			    
			    if(count==1)
			    {
			    	printf("\n\n\t Reservation Cancelled");
				}
				else
				{
					printf("\n\n\t Seat Number is wrong OR seat was never reserved");
					
				}
			     
				 printf("\n\n\t press enter to continue");
				 fflush(stdin);
				 gets(string);
				break;
		case 2:
			
				printf("\n\n\t enter your seat number : ");
			    scanf("%d",&seatno);
			    
			  	temp=train2;
			    count=0;
			    
			    for(;temp!='\0';)
			    {
			    	
			    	if(temp->seatnumber==seatno)
			    	{
			    		count=1;

			    		temp->booking=0;
			    		break;
					}
					
					temp=temp->next;
				}
			    
			    if(count==1)
			    {
			    	printf("\n\n\t Reservation Cancelled");
				}
				else
				{
					printf("\n\n\t Seat Number is wrong OR seat was never reserved");
					
				}
			     
				 printf("\n\n\t press enter to continue");
				 fflush(stdin);
				 gets(string);
				break;
		case 3:
				printf("\n\n\t enter your seat number : ");
			    scanf("%d",&seatno);
			    
			  	temp=train2;
			    count=0;
			    
			    for(;temp!='\0';)
			    {
			    	
			    	if(temp->seatnumber==seatno)
			    	{
			    		count=1;

			    		temp->booking=0;
			    		break;
					}
					
					temp=temp->next;
				}
			    
			    if(count==1)
			    {
			    	printf("\n\n\t Reservation Cancelled");
				}
				else
				{
					printf("\n\n\t Seat Number is wrong OR seat was never reserved");
					
				}
			     
				 printf("\n\n\t press enter to continue");
				 fflush(stdin);
				 gets(string);
				break;
		default: 
				 system("cls");
				 printf("\n\n\t enter from given choices only");
				 printf("\n\n\t press enter to continue");
				 fflush(stdin);
				 gets(string);
	}

}

void inquiry()
{
	system("cls");
	int choice;
	
	printf("\n\n\t INQUIRY SECTION");
	
	printf("\n\n\t 1 for Jaisalmer Express");
	printf("\n\n\t 2 for Mumbai intercity Express");
	printf("\n\n\t 3 for Shrinagar Express");
	printf("\n\n\t Choice : ");
	
	scanf("%d",&choice);
	
	struct node *temp;
	int count;
	system("cls");
	
	switch(choice)
	{
		case 1:
				printf("\n\n\t Train Name : Jaisalmer Express");
				printf("\n\n\t Train Number  : 122990");
				
				temp=train1;
				
				for(;temp!='\0';)
				{
					count++;
					temp=temp->next;
				}
				
				printf("\n\n\t Reserved Seats : %d",count);
				printf("\n\n\t Not Reserved : %d",200-count);
				printf("\n\n\t press enter to continue");
				fflush(stdin);
				gets(string);
				
				break;
		case 2:
				printf("\n\n\t Train Name : Mumbai Intercity Express");
				printf("\n\n\t Train Number  : 133890");
				temp=train2;
				
				for(;temp!='\0';)
				{
					count++;
					temp=temp->next;
				}
				
				printf("\n\n\t Reserved Seats : %d",count);
				printf("\n\n\t Not Reserved : %d",200-count);
				printf("\n\n\t press enter to continue");
				fflush(stdin);
				gets(string);
				
				break;
				
		case 3:
			
				printf("\n\n\t Train Name : Shrinager Express");
				printf("\n\n\t Train Number  : 182456");
				temp=train3;
				
				for(;temp!='\0';)
				{
					count++;
					temp=temp->next;
				}
				
				printf("\n\n\t Reserved Seats : %d",count);
				printf("\n\n\t Not Reserved : %d",200-count);
				printf("\n\n\t press enter to continue");
				fflush(stdin);
				gets(string);
				
				break;
		default:
				printf("\n\n\t enter from given choices only");
				printf("\n\n\t press enter to continue");
				fflush(stdin);
				gets(string);
				
	}
}

