/********************************************************************************
* Luoma - an Europa Universalis IV Mod Editor									*
* Copyright (C) 2019 Bin.Qu benquickdenn@foxmail.com							*
*																				*
* This file is part of the project												*
*																				*
* This program is free software; you can redistribute it and/or modify			*
*																				*
* @file		options.cxx														*
* @brief	This file helps to handle commandline option.						*
* Details.																		*
* @author	Bin.Qu																*
* @email	benquickdenn@foxmail,com											*
* @version	alpha 1.0															*
* @date		2019.9.15															*
* @license	GNU Gerneral Public License (GPL)									*
********************************************************************************/

///* include */
#include <iostream>
#include <cstring>

#include "text.h"

using namespace std;

/**
* @brief check if an input option is legal
* @param argc the count of arguments
* @param argv the value of arguments
*/
void checkOption(int argc, char **argv)
{
	if (argc < 2) return;
	int option_key = -1;
	for (int i = 0; i < MAX_NUM_OPTION; i++)
	{
		if (!strcmp(option_list[i][0].c_str(), argv[1]))
		{
			cout << outputText_list[i];
			option_key = i;
			break;
		}
	}
	if (option_key == -1) cout << outputText_list[MAX_NUM_TEXT - 1];
	return;
}
