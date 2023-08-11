#include <stdio.h>
#include <stdlib.h>

/***************************************************************************
This is to certify that this project is my own work, based on my personal efforts in
studying and applying the concepts learned. I have constructed the functions and
their respective algorithms and corresponding code by myself. The program was
run, tested, and debugged by my own efforts. I further certify that I have not copied
in part or whole or otherwise plagiarized the work of other students and/or persons.
Mark Isaiah I. Yumul, 12208817
***************************************************************************/

/*
Description: This program aims to take and calculate the order of a customer, with the customer having a maximum of 3 orders. 
The program con only take 1 type for the main dish, side dish, and drink. In addition, only 1 piece per type maya be ordered per order.
Programmed by: Mark Isaiah I. Yumul
Last modified: December 4, 2022
Version 1.7
Aknowledgements: stdlib.h to allow for the generation of a random integer
*/

/*
This function will display to the user the menu of the restaurant. 
*/
void displayMenu()
{
	printf("              Menu:\n");															
	printf("Item Number   =   Item Name        -    Price\n");
	printf("------------------------------------------------\n");
	printf("             Main Dishes:\n");
	printf("    1    =   Chicken           -   90.00 pesos\n");
	printf("    2    =   Pork              -   105.00 pesos\n");
	printf("    3    =   Fish              -   120.00 pesos\n");
	printf("    4    =   Beef              -   135.00 pesos\n");
	printf("------------------------------------------------\n");
	printf("             Side Dishes:\n");
	printf("    1    =   Steamed Rice      -   20.00 pesos\n");
	printf("    2    =   Shredded Corn     -   35.00 pesos\n");
	printf("    3    =   Mashed Potates    -   50.00 pesos\n");
	printf("    4    =   Steam Vegatables  -   65.00 pesos\n");
	printf("------------------------------------------------\n");
	printf("             Drinks:\n");
	printf("    1    =   Mineral Water     -   25.00 pesos\n");
	printf("    2    =   Iced Tea          -   35.00 pesos\n");
	printf("    3    =   Soda              -   45.00 pesos\n");
	printf("    4    =   Fruit Juice       -   55.00 pesos\n\n");
	printf("------------------------------------------------\n");
}

/* 
This function will contain the prices of the main dishes from the menu. 
Precondition: Number inputted is within the range of values for each main dish. 
In this case, only ranges from 1 - 4. Else, it will display invalid input. Number inputted is an integer.
@parameter int *mainDishChoice is to access the integer inputted by the user for the main dish and assign it to a price.
@return mainDishAmt which is to give a value/price to the integer inputted by the user.
*/
float mainDishAmt(int *mainDishChoice)																			
{
	float mainDishAmt;
	
	switch (*mainDishChoice)
	{
		case 1:
			mainDishAmt = 90.00;
			break;
		case 2:
			mainDishAmt = 105.00;
			break;
		case 3: 
			mainDishAmt = 120.00;
			break;
		case 4:
			mainDishAmt = 135.00;
			break;
		default:
			{
				printf("Invalid Input");
				mainDishAmt = 0.00;
			}
	}
	return mainDishAmt;
}

/* 
This function will contain the prices of the side dishes from the menu. 
Precondition: Number inputted is within the range of values for each side dish. 
In this case, only ranges from 1 - 4. Else, it will display invalid input. Number inputted is an integer.
@parameter int *sideDishChoice is to access the integer inputted by the user for the side dish and assign it to a price.
@return sideDishAmt which is to give a value/price to the integer inputted by the user.
*/
float sideDishAmt(int *sideDishChoice)																			
{
	float sideDishAmt;
	
	switch (*sideDishChoice)
	{
		case 1:
			sideDishAmt = 20.00;
			break;
		case 2:
			sideDishAmt = 35.00;
			break;
		case 3: 
			sideDishAmt = 50.00;
			break;
		case 4:
			sideDishAmt = 65.00;
			break;
		default:
			{
				printf("Invalid Input");
				sideDishAmt = 0.00;
			}
	}
	return sideDishAmt;
}

