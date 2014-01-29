
//EightSideDie.cpp
#include "EightSideDie.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


EightSideDie::EightSideDie()
{
	//cout << "constractor";
	recentFace = 0;
	//counts[9];
	for(int i = 0; i < 9; i++)
	{
		counts[i] = 0;
	}
}
EightSideDie::EightSideDie(const EightSideDie& aDie)
{
	recentFace = aDie.getCurrent();
	for(int index = 0; index < 9; index++)
	{
		counts[index] = aDie.counts[index];
	}

}
void EightSideDie::roll()
{
	recentFace = rand() % 8 + 1;
	counts[recentFace]++;

	printf("Face is %d \n", recentFace);
}
int EightSideDie::getCurrent() const 
{
	return recentFace;
}
int EightSideDie::getSideCount(int num) const
{//const
	int rolledTimes = 0;
	rolledTimes = counts[num];
	return rolledTimes;
}
bool EightSideDie::validCount(int num)const
{
	bool validity = false;
	if(num < 0 and num > 9)
	{
		printf("invalid counts\n");
	}
	else
	{
		printf("valid counts\n");
		validity = true;
	}
	return validity;
}
EightSideDie EightSideDie::addAll(const EightSideDie& aDie1, const EightSideDie& aDie2)
{
	EightSideDie added;
	for(int index = 1; index <= 9; index++)
	{
		added.counts[index] = aDie1.counts[index]+aDie2.counts[index];
	}
	if(aDie1.recentFace < aDie2.recentFace)
	{
		added.recentFace = aDie2.recentFace;
	}
	else if(aDie1.recentFace > aDie2.recentFace)
	{
		added.recentFace = aDie1.recentFace;
	}
	else
	{
		added.recentFace = aDie1.recentFace;
	}
	return added;
}

int EightSideDie::largest() const
{
	int largest = 0;
	for(int index = 1; index <= 9; index++)
	{
		if(largest < counts[index])
		{
			largest = counts[index];
		}
	}
}
bool EightSideDie::operator==(const EightSideDie& obj)
{
	bool equal = false;
	if(recentFace == obj.getCurrent())
	{
		for(int i = 1; i <= 9; i++)
		{
			if(counts[i] != obj.counts[i])
			{
				return equal =false;
			}

		}

	}
	else
	{
		return equal = false;
	}
}

ostream& operator<<(ostream& out, const EightSideDie& aDie)
{
	//printf("this is operator!");
	//out << "How are you?";
	
	out << "---Eight Side Die info---\n";
	for(int index = 1; index <= 9;index++)
	{
		out << " face " << index << " th = " << aDie.counts[index] << "\n";
	}
	out << "your most recent face is " << aDie.getCurrent() << "\n";
	return out;
	
	//return out;
}
void EightSideDie::print()
{

	cout << "---Eight Side Die info---\n";
	for(int index = 1; index <= 8;index++)
	{
		cout << " face " << index << " th = " << counts[index] << "\n";
	}
	//cout  << "your most recent face is " << getCurrent() << "\n";
	printf("Your most recent face is %d\n",getCurrent());
}
void EightSideDie::reset()
{
	recentFace = 0;
	for(int i = 1; i <= 8; i++)
	{
		counts[i] = 0;
	}
}

void EightSideDie::showRolledFaces() const
{
	printf("faces that has been rolled\n");

	for(int i = 1; i < 9; i++)
	{
		if(counts[i] !=0)
		{
			cout << i << ", ";
		}
	}
	cout << "\n";
}