/*              JUMP ENGINE              */
/*---------------------------------------*/
/* Copyright (C) 2025-2026 Mykyta Polishyk */
/* This project is licensed under the MIT License. */
/* See the LICENSE file for details. */

#include "config.hpp"

ConfigureSystem *Config;

ConfigureSystem::ConfigureSystem(){
	// Initializating configs system
    ini.SetUnicode();
    SI_Error rc = ini.LoadFile("config.ini");
}

string ConfigureSystem::LoadData(string Section, string Key, string Standart){
	return ini.GetValue(Section.c_str(), Key.c_str(), Standart.c_str());
}