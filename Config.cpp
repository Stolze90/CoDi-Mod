class CfgPatches
{
    class TEST_UNITS
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {a3_characters_F, a3_characters_f_beta, a3_characters_f_gamma};
    };
};
class cfgFactionClasses
{
 class BCO_NATO //Faction Calling Name
 {
  displayName = "BCO - NATO "; //Faction name in-game
  icon = "data\Badger_icon.paa"; //Path to texture next to the faction name in editor "PBOname\filename.paa"
  priority = 1; //How far down it is on the menu
  side = 1; // 1 Blufor 2 opfor 3 independant i think.
 };
};
class CfgVehicleClasses
{
 class TEST_Units //Name of unit group e.g Air, Infantry, Armour
 {
	
	displayName = "Infantry"; //In-game name
	priority = 2; // How far down it is on the menu
 };
};
 

 
 // class CfgVehicles
	// {
    // class B_Soldier_base_F; //Blufor Soldier
		
	// class BCO_B_TeamLead: B_Soldier_base_F //Unit Class name: Class getting info from
		// { 
		// side = 1; //Blufor
		// faction = "BCO_NATO"; //Your Faction
		// backpack = "BCO_B_TeamLead_backpack_ucp"; //Backpack
		// vehicleclass = "TEST_Units"; //Unit Group
		// author = "Rasmus BCO"; 
		// _generalMacro = "BCO_TeamLead"; //Class Name
		// scope = 2;
		// displayName = "Team Lead"; //In-Game Name
		// weapons[] = {"rhs_weap_m16a4_m203_acog_usmc","Throw","Put"}; 
		// respawnWeapons[] = {"rhs_weap_m16a4_m203_acog_usmc","Throw","Put"}; 
		// magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_mk3a2","rhs_mag_mk3a2","rhs_mag_m18_green","rhs_mag_m18_green","rhs_mag_m18_green","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_m713_Red","rhs_mag_m713_Red","rhs_mag_m713_Red"};
		// respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_mk3a2","rhs_mag_mk3a2","rhs_mag_m18_green","rhs_mag_m18_green","rhs_mag_m18_green","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_m713_Red","rhs_mag_m713_Red","rhs_mag_m713_Red"};
		// cost = 300000;
		// threat[] = {1,0.7,0.3};
		// items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
		// linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_ucp","ItemMap","ItemCompass","ItemWatch","ItemGps","BCO_B_TeamLead_backpack_ucp","tf_anprc152"};
		// respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_ucp","ItemMap","ItemCompass","ItemWatch","ItemGps","BCO_B_TeamLead_backpack_ucp","tf_anprc152"};
		// model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d"; //Path to model
		// uniformClass = "rhs_uniform_cu_ucp"; //uniform you are using
		// camouflage = 1.6;
		//)hiddenSelections[] = {"camo"};
		//HiddenSelectionsTextures[] = {"TEST\data\TEST_Uniform_co.paa"};	//Uniform textures
	// };
	
	
// };




// class B_Soldier_base_F;
	
  // class BCO_B_RAT: B_Soldier_base_F //Unit Class name: Class getting info from
		// { 
		// side = 1; //Blufor
		// faction = "BCO_NATO"; //Your Faction
		// backpack = "BCO_B_TeamLead_backpack_ucp"; //Backpack
		// vehicleclass = "TEST_Units"; //Unit Group
		// author = "Rasmus BCO"; 
		// _generalMacro = "BCO_RAT"; //Class Name
		// scope = 2;
		// displayName = "Rifle RAT"; //In-Game Name
		// weapons[] = {"rhs_weap_m16a4_acog_usmc","Throw","Put"}; 
		// respawnWeapons[] = {"rhs_weap_m16a4_m203_acog_usmc","Throw","Put"}; 
		// magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_mk3a2","rhs_mag_mk3a2","rhs_mag_m18_green","rhs_mag_m18_green","rhs_mag_m18_green","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_m713_Red","rhs_mag_m713_Red","rhs_mag_m713_Red"};
		// respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_mk3a2","rhs_mag_mk3a2","rhs_mag_m18_green","rhs_mag_m18_green","rhs_mag_m18_green","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_m713_Red","rhs_mag_m713_Red","rhs_mag_m713_Red"};
		// cost = 300000;
		// threat[] = {1,0.7,0.3};
		// items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
		// linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_ucp","ItemMap","ItemCompass","ItemWatch","ItemGps","BCO_B_TeamLead_backpack_ucp","tf_anprc152"};
		// respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_ucp","ItemMap","ItemCompass","ItemWatch","ItemGps","BCO_B_TeamLead_backpack_ucp","tf_anprc152"};
		// model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d"; //Path to model
		// uniformClass = "rhs_uniform_cu_ucp"; //uniform you are using
		// camouflage = 1.6;
		//hiddenSelections[] = {"camo"};
		//HiddenSelectionsTextures[] = {"TEST\data\TEST_Uniform_co.paa"};	//Uniform textures
	
	
	// };




