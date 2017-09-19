// Author: You
// Description: paste your loadout config from the arseanal exporter
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE





// -------------------- PASTE ABOVE THIS LINE

// SAM
#define SAM "rhs_weap_fim92"
#define SAM_MAG "rhs_fim92_mag:3"
#define SAM_MAG2 "rhs_fim92_mag:2"
// Sniper Rifle
#define SNIPER "rhs_weap_m38_rail"
#define SNIPER_MAG "rhsgref_5Rnd_762x54_m38:5"
// Spotter Rifle
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
// Marksman Rifle
#define DMRIFLE "arifle_SPAR_03_blk_F"
#define DMRIFLE_MAG "20Rnd_762x51_Mag:8"
#define DMRIFLE_OPTICS "optic_Hamr","optic_MRCO","optic_Arco_blk_F",ALT_OPTICS
#define DMRIFLE_ATT "bipod_01_F_blk"
// SMG
#define SMG "SMG_01_F"
#define SMG_MAG "30Rnd_45ACP_Mag_SMG_01:6"
// Pistol
#define PISTOL "rhsusf_weap_m1911a1"
#define PISTOL_MAG "rhsusf_mag_7x45acp_MHP:4"
// Grenades
#define BASE_FRAG "rhs_mag_m67:2"
#define BASE_GRENADES BASE_FRAG,BASE_SMOKES
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,"Chemlight_blue:2"
// Gear
#define BASE_TOOLS COMMON_TOOLS
#define LEADER_TOOLS COMMON_LEADER_TOOLS,KEY_WEST
#define BASE_LINKED COMMON_LINKED
#define LEADER_LINKED COMMON_LEADER_LINKED
// Class Gear
#define BAG_MEDIC "rhs_medic_bag"
#define BAG_MEDIUM "B_Kitbag_cbr"
#define BAG_HEAVY "B_Carryall_cbr"
#define GL_VEST "V_PlateCarrierGL_mtp"
#define MEDIC_VEST "V_PlateCarrierSpec_mtp"
#define AR_VEST "V_PlateCarrierSpec_mtp"
#define LITE_VEST "V_Chestrig_rgr" // Pilot, Crew, Sniper, Spotter
#define SNIPER_UNIFORM "U_B_FullGhillie_sard"
#define PILOT_UNIFORM "U_B_HeliPilotCoveralls"
#define PILOT_HEADGEAR "H_PilotHelmetHeli_B"
#define CREW_UNIFORM "U_B_CombatUniform_mcam"
#define CREW_HEADGEAR "H_HelmetCrew_I"

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};
class supplyCrate_F {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};

class Soldier_F {// rifleman
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS};
  linkedItems[] = {BASE_LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Survivor_F: Soldier_F { // FT CLS
	backpackItems[] = {CLS_MEDICAL};
};
class Fic_Soldier_Carbine: Soldier_F {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class soldier_M_F: Soldier_F { // Marksman
  weapons[] = {DMRIFLE};
  magazines[] = {DMRIFLE_MAG,BASE_GRENADES};
  attachments[] = {DMRIFLE_ATT,DMRIFLE_OPTICS};
  opticChoices[] = {DMRIFLE_OPTICS};
};
class Soldier_GL_F: Soldier_F { // Grenadier
  // vest[] = {GL_VEST};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,BASE_GRENADES};
};
class Soldier_TL_F: Soldier_F {// FTL
  // vest[] = {GL_VEST};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS,RADIO_MR};
  linkedItems[] += {BINOS};
};
class Soldier_SL_F: Soldier_TL_F {// SL
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {BASE_LINKED,BINOS};
  items[] += {RADIO_LR};
};
class officer_F: Soldier_SL_F {// CO and DC
  items[] += {};
  linkedItems[] += {};
};
class soldier_UAV_F: Soldier_F {
  backpack[] = {"B_UAV_01_backpack_F"};
  linkedItems[] += {"B_uavterminal"};
  items[] += {RADIO_MR};
};
class Soldier_AR_F: Soldier_F {// AR
  // vest[] = {AR_VEST};
  // backpack[] = {BAG_MEDIUM};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class Soldier_AAR_F: Soldier_F {// AAR
  // backpack[] = {BAG_MEDIUM};
  backpackItems[] += {AR_MAG};
  attachments[] = {AAR_ATTACHMENTS};
  linkedItems[] += {BINOS};
};
class Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class medic_F: Fic_Soldier_Carbine {// Medic
  // vest[] = {MEDIC_VEST};
  backpack[] = {BAG_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
  items[] += {RADIO_MR};
};
class Fic_Spotter: Soldier_F {
  linkedItems[] += {RANGE_FINDER};
};
class support_MG_F: Soldier_AR_F {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
};
class Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpackItems[] += {MMG_MAG};
};
class soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR(BAG_HEAVY, SAM_MAG)
  launchers[] = {SAM};
};
class Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR(BAG_HEAVY, SAM_MAG2)
};
class support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("B_Mortar_01_weapon_F")
};
class support_AMort_F: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("B_Mortar_01_support_F")
};
class spotter_F: Fic_Spotter {// Spotter
  uniform[] = {SNIPER_UNIFORM};
  vest[] = {LITE_VEST};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
  linkedItems[] += {LEADER_LINKED};
};
class sniper_F: spotter_F {// Sniper
  uniform[] = {SNIPER_UNIFORM};
  vest[] = {LITE_VEST};
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS,"ACE_RangeCard"};
  linkedItems[] = {BASE_LINKED};
  attachments[] = {"optic_LRPS"};
};
class Helipilot_F {// Pilot
  uniform[] = {PILOT_UNIFORM};
  backpack[] = {BAG_MEDIUM};
  vest[] = {LITE_VEST};
  headgear[] = {PILOT_HEADGEAR};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {KEY_WEST,RADIO_LR};
  items[] = {BASE_MEDICAL,BASE_TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class helicrew_F: Helipilot_F {}; // Pilot
class crew_F: Fic_Soldier_Carbine {// Crew
  // uniform[] = {CREW_UNIFORM};
  backpack[] = {BAG_MEDIUM};
  headgear[] = {CREW_HEADGEAR};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {KEY_WEST,RADIO_LR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class soldier_repair_F: crew_F {// Repair Specialist
  backpack[] = {BAG_HEAVY};
  backpackItems[] = {"Toolkit",RADIO_MR,KEY_WEST};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class Fic_eng: soldier_repair_F {
  items[] += {BASE_ENG};
  backpackItems[] = {};
};
class soldier_exp_F: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
  backpackItems[] = {"Toolkit"};
};
class engineer_F: Fic_eng {// Mine Specialist
  magazines[] += {BASE_MINE};
};
class Soldier_PG_F: Fic_Soldier_Carbine { // Paratrooper - BLU&OPF ONLY!
};
class Soldier_lite_F: Fic_Soldier_Carbine { // Rifleman (lite) - Spare class
};
class Soldier_unarmed_F: Fic_Soldier_Carbine { // Rifleman (unarmed) - Spare class
};
class fallback: Soldier_F {}; // This means any faction member who doesn't match something will use this loadout
