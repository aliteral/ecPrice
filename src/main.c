#include <stdio.h>

// variables
float product_cost;
float dollars = 1485.00;
float markup;
float iva = 1.21;
float discount;

// function declarations
float askCost(void);
float askMarkup(void);
float askDollarValue(void);
float askDiscount(void);   
float askIva(void);

// entry point; main function
int main() 
{		
  // Check for pre-configured values
  //  and ask for new ones if needed
  askCost();
  askMarkup();
  askDollarValue();
  askDiscount();   
  askIva();
        
  // Values added, checking for calculation
	float total = product_cost * dollars * markup * iva * discount;
	printf("Total equals to $ARS%.2f\n", total);

  return 0;
}

// function definitions
float askCost(void) 
{
	if (product_cost == 0) {       
	    printf("The cost of the product has not been set.\nWhat is the cost, measured in US Dollars, for this product?\n");
	    scanf("%f", &product_cost);
	}
	printf("The cost of the product is: %.2f\n\n", product_cost);
	return 0;
}

float askMarkup(void) 
{	
	if (markup == 0) {
	    printf("The markup number for this product was not specified.\nWhat is the markup number for this product?\n");
	    scanf("%f", &markup);
	}
	printf("The markup you selected is: %.2f\n\n", markup);
	return 0;
}

float askDollarValue(void) 
{
	if (dollars == 0) {
	    printf("Exchange equivalence has not been set yet.\nWhat is the equivalence to $USDs?\n");
		scanf("%f", &dollars);
	}
	printf("Dollar value equals to $ARS%.2f\n\n", dollars);
	return 0;
}

float askDiscount(void) 
{	
	if (discount == 0) {
       	printf("Discount rate has not been set.\nWhat is the discount of the product?\n");
       	scanf("%f", &discount);
	}
	printf("Applying discount.\n\n");
    return 0;
}


float askIva(void) 
{
	if (iva == 0) {
	    printf("The value of the IVA tax was not specified before.\nWhat is the IVA value?\n");
		scanf("%f", &iva);
	} 	
	printf("IVA value equals to $ARS%.2f\n\n", iva);
	return 0;
}


// TODO:
// - Modularize
// - Write unit tests
// - Write MORE error handling functions
// - Refactor and optimize
