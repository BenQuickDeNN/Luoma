/********************************************************************************
* Luoma - an Europa Universalis IV Mod Editor									*
* Copyright (C) 2019 Bin.Qu benquickdenn@foxmail.com							*
*																				*
* This file is part of the project												*
*																				*
* This program is free software; you can redistribute it and/or modify			*
*																				*
* @file		province_map.cxx													*
* @brief	Define the map info of province.									*
* Details.																		*
* @author	Bin.Qu																*
* @email	benquickdenn@foxmail,com											*
* @version	alpha 1.0															*
* @date		2019.9.15															*
* @license	GNU Gerneral Public License (GPL)									*
********************************************************************************/

///* include */
//#include "province_map.h"
//#include "../../history/province_history.h"

#include <string>
#include <list>

using namespace std;

///* class */
/**
* @brief help process default.txt file
*/
class Map
{
public:
	unsigned int		width;			///< the width of the map
	unsigned int 		height;			///< the height of the map
	unsigned int		max_province;	///< the maximum number of provinces
	list<unsigned int> 	sea_provinces;	///< sea provinces id
	list<unsigned int>	lake_provinces;	///< lake provinces id
	
};
/**
* @brief definition of a province
* identifying a province
*/
class ProvinceDef
{
public:
	unsigned int			prov_id;	///< province id
	unsigned short			red;		///< red value
	unsigned short			green;		///< green value
	unsigned short			blue;		///< blue value
	string					remark;		///< remark info
	//list<ProvinceHistory>	histories;	///< province histories
};
/**
* @brief area definition
*/
class Area
{
public:
	string				name;		///< the name of area
	list<unsigned int>	provinces;	///< contained provinces id
};
/**
* @brief continent definition
*/
class Continent
{
public:
	string				name;		///< the name of continent
	list<unsigned int>	provinces;	///< contained provinces id
};
/**
* @brief climate definition
*/
class Climate
{
public:
	string				name;		///< climate name
	list<unsigned int>	provinces;	///< contained provinces id
};
/**
* @brief terrain definition
*/
class Terrain
{
	string				name;			///< the name of terrain
	list<unsigned int>	terr_override;	///< contained provinces id
};
/**
* @brief location definition
*/
class Location
{
public:
	float	x;
	float	y;
};
/**
* @brief location of province
*/
class ProvLocation
{
public:
	Location	city_loc;			///< location of city
	Location	port_loc;			///< location of port
	Location	unit_loc;			///< location of unit
	Location	unit_combat_loc;	///< location of unit combat
	Location	traderoute_loc;		///< location of traderoute
	Location	tradewind_loc;		///< location of tradewind
	Location	text_loc;			///< location of text
};
/**
* @brief rotation of province
*/
class ProvRotation
{
public:
	float	city_rot;			///< rotation of city
	float	port_loc;			///< rotation of port
	float	unit_rot;			///< rotation of unit
	float	unit_combat_rot;	///< rotation of unit combat
	float	traderoute_rot;		///< rotation of traderoute
	float	tradewind_rot;		///< rotation of tradewind
	float	text_rot;			///< rotation of text
};
/**
* @brief height of province
*/
class ProvHeight
{
public:
	float	city_hgh;			///< height of city
	float	port_hgh;			///< height of port
	float	unit_hgh;			///< height of unit
	float	unit_combat_hgh;	///< height of unit combat
	float	traderoute_hgh;		///< height of traderoute
	float 	tradewind_hgh;		///< height of tradewind
	float	text_hgh;			///< height	of text
};
/**
* @brief position definition
*/
class Position
{
public:
	unsigned int	prov_id;	///< province id
	ProvLocation	location;	///< location
	ProvRotation	rotation;	///< rotation
	ProvHeight		height;		///< height
};