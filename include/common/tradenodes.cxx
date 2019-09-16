/********************************************************************************
* Luoma - an Europa Universalis IV Mod Editor									*
* Copyright (C) 2019 Bin.Qu benquickdenn@foxmail.com							*
*																				*
* This file is part of the project												*
*																				*
* This program is free software; you can redistribute it and/or modify			*
*																				*
* @file		tradenodes.cxx														*
* @brief	Define the tradenodes.												*
* Details.																		*
* @author	Bin.Qu																*
* @email	benquickdenn@foxmail,com											*
* @version	alpha 1.0															*
* @date		2019.9.15															*
* @license	GNU Gerneral Public License (GPL)									*
********************************************************************************/

///* include */
#include "tradenodes.h"

#include <list>

///* class */
class TradeNode
{
public:
	list<unsigned int>	members;	///< provinces id in this trade node
};