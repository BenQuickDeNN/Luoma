/********************************************************************************
* Luoma - an Europa Universalis IV Mod Editor									*
* Copyright (C) 2019 Bin.Qu benquickdenn@foxmail.com							*
*																				*
* This file is part of the project												*
*																				*
* This program is free software; you can redistribute it and/or modify			*
*																				*
* @file		CLI_main.cpp														*
* @brief	main file for commandline.											*
* Details.																		*
* @author	Bin.Qu																*
* @email	benquickdenn@foxmail,com											*
* @version	alpha 1.0															*
* @date		2019.9.15															*
* @license	GNU Gerneral Public License (GPL)									*
********************************************************************************/

///* global include */
#include <stdio.h>

///* local include */
#include "common.h"
#include "history.h"
#include "cli.h"

///* function declaration */
void test();

///* main function */
/**
* @brief main function for CLI
* @param argc count of arguments
* @param argv value of arguments
* @return program state
*/
int main(int argc, char **argv)
{
	checkOption(argc, argv);
	return 0;
}
///* other functions */
/**
* @brief function for testing
*/
void test()
{
	map::Map myMap;
	myMap.width = 400;
	myMap.height = 300;
	printf("map.width = %d, map.height = %d\r\n", myMap.width, myMap.height);
}