/* 
This function will contain the prices of the drinks from the menu. 
Precondition: Number inputted is within the range of values for each drink. 
In this case, only ranges from 1 - 4. Else, it will display invalid input. Number inputted is an integer.
@parameter int *drinkChoice is to access the integer inputted by the user for the drink and assign it to a price.
@return sideDishAmt which is to give a value/price to the integer inputted by the user.
*/
float drinkAmt(int *drinkChoice)																			
{
	float drinkAmt;
	
	switch (*drinkChoice)
	{
		case 1:
			drinkAmt = 25.00;
			break;
		case 2:
			drinkAmt = 35.00;
			break;
		case 3: 
			drinkAmt = 45.00;
			break;
		case 4:
			drinkAmt = 55.00;
			break;
		default:
		{
			printf("Invalid Input");
			drinkAmt = 0.00;
		}
	}
	return drinkAmt;
}

/*
This function will show the order of the main dish chosen.
Precondition: Number inputted is within the range of values for each main dish. In this case, only ranges from 1 - 4. Else, it will display invalid input.
@parameter int *mainDishChoice is to know which item the user ordered.
@parameter int *ptrOrderCorrect is to 
*/
void mainDishItem(int *mainDishChoice, int *ptrOrderCorrect)
{	
	*ptrOrderCorrect = 1;
	
	if (*mainDishChoice == 1)
	{
		printf("You ordered Chicken.\n");
	}
	else if (*mainDishChoice == 2)
	{
		printf("You ordered Pork.\n");
	}
	else if (*mainDishChoice == 3)
	{
		printf("You ordered Fish.\n");
	}
	else if (*mainDishChoice == 4)
	{
		printf("You ordered Beef.\n");
	}
	else 
	{
		printf("Invalid Input.\n");
		*ptrOrderCorrect = 0;
	}
}

/*
This function will show the order of the side dish chosen.
Precondition: Number inputted is within the range of values for each side dish. In this case, only ranges from 1 - 4. Else, it will display invalid input.
@parameter int *sideDishChoice is to know which item the user ordered.
@parameter int *ptrOrderCorrect is to 
*/
void sideDishItem(int *sideDishChoice, int *ptrOrderCorrect)
{	
	*ptrOrderCorrect = 1;
	
	if (*sideDishChoice == 1)
	{
		printf("You ordered Steamed Rice.\n");
	}
	else if (*sideDishChoice == 2)
	{
		printf("You ordered Shredded Corn.\n");
	}
	else if (*sideDishChoice == 3)
	{
		printf("You ordered Mashed Potatotes.\n");
	}
	else if (*sideDishChoice == 4)
	{
		printf("You ordered Steam Vegetables.\n");
	}
	else 
	{
		printf("Invalid Input.\n");
		*ptrOrderCorrect = 0;
	}
}

/*
This function will will show the order of the drink chosen. 
Precondition: Number inputted is within the range of values for each drink. In this case, only ranges from 1 - 4. Else, it will display invalid input.
@parameter int *drinkOrderChoice is to know which item the user ordered.
@parameter int *ptrOrderCorrect is to 
*/
void drinkOrderItem(int *drinkOrderChoice, int *ptrOrderCorrect)
{	
	*ptrOrderCorrect = 1;
	
	if (*drinkOrderChoice == 1)
	{
		printf("You ordered Mineral Water.\n");
	}
	else if (*drinkOrderChoice == 2)
	{
		printf("You ordered Iced Tea.\n");
	}
	else if (*drinkOrderChoice == 3)
	{
		printf("You ordered Soda.\n");
	}
	else if (*drinkOrderChoice == 4)
	{
		printf("You ordered Fruit Juice.\n");
	}
	else 
	{
		printf("Invalid Input.\n");
		*ptrOrderCorrect = 0;
	}
	
}

/*
This function allows the user to modify their order. This happens after the user has finished choosing a main dish, side dish, and drink.
Precondition: Character inputted is either 'Y' for yes and any other key for no.
@return isOrderModified to know if the user would like to change his/her order.
*/
int modifyOrder()
{
	int isOrderModified;
	char choice;
	
	printf("Do you wish to modify this order? Press \"Y\" for Yes and any key to proceed:\n");
	scanf(" %c", &choice);
	
	if (choice == 'Y' || choice == 'y')
	{
		isOrderModified = 1;
	}
	else 
	{
		isOrderModified = 0;
	}
	return isOrderModified;
}

