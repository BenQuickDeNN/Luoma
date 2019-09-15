/********************************************************************************
* Luoma - an Europa Universalis IV Mod Editor									*
* Copyright (C) 2019 Bin.Qu benquickdenn@foxmail.com							*
*																				*
* This file is part of the project												*
*																				*
* This program is free software; you can redistribute it and/or modify			*
*																				*
* @file		province.cxx														*
* @brief	Define the class of province.										*
* Details.																		*
* @author	Bin.Qu																*
* @email	benquickdenn@foxmail,com											*
* @version	alpha 1.0															*
* @date		2019.9.15															*
* @license	GNU Gerneral Public License (GPL)									*
********************************************************************************/

///* include */
#include "province_history.h"

#include <string>
#include <list>

///* class */
/**
* @brief define province event
*/
class ProvinceEvent
{
public:
	string	name;		///< the name of event
	int		duration;	///< the duration of event
};
/**
* @brief Province History
* Storing history record of a province
*/
class ProvinceHistory
{
public:
	/* variables */
	unsigned int		prov_id;				///< province id
	string				date;					///< date of history record
	string				name;					///< province name
	string				captital_name;			///< capital name of this province
	string				owner;					///< the owner of province
	string				controller;				///< the controller of province
	list<string>		corers;					///< the corers of province
	list<ProvinceEvent>	province_events;		///< the events of province
	unsigned short		base_tax = 1;			///< tax value
	unsigned short		base_production = 1;	///< production value
	unsigned short		base_manpower = 1;		///< manpower value
	unsigned short		trade_center_level = 0;	///< the level of trade center; default is 0 (none)
};