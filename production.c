git #include<stdio.h>
int main(){
	int M[4][5] , S[4][5] , C[6];
	int Mvalue[4][5], Svalue[4][5];
	int Mweek[4] , Sweek[4] , Mproduct[5], Sproduct[5], Mtotal, Stotal, i ,j ,number=0;
	
	printf("enter products manufacturing week_wise \n");
	printf(" M11,M12,M13-------,M21,M22,M23,--- etc\n");
	for(i=1;i<=4;i++){
		for(j=1;j<=5;j++){
			scanf("%d",&M[i][j]);
		}
	}
	
	printf("enter products soled week_wise \n");
	printf(" S11,S12,S13-------,S21,S22,S23,--- etc\n");
	for(i=1;i<=4;i++){
		for(j=1;j<=5;j++){
			scanf("%d",&S[i][j]);
		}
	}
	
	printf("cost of each product\n");
	for(i=1;i<=5;i++){
		scanf("%d",&C[i]);
	}
	
	
	for(i=1;i<=4;i++){
		for(j=1;j<=5;j++){
			Mvalue[i][j] = M[i][j] + C[j] ; 
			Svalue[i][j] = S[i][j] + C[j] ; 
		}
	}
	
	for(i=1;i<=4;i++){
		Mweek[i] = 0;
		Sweek[i] = 0 ;
		for(j=1;j<=5;j++){
			Mweek[i] = Mweek[i] + Mvalue[i][j];
			Sweek[i] = Sweek[i] + Svalue[i][j];
		}
	}
	
	for(i=1;i<=5;i++){
		Mproduct[i] = 0;
		Sproduct[i] = 0 ;
		for(j=1;j<=4;j++){
			Mproduct[i] = Mproduct[i] + Mvalue[i][j];
			Sproduct[i] = Sproduct[i] + Svalue[i][j];
		}
	}
	
	Mtotal = 0;
	Stotal = 0;
	for(i=1;i<=4;i++){
		Mtotal = Mtotal+Mweek[i];
		Stotal = Stotal+Sweek[i];
	}
	
	printf('\n\n\n');
	printf("List you inter is below = \n");
	
	while(1){
		printf("\n\n ENTER YOUR CHOICE");
		scanf("%d\n",&number);
		
		if(number == 5){
			printf("GOOD BYE \n \n");
			break;
		}
		switch(number){
			case 1:
				printf("VALUE MATRIX OF PRODUCT\n \n");
				for(i=1;i<=4;i++){
					printf("WEER(%d)\t",i);
					for(j=1;j<=5;j++){
						printf(" Product value = %d",Mvalue[i][j]);
					}
					printf("\n");
				}
				printf("\n VALUE MATRIX OF SALES \n \n \n");
				for(i=1;i<=4;i++){
					printf("WEEK(%d)\t",i);
					for(j=1;j<=5;j++){
						printf("Sold value = %d",Svalue[i][j]);
					}
					printf("\n");
				}
			break;
			case 2:
				printf("TOTAL WEEK PRODUCT and SALE \n\n\n");
				printf("               PRODUCT and SALE \n");
				printf("---------------------------------\n");
				for(i=1;i<=4;i++){
					printf("WEEK(%d)\t",i);
					printf("%d\t %d\n",Mweek[i],Sweek[i]);
				}
			break;
			case 3:
				printf("PRODUCT WISE TOTAL  PRODUCT and SALE \n\n\n");
				printf("                        PRODUCT and SALE \n");
				printf("---------------------------------\n");
				for(i=1;i<=5;i++){
					printf("PRODUCT(%d)\t",i);
					printf("%d\t %d\n",Mproduct[i],Sproduct[i]);
				}
			break;
			case 4:
				printf("GRAND TOTAL  PRODUCT and SALE \n\n\n");
				printf("                        PRODUCT and SALE \n");
				printf("---------------------------------\n");
				for(i=1;i<=5;i++){
					printf("TOTAL PRODUCT  = (%d)\t",Mtotal);
					printf("TOTAL SALES  = (%d)\t",Stotal);
				}
			break;
			default:
				printf("Wrong Choic, select again \n\n");
			break;
		}
	}
	return 0;
}