/*
This function allows the user to cancel their order. This happens at the start of the next order.
Precondition: Charcter inputted has to be 'C' and any other key to skip.
@return isCancelOrder to know if the user would like to cancel the current and succeeding order (if applicable).
*/
int cancelOrder()
{
	int isCancelOrder;
	char choice;
	
	printf("Press \"C\" to cancel an order. Press any key to continue.\n");
	scanf(" %c", &choice);
	
	if (choice == 'C' || choice == 'c') //Checks if user entered "C' or 'c' and if yes, becomes true 
	{
		isCancelOrder = 1;
	}
	else 
	{
		isCancelOrder = 0;
	}
	
	return isCancelOrder;
}

/*
This function generates a random integer from 1 to 4. 
This is for the random meal set of the day. 
@return y for the random integer generated
*/
int randMeal()
{
	int y; //A random variable to name the random number generated

	y = rand() % 4 + 1; //The formula to generate a random number from 1 - 4
	
	return y;
}

/*
This function would assign the 3 random integers to *randMainDish, *randSideDish, and *randDrink respectively.
@parameter *randMainDish is assigned to the first random integer generated
@parameter *randSideDish is assigned to the second random integer generated
@parameter *randDrink is assigned to the third random integer generated
*/
void randMealSet(int *randMainDish, int *randSideDish, int *randDrink)
{
	*randMainDish = randMeal(); //Assign the first random integer generated to *randMainDish
	*randSideDish = randMeal(); //Assign the second random integer generated to *randSideDish
	*randDrink = randMeal(); //Assign the third random integer generated to *randDrink
}

/*
This function would check if the main, side, and drink inputted by the user is equal to the random numbers generated by randMeal().
@parameter randMainDish the random integer for the main dish
@parameter randSideDish the random integer for the side dish
@parameter randDrink the random integer for the drink
@parameter selectedMainChoice the main dish chosen by the user
@parameter selectedSideChoice the side dish chosen by the user
@parameter selectedDrinkChoice the drink chosen by the user
@parameter *randMealSet the variable for the random meal set
*/
void isRandMeal(int randMainDish, int randSideDish, int randDrink, int selectedMainChoice, int selectedSideChoice, int selectedDrinkChoice, int *randMealSet)
{
	if ((selectedMainChoice == randMainDish) && (selectedSideChoice == randSideDish) && (selectedDrinkChoice == randDrink)) 	//Checks if the chosen main, side, and drink 
	{																															//of the user is the same as 
		*randMealSet = 1;		//Returns 1 if true																				//the random integer generated.
	}
	else 
	{
		*randMealSet = 0; 		//Returns 0 if false
	}
}

/*
This function returns the total price of the main dish, side dish, and drink. This is for one order only.
If the order matches the random meal set of the day, get a 15% discount.
@parameter mainDish is the price of the main dish chosen by the user
@parameter sideDish is the price of the side dish chosen by the user
@parameter drinkOrder is the price of the drink chosen by the user
@parameter randMeal is the random meal set that recieves a 15% discount
@parameter *subTotalAmtDue is the is the total price for this particular order
*/
void subTotalPerOrder(float mainDish, float sideDish, float drinkOrder, int randMeal, float *subTotalAmtDue)
{
	*subTotalAmtDue = mainDish + sideDish + drinkOrder; //The formula for the subtotal 
	
	if (randMeal == 1)
	{
		*subTotalAmtDue = *subTotalAmtDue - (*subTotalAmtDue * 0.15); //The formula if the user received a disount of 15%
	}
}

/*
This function prints the total for a particular order, and applies the 15% discount if applicable.
@parameter subTotalAmtDue is the total for the main dish, side dish, and drink for this particular order.
@parameter isOrderRandomMealSet checks if isRandMeal() returns 1, and if it returns 1, it is the random meal set of the day.
*/
void displaySubTotalAmtDue(float subTotalAmtDue, int isOrderRandomMealSet)
{
	printf("Subtotal Amount Due: \t\t\t%.2f pesos\n", subTotalAmtDue);
	
	if (isOrderRandomMealSet == 1) //Checks if the order is the random meal set, and will print that the user will recieve a discount of 15%
	{
		printf("You have ordered the random meal of the day. This order will recieve a discount of 15%%.\n");
	}
}

