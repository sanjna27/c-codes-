int main(){
	int numofbolts;
	int numofnuts;
	int numofwashers;
	int priceofbolts;
	int priceofnuts;
	int priceofwashers;
	int totalcost;
	
	printf("Enter number of bolts:");
	scanf("%d", &numofbolts);
	printf("Enter number of nuts:");
	scanf("%d", &numofnuts);
	printf("Enter number of washers:");
	scanf("%d", &numofwashers);
	printf("check the order:");
		
	if(numofbolts <= numofnuts && numofwashers >= 2*numofbolts){
		printf("Order is okay");
	}else if(numofbolts > numofnuts ){
		printf("too few nuts");
	}else if (numofwashers < 2*numofbolts ){
		printf("too few washers");
	}		

    priceofbolts = numofbolts*5;
    priceofnuts = numofnuts*3;
    priceofwashers = numofwashers*1;
    totalcost=priceofbolts+priceofnuts+priceofwashers;
    printf("Total cost: %d",totalcost);
    
    return 0;
}