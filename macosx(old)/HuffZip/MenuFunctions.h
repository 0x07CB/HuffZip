/*
 *  MenuFunctions.h
 *  HuffZip
 *
 *  Created by rick sanchez on 2/12/22.
 *  Copyright 2022 __MyCompanyName__. All rights reserved.
 *
 */

#include <map>
#include <string>
int leftWeight;
int rightWeight;

//class Menu::void()
	int choiceArbitraryBitWeight(bool Left,optionReturn=false) 
	{
		if (left==false)
		{
				leftWeight=0;
				rightWeight=1;		
		}
		else {
			if (left==true)
			{
				leftWeight=1;
				rightWeight=0;
			}
		}
		if (optionReturn)
		{
			map<string,int> result;
			result["left"] = leftWeight;
			result["right"] = rightWeight;
			return result;
		}
	}