/*
This function asks the user for the main dish the user would want.
@parameter *ptrChoice is the main dish ordered by the user, stored in a pointer variable
@parameter *mainDishValue is the price of the main dish ordered by the user
@parameter *orderCorrect checks if the order inputted by the user is final
@parameter *selectedMainChoice is the main dish chosen by the user
*/
void selectMainDish(int *ptrChoice, float *mainDishValue, int *orderCorrect, int *selectedMainChoice)
{
	*orderCorrect = 0; 
	while (*orderCorrect == 0) //Loops the main dish if the order is invalid
	{
		printf("	Main: ");
		scanf("%d", ptrChoice);
		mainDishItem(ptrChoice, orderCorrect);
	}
	*mainDishValue = mainDishAmt(ptrChoice);
	*selectedMainChoice = *ptrChoice;
}

/*
This function asks the user for the side dish the user would want.
@parameter *ptrChoice is the main dish ordered by the user, stored in a pointer variable
@parameter *sideDishValue is the price of the side dish ordered by the user
@parameter *orderCorrect checks if the order inputted by the user is final
@parameter *selectedSideChoice is the side dish chosen by the user
*/
void selectSideDish(int *ptrChoice, float *sideDishValue, int *orderCorrect, int *selectedSideChoice)
{
	*orderCorrect = 0; 
	while (*orderCorrect == 0) //Loops the side dish if order is invalid
	{
		printf("	Side: ");
		scanf("%d", ptrChoice);
		sideDishItem(ptrChoice, orderCorrect);
	}
	*sideDishValue = sideDishAmt(ptrChoice); 
	*selectedSideChoice = *ptrChoice;
}

/*
This function asks the user for the main dish the user would want.
@parameter *ptrChoice is the main dish ordered by the user, stored in a pointer variable
@parameter *drinkValue is the price of the main dish ordered by the user
@parameter *orderCorrect checks if the order inputted by the user is final
@parameter *selectedDrinkChoice is the main dish chosen by the user
*/
void selectDrink(int *ptrChoice, float *drinkValue, int *orderCorrect, int *selectedDrinkChoice)
{
	*orderCorrect = 0; 
	while (*orderCorrect == 0) //Loops the drink if drink is invalid
	{
		printf("	Drink: ");
		scanf("%d", ptrChoice);
		drinkOrderItem(ptrChoice, orderCorrect);
	}
	*drinkValue = drinkAmt(ptrChoice);
	*selectedDrinkChoice = *ptrChoice;
}

/*
This function presents the name of the main dish chosen by the user along with it's price.
@parameter selectedMainChoice is the main dish selected by the user
*/
void displayMainDish(int selectedMainChoice)
{
	if (selectedMainChoice == 1)
	{
		printf("Main:\t Chicken          \t\t 90.00 pesos\n");
	}
	else if (selectedMainChoice == 2)
	{
		printf("Main:\t Pork             \t\t 105.00 pesos\n");
	}
	else if (selectedMainChoice == 3)
	{
		printf("Main:\t Fish             \t\t 120.00 pesos\n");
	}
	else
	{
		printf("Main:\t Pork             \t\t 135.00 pesos\n"); //It is assumed 4 because any other integer not within the range of 1 - 4 is not accepted.
	} 
}

/*
This function presents the name of the side dish chosen by the user along with it's price.
@parameter selectedSideChoice is the side dish selected by the user
*/
void displaySideDish(int selectedSideChoice)
{
	if (selectedSideChoice == 1)
	{
		printf("Side:\t Steamed Rice     \t\t 20.00 pesos\n");
	}
	else if (selectedSideChoice == 2)
	{
		printf("Side:\t Shredded Corn    \t\t 35.00 pesos\n");
	}
	else if (selectedSideChoice == 3)
	{
		printf("Side:\t Mashed Potatoes  \t\t 50.00 pesos\n");
	}
	else
	{
		printf("Side:\t Steam Vegetables \t\t 65.00 pesos\n"); //It is assumed 4 because any other integer not within the range of 1 - 4 is not accepted.
	}
}

