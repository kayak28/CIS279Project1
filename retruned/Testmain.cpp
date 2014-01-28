

#include "EightSideDie.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


int main()
{
	printf("Hello!\n");
	EightSideDie die1;
	printf("hi");
	//ostream beenRolled;

	for(int i = 0; i < 6; i++)
	{
		die1.roll();
		printf("current face is %d \n",die1.getCurrent());
	}
	
	die1.showRolledFaces();
	//--Reset----------------------------
	die1.reset();
	printf("After resetting\n");

//-----Roll 10 times----------------------------------------
	for(int i = 0; i < 10; i++)
	{
		printf("%d th times\n",i );
		die1.roll();
		die1.print();
	}
//-----count sides---------------------------------------------------
	for(int i = 1; i < 9; i++ )
	{
		printf("side count = %d\n",die1.getSideCount(i));
	}
//-----creates a copy of the EightSide die ----------------------------
	EightSideDie die2(die1);
	printf("Check if copied objct is idential to the other\n");
	if(die2 == die1)
	{
		printf("Idential\n");
	}
	else
	{
		printf("Not same\n");
	}
//-----roll copied objct 10 times --------------------------------------------
	for(int i = 0;  i < 10; i++)
	{
		die2.roll();
	}
	printf("After rolling copied object 10 times\n");
	die2.print();
//-----creates a copy of the EightSide die-------------------------------
	printf("Check if copied objct is idential to the other\n");
	if(die2 == die1)
	{
		printf("Idential\n");
	}
	else
	{
		printf("Not same\n");
	}	
//------Add two existed object-----------------------------------------
	EightSideDie added = EightSideDie::addAll(die1,die2);
	printf("Result object\n");
	added.print();

	// << die1;
	//die1.print();

	printf("End!\n");

	return 0;
}