/*
This function presents the name of the drink chosen by the user along with it's price.
@parameter selectedDrinkChoice is the drink selected by the user
*/
void displayDrink(int selectedDrinkChoice)
{
	if (selectedDrinkChoice == 1)
	{
		printf("Drink:\t Mineral Water   \t\t 25.00 pesos\n");
	}
	else if (selectedDrinkChoice == 2)
	{
		printf("Drink:\t Iced Tea        \t\t 35.00 pesos\n");
	}
	else if (selectedDrinkChoice == 3)
	{
		printf("Drink:\t Soda            \t\t 45.00 pesos\n");
	}
	else
	{
		printf("Drink:\t Fruit Juice     \t\t 55.00 pesos\n"); //It is assumed 4 because any other integer not within the range of 1 - 4 is not accepted.
	}
}


int main()
{
	//Variable Declaration
	int selectedMainChoice[3], selectedSideChoice[3], selectedDrinkChoice[3];
	int randMainDish, randSideDish, randDrink;
	int i = 0;
	int orderModified, isOrderCorrect;
	int cancelOrderMain = 0;
	int *ptrSelectedChoice, selectedChoice;
	int isOrderRandomMealSet[3];
	int lastSelectedIndex;
	float totalAmtDue = 0;
	float subTotalAmtDue[3];
	float mainDish[3], sideDish[3], drinkOrder[3];
	
	//Calling this function to generate 3 random integers that range from 1 - 4, and be assigned to random main, side, and drink.
	randMealSet(&randMainDish, &randSideDish, &randDrink); 
	printf("%d %d %d\n", randMainDish, randSideDish, randDrink);

	//Calling the displayMenu function to display the menu of the restaurant
	displayMenu();
	
	ptrSelectedChoice = &selectedChoice;
	
	//The loop to allow the user to order for a maximum of 3 times
	while (i <= 2 && cancelOrderMain == 0) 
	{
		printf("Order %d:\n", i + 1);
		selectMainDish(ptrSelectedChoice, &mainDish[i], &isOrderCorrect, &selectedMainChoice[i]); //The function where user inputs main dish
		selectSideDish(ptrSelectedChoice, &sideDish[i], &isOrderCorrect, &selectedSideChoice[i]); //The function where user inputs side dish
		selectDrink(ptrSelectedChoice, &drinkOrder[i], &isOrderCorrect, &selectedDrinkChoice[i]); //The function where user inputs drink
	
		//Calling the function to check if the user ordered the random meal generated
		isRandMeal(randMainDish, randSideDish, randDrink, selectedMainChoice[i], selectedSideChoice[i], selectedDrinkChoice[i], &isOrderRandomMealSet[i]);
		subTotalPerOrder(mainDish[i], sideDish[i], drinkOrder[i], isOrderRandomMealSet[i], &subTotalAmtDue[i]);
		orderModified = modifyOrder(); 

		if (orderModified != 1) //The condition to check if the user would like to modify their order
		{
			i++;
		}
		if (i < 3 && orderModified != 1) //The condition to check if the user would like to cancel the current and succeeding order if applicable
		{
			cancelOrderMain = cancelOrder();
		}
		lastSelectedIndex = i; //The number of the current order of the user
	}
	
	for (i = 0; i < lastSelectedIndex; i++)  //This loop displays the subtotal amount dues 
	{
		printf("\nOrder %d:\n", i + 1);
		displayMainDish(selectedMainChoice[i]);
		displaySideDish(selectedSideChoice[i]);
		displayDrink(selectedDrinkChoice[i]);
		displaySubTotalAmtDue(subTotalAmtDue[i], isOrderRandomMealSet[i]);
		totalAmtDue += subTotalAmtDue[i]; //This is the formula for the total amount due
	}
	printf("\nTotal Amount Due: \t\t\t%.2f pesos\n", totalAmtDue); 
	
	return 0;
}
