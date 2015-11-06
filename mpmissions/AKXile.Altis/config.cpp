/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */


class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 20000;

	/*
		A list of all characters allowed in a clan *name*
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 -!";
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = "";
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
};

class CfgCraftingRecipes
{

class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatfood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_Catfood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Catfood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_Catfood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] =
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] =
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] =
	{
		{2, "Exile_Item_JunkMetal"}
	};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] =
	{
		{4, "Exile_Item_JunkMetal"}
	};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] =
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] =
	{
		{5, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
/*
class CraftWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Draw-Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Rope"}
	};
};
*/
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] =
	{
		{8, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] =
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] =
	{
		{4, "Exile_Item_WoodLog"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] =
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] =
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] =
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
};
class CfgExileArsenal
{
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 2; };

	///////////////////////////////////////////////////////////////////////////////
	// Civillian Clothing
	///////////////////////////////////////////////////////////////////////////////
	class U_C_Journalist 							{ quality = 1; price = 20; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 20; };
	class U_C_Poor_1 								{ quality = 1; price = 20; };
	class U_C_Poor_2 								{ quality = 1; price = 20; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 20; };
	class U_C_Scientist 							{ quality = 1; price = 20; };
	class U_OrestesBody 							{ quality = 3; price = 40; };
	class U_Rangemaster 							{ quality = 1; price = 40; };
	class U_NikosAgedBody 							{ quality = 3; price = 40; };
	class U_NikosBody 								{ quality = 3; price = 40; };
	class U_Competitor 								{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Soldier Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_B_CombatUniform_mcam 					{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 1; price = 40; };
	class U_B_CTRG_1 								{ quality = 2; price = 40; };
	class U_B_CTRG_2 								{ quality = 2; price = 40; };
	class U_B_CTRG_3								{ quality = 2; price = 40; };
	class U_I_CombatUniform 						{ quality = 1; price = 40; };
	class U_I_CombatUniform_shortsleeve				{ quality = 1; price = 40; };
	class U_I_CombatUniform_tshirt					{ quality = 1; price = 40; };
	class U_I_OfficerUniform						{ quality = 1; price = 40; };
	class U_O_CombatUniform_ocamo 					{ quality = 1; price = 40; };
	class U_O_CombatUniform_oucamo 					{ quality = 1; price = 40; };
	class U_O_OfficerUniform_ocamo 					{ quality = 3; price = 80; };
	class U_B_SpecopsUniform_sgg 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_blk 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 3; price = 80; };
	class U_I_G_Story_Protagonist_F 				{ quality = 3; price = 100; };
	class U_mas_sfod_B_CombatUniform_wood 			{ quality = 1; price = 40; };
	class U_mas_sfod_B_CombatUniform_wood_tshirt 	{ quality = 1; price = 40; };
	class U_mas_sfod_B_CombatUniform_wood_vest 		{ quality = 1; price = 40; };
	class U_mas_sfod_B_CombatUniform_wood_vest1 	{ quality = 1; price = 40; };
	class U_mas_sfod_B_CombatUniform_wood_vest2 	{ quality = 1; price = 40; };
	class U_mas_sfod_B_CombatUniform_wood_vest3 	{ quality = 1; price = 40; };
	class U_mas_sfod_B_CombatUniform_wood_vest4 	{ quality = 1; price = 40; };
	class U_mas_sfod_B_CombatUniform_des 			{ quality = 1; price = 40; };
	class U_mas_sfod_B_CombatUniform_des_tshirt 	{ quality = 1; price = 40; };
	class U_mas_sfod_B_CombatUniform_des_vest 		{ quality = 1; price = 40; };
	class U_mas_sfod_B_CombatUniform_des_vest1 		{ quality = 1; price = 40; };
	class U_mas_sfod_B_CombatUniform_des_vest2 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_mcam 			{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_mcam_tshirt 	{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_mcam_vest 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_mcam_vest1 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_mcam_vest2 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_mcam_vest3 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_mcam_vest4 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_veg 			{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_veg_tshirt 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_veg_vest 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_veg_vest1 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_veg_vest2 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_des 			{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_des_tshirt 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_des_vest 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_des_vest1 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_des_vest2 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_sage 			{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_sage_tshirt 	{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_sage_vest 		{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_wood 			{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_wood_tshirt 	{ quality = 1; price = 40; };
	class U_mas_usn_B_CombatUniform_wood_vest 		{ quality = 1; price = 40; };
	class U_mas_usd_B_CombatUniform_mcam 			{ quality = 1; price = 40; };
	class U_mas_usd_B_CombatUniform_mcam_tshirt 	{ quality = 1; price = 40; };
	class U_mas_usd_B_CombatUniform_mcam_vest 		{ quality = 1; price = 40; };
	class U_mas_usd_B_CombatUniform_mcam_vest1 		{ quality = 1; price = 40; };
	class U_mas_usr_B_IndUniform1_o 				{ quality = 1; price = 40; };
	class U_mas_usr_B_IndUniform2_o 				{ quality = 1; price = 40; };
	class U_mas_usr_B_IndUniform1_v 				{ quality = 1; price = 40; };
	class U_mas_usr_B_IndUniform2_v 				{ quality = 1; price = 40; };
	class U_mas_usr_B_IndUniform1_d 				{ quality = 1; price = 40; };
	class U_mas_usr_B_IndUniform2_d 				{ quality = 1; price = 40; };
	class U_mas_usd_B_founiform1_o 					{ quality = 1; price = 40; };
	class U_mas_usd_B_founiform2_o 					{ quality = 1; price = 40; };
	class U_mas_usd_B_founiform3_o 					{ quality = 1; price = 40; };
	class U_mas_usd_B_founiform4_o 					{ quality = 1; price = 40; };
	class U_mas_usd_B_founiform5_o 					{ quality = 1; price = 40; };
	class U_mas_usd_B_founiform6_o 					{ quality = 1; price = 40; };
	class U_mas_usd_B_founiform7_o 					{ quality = 1; price = 40; };
	class U_mas_usd_B_founiform8_o 					{ quality = 1; price = 40; };
	class U_mas_usd_B_founiform9_o 					{ quality = 1; price = 40; };
	class U_mas_usn_B_DEV 							{ quality = 1; price = 40; };
	class U_mas_usn_B_wint 							{ quality = 1; price = 40; };
	class U_mas_usn_B_pilot 						{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Guerilla Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_C_HunterBody_grn						{ quality = 1; price = 40; };
	class U_IG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_1							{ quality = 2; price = 60; };
	class U_IG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_2							{ quality = 1; price = 40; };
	class U_BG_Guerrilla_6_1						{ quality = 2; price = 60; };
	class U_BG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_BG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_leader								{ quality = 1; price = 40; };
	class U_IG_leader								{ quality = 1; price = 40; };
	class U_I_G_resistanceLeader_F					{ quality = 3; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Ghillie Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_B_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_B_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_B_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_B_GhillieSuit							{ quality = 2; price = 100; };
	class U_I_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_I_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_I_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_I_GhillieSuit							{ quality = 2; price = 100; };
	class U_O_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_O_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_O_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_O_GhillieSuit							{ quality = 2; price = 100; };
	class U_mas_usn_B_GhillieSuit 					{ quality = 3; price = 150; };
	class U_mas_usn_B_GhillieSuit_v 				{ quality = 3; price = 150; };
	class U_mas_usn_B_GhillieSuit_d 				{ quality = 3; price = 150; };
	class U_mas_usn_B_GhillieSuit_w					{ quality = 3; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Wet Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_I_Wetsuit								{ quality = 3; price = 80; };
	class U_O_Wetsuit								{ quality = 3; price = 80; };
	class U_B_Wetsuit								{ quality = 3; price = 80; };
	class U_B_survival_uniform						{ quality = 3; price = 80; };
	class U_mas_usn_B_Wetsuit 						{ quality = 3; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandolliers
	///////////////////////////////////////////////////////////////////////////////
	class V_BandollierB_blk							{ quality = 1; price = 30; };
	class V_BandollierB_cbr							{ quality = 1; price = 30; };
	class V_BandollierB_khk							{ quality = 1; price = 30; };
	class V_BandollierB_oli							{ quality = 1; price = 30; };
	class V_BandollierB_rgr							{ quality = 1; price = 30; };
	class V_mas_usn_BandollierB_rgr					{ quality = 1; price = 30; };
	class V_mas_usr_BandollierB_rgr_m				{ quality = 1; price = 30; };
	class V_mas_usn_BandollierB_rgr_d				{ quality = 1; price = 30; };
	class V_mas_usn_BandollierB_rgr_v				{ quality = 1; price = 30; };
	class V_mas_usn_BandollierB_rgr_g				{ quality = 1; price = 30; };
	class V_mas_usr_BandollierB_rgr					{ quality = 1; price = 30; };
	class V_mas_usr_BandollierB_rgr_d				{ quality = 1; price = 30; };
	class V_mas_usr_BandollierB_rgr_g				{ quality = 1; price = 30; };
	class V_mas_usn_Rangemaster_belt				{ quality = 1; price = 30; };
	class V_mas_usn_Rangemaster_belt_d				{ quality = 1; price = 30; };
	class V_mas_usn_Rangemaster_belt_v				{ quality = 1; price = 30; };
	class V_mas_usn_Rangemaster_belt_g				{ quality = 1; price = 30; };
	class V_mas_usr_Rangemaster_belt				{ quality = 1; price = 30; };
	class V_mas_usr_Rangemaster_belt_d				{ quality = 1; price = 30; };
	class V_mas_usr_Rangemaster_belt_g				{ quality = 1; price = 30; };

	///////////////////////////////////////////////////////////////////////////////
	// Chestrigs
	///////////////////////////////////////////////////////////////////////////////
	class V_Chestrig_blk 							{ quality = 1; price = 20; };
	class V_Chestrig_khk 							{ quality = 1; price = 20; };
	class V_Chestrig_oli 							{ quality = 1; price = 20; };
	class V_Chestrig_rgr 							{ quality = 1; price = 20; };
	class V_mas_usn_ChestrigB_rgr					{ quality = 1; price = 20; };
	class V_mas_usn_ChestrigB_rgr_d					{ quality = 1; price = 20; };
	class V_mas_usn_ChestrigB_rgr_v					{ quality = 1; price = 20; };
	class V_mas_usn_ChestrigB_rgr_g					{ quality = 1; price = 20; };
	class V_mas_usn_ChestrigB_rgr_w					{ quality = 1; price = 20; };
	class V_mas_usr_ChestrigB_rgr					{ quality = 1; price = 20; };
	class V_mas_usr_ChestrigB_rgr_d					{ quality = 1; price = 20; };
	class V_mas_usr_ChestrigB_rgr_g					{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Vests
	///////////////////////////////////////////////////////////////////////////////
	class V_Press_F									{ quality = 1; price = 10; };
	class V_Rangemaster_belt						{ quality = 1; price = 6; };
	class V_TacVest_blk								{ quality = 2; price = 50; };
	class V_TacVest_blk_POLICE						{ quality = 3; price = 300; };
	class V_TacVest_brn								{ quality = 2; price = 50; };
	class V_TacVest_camo							{ quality = 2; price = 50; };
	class V_TacVest_khk								{ quality = 2; price = 50; };
	class V_TacVest_oli								{ quality = 2; price = 50; };
	class V_TacVestCamo_khk							{ quality = 2; price = 50; };
	class V_TacVestIR_blk							{ quality = 2; price = 50; };
	class V_I_G_resistanceLeader_F					{ quality = 2; price = 50; };
	class V_mas_usn_TacVest_p 						{ quality = 2; price = 50; };
	class V_mas_usn_TacVest_g						{ quality = 2; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Harnesses
	///////////////////////////////////////////////////////////////////////////////
	class V_HarnessO_brn							{ quality = 1; price = 40; };
	class V_HarnessO_gry							{ quality = 1; price = 40; };
	class V_HarnessOGL_brn							{ quality = 1; price = 30; };
	class V_HarnessOGL_gry							{ quality = 1; price = 30; };
	class V_HarnessOSpec_brn						{ quality = 1; price = 40; };
	class V_HarnessOSpec_gry						{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Plate Carriers
	///////////////////////////////////////////////////////////////////////////////
	class V_PlateCarrier1_blk 						{ quality = 1; price = 80; };
	class V_PlateCarrier1_rgr 						{ quality = 1; price = 80; };
	class V_PlateCarrier2_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrier3_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrierGL_blk 						{ quality = 3; price = 500; };
	class V_PlateCarrierGL_mtp 						{ quality = 3; price = 500; };
	class V_PlateCarrierGL_rgr 						{ quality = 3; price = 500; };
	class V_PlateCarrierH_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierIA1_dgtl 					{ quality = 2; price = 80; };
	class V_PlateCarrierIA2_dgtl 					{ quality = 2; price = 100; };
	class V_PlateCarrierIAGL_dgtl 					{ quality = 3; price = 400; };
	class V_PlateCarrierIAGL_oli 					{ quality = 3; price = 400; };
	class V_PlateCarrierL_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierSpec_blk 					{ quality = 3; price = 200; };
	class V_PlateCarrierSpec_mtp 					{ quality = 3; price = 200; };
	class V_PlateCarrierSpec_rgr 					{ quality = 3; price = 200; };
	class V_mas_usn_PlateCarrier1_rgr	 			{ quality = 3; price = 200; };
	class V_mas_usn_PlateCarrier2_rgr	 			{ quality = 3; price = 200; };
	class V_mas_usn_PlateCarrierGL_rgr				{ quality = 3; price = 200; };
	class V_mas_usr_PlateCarrier1_rgr_m	 			{ quality = 3; price = 200; };
	class V_mas_usr_PlateCarrier2_rgr_m				{ quality = 3; price = 200; };
	class V_mas_usn_PlateCarrier1_rgr_d 			{ quality = 3; price = 200; };
	class V_mas_usn_PlateCarrier2_rgr_d 			{ quality = 3; price = 200; };
	class V_mas_usn_PlateCarrierGL_rgr_d			{ quality = 3; price = 200; };
	class V_mas_usn_PlateCarrier1_rgr_v 			{ quality = 3; price = 200; };
	class V_mas_usn_PlateCarrier2_rgr_v 			{ quality = 3; price = 200; };
	class V_mas_usn_PlateCarrierGL_rgr_v			{ quality = 3; price = 200; };
	class V_mas_usn_PlateCarrier1_rgr_g 			{ quality = 3; price = 200; };
	class V_mas_usn_PlateCarrier2_rgr_g 			{ quality = 3; price = 200; };
	class V_mas_usn_PlateCarrierGL_rgr_g			{ quality = 3; price = 200; };
	class V_mas_usn_PlateCarrier1_rgr_w				{ quality = 3; price = 200; };
	class V_mas_usr_PlateCarrier1_rgr 				{ quality = 3; price = 200; };
	class V_mas_usr_PlateCarrier2_rgr 				{ quality = 3; price = 200; };
	class V_mas_usr_PlateCarrierGL_rgr				{ quality = 3; price = 200; };
	class V_mas_usr_PlateCarrier1_rgr_d 			{ quality = 3; price = 200; };
	class V_mas_usr_PlateCarrier2_rgr_d 			{ quality = 3; price = 200; };
	class V_mas_usr_PlateCarrierGL_rgr_d			{ quality = 3; price = 200; };
	class V_mas_usr_PlateCarrier1_rgr_g 			{ quality = 3; price = 200; };
	class V_mas_usr_PlateCarrier2_rgr_g 			{ quality = 3; price = 200; };
	class V_mas_usr_PlateCarrierGL_rgr_g  			{ quality = 3; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_Cap_blk 								{ quality = 1; price = 6; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 6; };
	class H_Cap_blu 								{ quality = 1; price = 6; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 6; };
	class H_Cap_grn 								{ quality = 1; price = 6; };
	class H_Cap_headphones 							{ quality = 1; price = 6; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 6; };
	class H_Cap_oli 								{ quality = 1; price = 6; };
	class H_Cap_press 								{ quality = 1; price = 6; };
	class H_Cap_red 								{ quality = 1; price = 6; };
	class H_Cap_tan 								{ quality = 1; price = 6; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 6; };
	class H_mas_usn_Cap_headphones 					{ quality = 1; price = 6; };
	class H_mas_usn_Cap_headphones_d 				{ quality = 1; price = 6; };
	class H_mas_usn_Cap_headphones_v 				{ quality = 1; price = 6; };
	class H_mas_usn_Cap_headphones_w 				{ quality = 1; price = 6; };
	class H_mas_usn_Cap_headphones_g				{ quality = 1; price = 6; };
	class H_mas_usn_revcapheadset_b 				{ quality = 1; price = 6; };
	class H_mas_usn_revcapheadset_v 				{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Military Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_MilCap_blue 							{ quality = 1; price = 8; };
	class H_MilCap_dgtl 							{ quality = 1; price = 8; };
	class H_MilCap_mcamo 							{ quality = 1; price = 8; };
	class H_MilCap_ocamo 							{ quality = 1; price = 8; };
	class H_MilCap_oucamo 							{ quality = 1; price = 8; };
	class H_MilCap_rucamo 							{ quality = 1; price = 8; };
	class H_mas_usn_MilCap_mcamo 					{ quality = 1; price = 8; };
	class H_mas_usn_MilCap_mcamo_v 					{ quality = 1; price = 8; };
	class H_mas_usn_MilCap_mcamo_d					{ quality = 1; price = 8; };

	///////////////////////////////////////////////////////////////////////////////
	// Beanies
	///////////////////////////////////////////////////////////////////////////////
	class H_Watchcap_blk 							{ quality = 1; price = 6; };
	class H_Watchcap_camo 							{ quality = 1; price = 6; };
	class H_Watchcap_khk 							{ quality = 1; price = 6; };
	class H_Watchcap_sgg 							{ quality = 1; price = 6; };
	class H_mas_usn_Woolhat 						{ quality = 1; price = 6; };
	class H_mas_usn_Woolhat_c 						{ quality = 1; price = 6; };
	class H_mas_usn_Woolhat_w 						{ quality = 1; price = 6; };
	class H_mas_usn_woolhat_ht 						{ quality = 1; price = 6; };
	class H_mas_usn_woolhat_ht_w					{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandannas
	///////////////////////////////////////////////////////////////////////////////
	class H_Bandanna_camo							{ quality = 1; price = 4; };
	class H_Bandanna_cbr							{ quality = 1; price = 4; };
	class H_Bandanna_gry							{ quality = 1; price = 4; };
	class H_Bandanna_khk							{ quality = 1; price = 4; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 4; };
	class H_Bandanna_mcamo							{ quality = 1; price = 4; };
	class H_Bandanna_sgg							{ quality = 1; price = 4; };
	class H_Bandanna_surfer							{ quality = 1; price = 4; };
	class H_mas_usn_bandana 						{ quality = 1; price = 4; };
	class H_mas_usn_bandana_ht						{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// Boonie Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Booniehat_dgtl							{ quality = 1; price = 6; };
	class H_Booniehat_dirty							{ quality = 1; price = 6; };
	class H_Booniehat_grn							{ quality = 1; price = 6; };
	class H_Booniehat_indp							{ quality = 1; price = 6; };
	class H_Booniehat_khk							{ quality = 1; price = 6; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 6; };
	class H_Booniehat_mcamo							{ quality = 1; price = 6; };
	class H_Booniehat_tan							{ quality = 1; price = 6; };
	class H_mas_usn_Booniehat_mul 					{ quality = 1; price = 6; };
	class H_mas_usd_Booniehat_mul 					{ quality = 1; price = 6; };
	class H_mas_usd_Booniehat_tan 					{ quality = 1; price = 6; };
	class H_mas_usn_Booniehat_rgr 					{ quality = 1; price = 6; };
	class H_mas_usn_Booniehat_des 					{ quality = 1; price = 6; };
	class H_mas_usr_Booniehat_rgr 					{ quality = 1; price = 6; };
	class H_mas_usr_Booniehat_des					{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Hat_blue								{ quality = 1; price = 6; };
	class H_Hat_brown								{ quality = 1; price = 6; };
	class H_Hat_camo								{ quality = 1; price = 6; };
	class H_Hat_checker								{ quality = 1; price = 6; };
	class H_Hat_grey								{ quality = 1; price = 6; };
	class H_Hat_tan									{ quality = 1; price = 6; };
	class H_StrawHat								{ quality = 1; price = 6; };
	class H_StrawHat_dark							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Berets
	///////////////////////////////////////////////////////////////////////////////
	class H_Beret_02								{ quality = 1; price = 6; };
	class H_Beret_blk								{ quality = 1; price = 6; };
	class H_Beret_blk_POLICE						{ quality = 1; price = 6; };
	class H_Beret_brn_SF							{ quality = 1; price = 6; };
	class H_Beret_Colonel							{ quality = 3; price = 8; };
	class H_Beret_grn								{ quality = 1; price = 6; };
	class H_Beret_grn_SF							{ quality = 1; price = 6; };
	class H_Beret_ocamo								{ quality = 1; price = 6; };
	class H_Beret_red								{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Shemags
	///////////////////////////////////////////////////////////////////////////////
	class H_Shemag_khk								{ quality = 1; price = 10; };
	class H_Shemag_olive							{ quality = 1; price = 10; };
	class H_Shemag_olive_hs							{ quality = 1; price = 10; };
	class H_Shemag_tan								{ quality = 1; price = 10; };
	class H_ShemagOpen_khk							{ quality = 1; price = 10; };
	class H_ShemagOpen_tan							{ quality = 1; price = 10; };
	class H_TurbanO_blk								{ quality = 1; price = 10; };
	class G_mas_wpn_gog 							{ quality = 1; price = 25; };
	class G_mas_wpn_gog_d							{ quality = 1; price = 25; };
	class G_mas_wpn_gog_m 							{ quality = 1; price = 25; };
	class G_mas_wpn_gog_md 							{ quality = 1; price = 25; };
	class G_mas_wpn_gog_g 							{ quality = 1; price = 25; };
	class G_mas_wpn_gog_gd 							{ quality = 1; price = 25; };
	class G_mas_wpn_mask 							{ quality = 1; price = 15; };
	class G_mas_wpn_mask_b 							{ quality = 1; price = 15; };
	class G_mas_wpn_wrap 							{ quality = 1; price = 15; };
	class G_mas_wpn_wrap_f 							{ quality = 1; price = 15; };
	class G_mas_wpn_wrap_t 							{ quality = 1; price = 15; };
	class G_mas_wpn_wrap_b 							{ quality = 1; price = 15; };
	class G_mas_wpn_wrap_c 							{ quality = 1; price = 15; };
	class G_mas_wpn_wrap_g 							{ quality = 1; price = 15; };
	class G_mas_wpn_wrap_gog 						{ quality = 1; price = 25; };
	class G_mas_wpn_wrap_gog_f 						{ quality = 1; price = 25; };
	class G_mas_wpn_wrap_gog_t 						{ quality = 1; price = 25; };
	class G_mas_wpn_wrap_gog_b 						{ quality = 1; price = 25; };
	class G_mas_wpn_wrap_gog_c 						{ quality = 1; price = 25; };
	class G_mas_wpn_wrap_gog_g 						{ quality = 1; price = 25; };
	class G_mas_wpn_wrap_mask 						{ quality = 1; price = 15; };
	class G_mas_wpn_wrap_mask_t 					{ quality = 1; price = 15; };
	class G_mas_wpn_wrap_mask_f 					{ quality = 1; price = 15; };
	class G_mas_wpn_wrap_mask_b 					{ quality = 1; price = 15; };
	class G_mas_wpn_wrap_mask_c 					{ quality = 1; price = 15; };
	class G_mas_wpn_wrap_mask_g 					{ quality = 1; price = 15; };
	class G_mas_wpn_bala 							{ quality = 1; price = 15; };
	class G_mas_wpn_bala_b 							{ quality = 1; price = 15; };
	class G_mas_wpn_bala_t 							{ quality = 1; price = 15; };
	class G_mas_wpn_bala_gog 						{ quality = 1; price = 25; };
	class G_mas_wpn_bala_gog_b 						{ quality = 1; price = 25; };
	class G_mas_wpn_bala_gog_t 						{ quality = 1; price = 25; };
	class G_mas_wpn_bala_mask 						{ quality = 1; price = 15; };
	class G_mas_wpn_bala_mask_b 					{ quality = 1; price = 15; };
	class G_mas_wpn_bala_mask_t 					{ quality = 1; price = 15; };
	class G_mas_wpn_shemag 							{ quality = 1; price = 15; };
	class G_mas_wpn_shemag_r 						{ quality = 1; price = 15; };
	class G_mas_wpn_shemag_w 						{ quality = 1; price = 15; };
	class G_mas_wpn_shemag_gog 						{ quality = 1; price = 25; };
	class G_mas_wpn_shemag_mask 					{ quality = 1; price = 15; };
	class G_mas_wpn_gasmask							{ quality = 1; price = 15; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetB_light							{ quality = 1; price = 20; };
	class H_HelmetB_light_black						{ quality = 1; price = 20; };
	class H_HelmetB_light_desert					{ quality = 1; price = 20; };
	class H_HelmetB_light_grass						{ quality = 1; price = 20; };
	class H_HelmetB_light_sand						{ quality = 1; price = 20; };
	class H_HelmetB_light_snakeskin					{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetIA								{ quality = 1; price = 40; };
	class H_HelmetIA_camo							{ quality = 1; price = 40; };
	class H_HelmetIA_net							{ quality = 1; price = 40; };
	class H_HelmetB									{ quality = 2; price = 60; };
	class H_HelmetB_black							{ quality = 2; price = 60; };
	class H_HelmetB_camo							{ quality = 3; price = 80; }; // This one is awesome!
	class H_HelmetB_desert							{ quality = 2; price = 60; };
	class H_HelmetB_grass							{ quality = 2; price = 60; };
	class H_HelmetB_paint							{ quality = 2; price = 60; };
	class H_HelmetB_plain_blk						{ quality = 2; price = 60; };
	class H_HelmetB_sand							{ quality = 2; price = 60; };
	class H_HelmetB_snakeskin						{ quality = 2; price = 60; };
	class H_mas_usn_helmet_mich_sf 					{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_g 				{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_m 				{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_w 				{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_b 				{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_gog				{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_gog_g 			{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_gog_m 			{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_gog_w 			{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_gog_b 			{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_h 				{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_h_g 				{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_h_m  			{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_h_w 				{ quality = 2; price = 80; };
	class H_mas_usn_helmet_mich_sf_h_b 				{ quality = 2; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Spec Ops Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetSpecB								{ quality = 2; price = 80; };
	class H_HelmetSpecB_blk							{ quality = 2; price = 80; };
	class H_HelmetSpecB_paint1						{ quality = 2; price = 80; };
	class H_HelmetSpecB_paint2						{ quality = 2; price = 80; };
	class H_mas_usn_helmet_ops_sf 					{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_b 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_g 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_d 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_w 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_e 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_v 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_m 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_z 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_gog 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_gog_b 			{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_gog_g 			{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_gog_d 			{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_gog_w 			{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_gog_e 			{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_gog_v 			{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_gog_m 			{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_gog_z 			{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_h 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_h_b 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_h_g 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_h_d 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_h_w 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_h_e 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_h_v 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_h_m 				{ quality = 2; price = 100; };
	class H_mas_usn_helmet_ops_sf_h_z				{ quality = 2; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Super Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetO_ocamo							{ quality = 3; price = 150; };
	class H_HelmetO_oucamo							{ quality = 3; price = 150; };
	class H_HelmetSpecO_blk							{ quality = 3; price = 100; };
	class H_HelmetSpecO_ocamo						{ quality = 3; price = 100; };
	class H_HelmetLeaderO_ocamo						{ quality = 3; price = 200; };
	class H_HelmetLeaderO_oucamo					{ quality = 3; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Pointer Attachments
	///////////////////////////////////////////////////////////////////////////////
	class acc_flashlight 							{ quality = 1; price = 4; };
	class acc_pointer_IR 							{ quality = 1; price = 10; };
	class acc_mas_flash_gun 						{ quality = 1; price = 10; };
	class acc_mas_pointer_gun_IR 					{ quality = 1; price = 20; };
	class acc_mas_pointer_IR 						{ quality = 1; price = 20; };
	class acc_mas_pointer_IR_b 						{ quality = 1; price = 20; };
	class acc_mas_pointer_IR_top 					{ quality = 1; price = 20; };
	class acc_mas_pointer_IR_top_b 					{ quality = 1; price = 20; };
	class acc_mas_pointer_IR2 						{ quality = 1; price = 20; };
	class acc_mas_pointer_IR2_top 					{ quality = 1; price = 20; };
	class acc_mas_pointer_IR2c 						{ quality = 1; price = 20; };
	class acc_mas_pointer_IR2c_top					{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Bitpod Attachments
	///////////////////////////////////////////////////////////////////////////////
	class bipod_01_F_blk	 						{ quality = 1; price = 10; };
	class bipod_01_F_mtp	 						{ quality = 1; price = 10; };
	class bipod_01_F_snd	 						{ quality = 1; price = 10; };
	class bipod_02_F_blk	 						{ quality = 1; price = 10; };
	class bipod_02_F_hex	 						{ quality = 1; price = 10; };
	class bipod_02_F_tan	 						{ quality = 1; price = 10; };
	class bipod_03_F_blk	 						{ quality = 1; price = 10; };
	class bipod_03_F_oli	 						{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class muzzle_snds_338_black 					{ quality = 2; price = 50; };
	class muzzle_snds_338_green 					{ quality = 2; price = 50; };
	class muzzle_snds_338_sand 						{ quality = 2; price = 50; };
	class muzzle_snds_93mmg 						{ quality = 2; price = 50; };
	class muzzle_snds_93mmg_tan 					{ quality = 2; price = 50; };
	class muzzle_snds_acp 							{ quality = 1; price = 10; };
	class muzzle_snds_B 							{ quality = 1; price = 20; };
	class muzzle_snds_H 							{ quality = 2; price = 20; };
	class muzzle_snds_H_MG 							{ quality = 2; price = 20; };
	class muzzle_snds_H_SW 							{ quality = 2; price = 20; };
	class muzzle_snds_L 							{ quality = 1; price = 10; };
	class muzzle_snds_M 							{ quality = 1; price = 10; };
	class muzzle_mas_snds_L 						{ quality = 1; price = 20; };
	class muzzle_mas_snds_LM 						{ quality = 1; price = 20; };
	class muzzle_mas_snds_C 						{ quality = 1; price = 20; };
	class muzzle_mas_snds_MP5SD6 					{ quality = 1; price = 20; };
	class muzzle_mas_snds_M 						{ quality = 1; price = 20; };
	class muzzle_mas_snds_Mc 						{ quality = 1; price = 20; };
	class muzzle_mas_snds_MP7 						{ quality = 1; price = 20; };
	class muzzle_mas_snds_AK 						{ quality = 1; price = 20; };
	class muzzle_mas_snds_SM 						{ quality = 1; price = 20; };
	class muzzle_mas_snds_SMc 						{ quality = 1; price = 20; };
	class muzzle_mas_snds_SH 						{ quality = 1; price = 20; };
	class muzzle_mas_snds_SHc 						{ quality = 1; price = 20; };
	class muzzle_mas_snds_SV 						{ quality = 1; price = 20; };
	class muzzle_mas_snds_SVc 						{ quality = 1; price = 20; };
	class muzzle_mas_snds_SVD						{ quality = 1; price = 20; };
	class muzzle_mas_snds_KSVK						{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// UAVS
	///////////////////////////////////////////////////////////////////////////////
	class I_UavTerminal								{ quality = 3; price = 750; };
	class I_UAV_01_backpack_F						{ quality = 3; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Static MGs
	///////////////////////////////////////////////////////////////////////////////
	class O_HMG_01_weapon_F 						{ quality = 3; price = 5000; };
	class O_HMG_01_support_F 						{ quality = 3; price = 1000; };
	// Does not seem to work with HMG01, only the lower version does
	//class O_HMG_01_support_high_F 					{ quality = 3; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class optic_Aco									{ quality = 1; price = 70; };
	class optic_ACO_grn								{ quality = 1; price = 70; };
	class optic_ACO_grn_smg							{ quality = 1; price = 70; };
	class optic_Aco_smg								{ quality = 1; price = 70; };
	class optic_AMS									{ quality = 3; price = 300; };
	class optic_AMS_khk								{ quality = 3; price = 300; };
	class optic_AMS_snd								{ quality = 3; price = 300; };
	class optic_Arco								{ quality = 1; price = 100; };
	class optic_DMS									{ quality = 1; price = 150; };
	class optic_Hamr								{ quality = 3; price = 200; };
	class optic_Holosight							{ quality = 1; price = 50; };
	class optic_Holosight_smg						{ quality = 1; price = 50; };
	class optic_KHS_blk								{ quality = 3; price = 300; };
	class optic_KHS_hex								{ quality = 3; price = 300; };
	class optic_KHS_old								{ quality = 3; price = 300; };
	class optic_KHS_tan								{ quality = 3; price = 300; };
	class optic_LRPS								{ quality = 2; price = 300; };
	class optic_MRCO								{ quality = 1; price = 100; };
	class optic_MRD									{ quality = 1; price = 10; };
	class optic_Nightstalker						{ quality = 3; price = 1000; };
	class optic_NVS									{ quality = 2; price = 500; };
	class optic_SOS									{ quality = 2; price = 200; };
	class optic_tws									{ quality = 3; price = 1500; };
	class optic_tws_mg								{ quality = 3; price = 1500; };
	class optic_Yorris								{ quality = 1; price = 10; };
	class optic_mas_DMS 							{ quality = 1; price = 50; };
	class optic_mas_DMS_c 							{ quality = 1; price = 50; };
	class optic_mas_Holosight_blk 					{ quality = 1; price = 50; };
	class optic_mas_Holosight_camo 					{ quality = 1; price = 50; };
	class optic_mas_Arco_blk 						{ quality = 1; price = 50; };
	class optic_mas_Arco_camo						{ quality = 1; price = 50; };
	class optic_mas_Hamr_camo	 					{ quality = 1; price = 50; };
	class optic_mas_Aco_camo 						{ quality = 1; price = 50; };
	class optic_mas_ACO_grn_camo 					{ quality = 1; price = 50; };
	class optic_mas_MRCO_camo 						{ quality = 1; price = 50; };
	class optic_mas_zeiss 							{ quality = 1; price = 50; };
	class optic_mas_zeiss_c 						{ quality = 1; price = 50; };
	class optic_mas_zeiss_eo 						{ quality = 1; price = 50; };
	class optic_mas_zeiss_eo_c 						{ quality = 1; price = 50; };
	class optic_mas_acog 							{ quality = 1; price = 50; };
	class optic_mas_acog_c 							{ quality = 1; price = 50; };
	class optic_mas_acog_eo 						{ quality = 1; price = 50; };
	class optic_mas_acog_eo_c 						{ quality = 1; price = 50; };
	class optic_mas_acog_rd 						{ quality = 1; price = 50; };
	class optic_mas_acog_rd_c 						{ quality = 1; price = 50; };
	class optic_mas_handle 							{ quality = 1; price = 50; };
	class optic_mas_aim 							{ quality = 1; price = 50; };
	class optic_mas_aim_c 							{ quality = 1; price = 50; };
	class optic_mas_PSO 							{ quality = 1; price = 50; };
	class optic_mas_PSO_c 							{ quality = 1; price = 50; };
	class optic_mas_PSO_eo 							{ quality = 1; price = 50; };
	class optic_mas_PSO_eo_c 						{ quality = 1; price = 50; };
	class optic_mas_PSO_nv 							{ quality = 1; price = 50; };
	class optic_mas_PSO_nv_c 						{ quality = 1; price = 50; };
	class optic_mas_PSO_nv_eo 						{ quality = 1; price = 50; };
	class optic_mas_PSO_nv_eo_c 					{ quality = 1; price = 50; };
	class optic_mas_PSO_day 						{ quality = 1; price = 50; };
	class optic_mas_PSO_nv_day 						{ quality = 1; price = 50; };
	class optic_mas_term 							{ quality = 1; price = 50; };
	class optic_mas_MRD 							{ quality = 1; price = 50; };
	class optic_mas_LRPS 							{ quality = 1; price = 50; };
	class optic_mas_kobra 							{ quality = 1; price = 50; };
	class optic_mas_kobra_c 						{ quality = 1; price = 50; };
	class optic_mas_nspu 							{ quality = 1; price = 50; };
	class optic_mas_goshawk 						{ quality = 1; price = 50; };
	class optic_mas_PSO_kv 							{ quality = 1; price = 50; };
	class optic_mas_PSO_kv_c						{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Hardware
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Rope							{ quality = 1; price = 20; };
	class Exile_Item_DuctTape						{ quality = 1; price = 300; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 40; };
	class Exile_Item_JunkMetal						{ quality = 1; price = 400; };
	class Exile_Item_LightBulb						{ quality = 1; price = 20; };
	class Exile_Item_MetalBoard						{ quality = 1; price = 600; };
	class Exile_Item_SafeKit						{ quality = 3; price = 10000; };
	class Exile_Item_CodeLock						{ quality = 2; price = 5000; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 250; };
	class Exile_Item_MetalPole						{ quality = 1; price = 800; };

	///////////////////////////////////////////////////////////////////////////////
	// Food
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_GloriousKnakworst				{ quality = 1; price = 40; };
	class Exile_Item_Surstromming					{ quality = 1; price = 30; };
	class Exile_Item_SausageGravy					{ quality = 1; price = 30; };
	class Exile_Item_ChristmasTinner				{ quality = 1; price = 20; };
	class Exile_Item_BBQSandwich					{ quality = 1; price = 20; };
	class Exile_Item_Catfood						{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Drinks
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 2; price = 40; };
	class Exile_Item_PlasticBottleEmpty				{ quality = 1; price = 4; };
	class Exile_Item_Beer 							{ quality = 1; price = 50; };
	class Exile_Item_Energydrink					{ quality = 1; price = 70; };

	///////////////////////////////////////////////////////////////////////////////
	// Tools
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Matches 						{ quality = 1; price = 60; };
	class Exile_Item_CookingPot						{ quality = 2; price = 80; };
	class Exile_Item_InstaDoc                       { quality = 1; price = 250; };
	class Exile_Melee_Axe							{ quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Navigation
	///////////////////////////////////////////////////////////////////////////////
	class ItemWatch									{ quality = 1; price = 6; };
	class ItemGPS									{ quality = 1; price = 40; };
	class ItemMap									{ quality = 1; price = 6; };
	class ItemCompass								{ quality = 1; price = 6; };
	class ItemRadio									{ quality = 1; price = 40; };
	class Binocular									{ quality = 1; price = 40; };
	class Rangefinder								{ quality = 2; price = 200; };
	class Laserdesignator							{ quality = 3; price = 750; };
	class Laserdesignator_02						{ quality = 3; price = 750; };
	class Laserdesignator_03						{ quality = 3; price = 750; };
	class NVGoggles									{ quality = 2; price = 100; };
	class NVGoggles_INDEP							{ quality = 2; price = 100; };
	class NVGoggles_OPFOR							{ quality = 2; price = 100; };
	class NVGoggles_mas_h 							{ quality = 2; price = 100; };
	class Rangefinder_mas_h 						{ quality = 2; price = 200; };
	class Laserdesignator_mas_h 					{ quality = 3; price = 750; };

	///////////////////////////////////////////////////////////////////////////////
	// Rebreather
	///////////////////////////////////////////////////////////////////////////////
	class V_RebreatherB								{ quality = 2; price = 250; };
	class V_RebreatherIA							{ quality = 2; price = 250; };
	class V_RebreatherIR							{ quality = 2; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// Pilot Stuff
	///////////////////////////////////////////////////////////////////////////////
	class B_Parachute								{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_B						{ quality = 2; price = 150; };
	class H_CrewHelmetHeli_I						{ quality = 2; price = 150; };
	class H_CrewHelmetHeli_O						{ quality = 2; price = 150; };
	class H_HelmetCrew_I							{ quality = 1; price = 100; };
	class H_HelmetCrew_B							{ quality = 1; price = 100; };
	class H_HelmetCrew_O							{ quality = 1; price = 100; };
	class H_PilotHelmetHeli_B						{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_I						{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_O						{ quality = 3; price = 100; };
	class U_B_HeliPilotCoveralls					{ quality = 1; price = 80; };
	class U_B_PilotCoveralls						{ quality = 1; price = 60; };
	class U_I_HeliPilotCoveralls					{ quality = 1; price = 60; };
	class U_I_pilotCoveralls						{ quality = 1; price = 60; };
	class U_O_PilotCoveralls						{ quality = 1; price = 60; };
	class H_PilotHelmetFighter_B					{ quality = 2; price = 150; };
	class H_PilotHelmetFighter_I					{ quality = 2; price = 150; };
	class H_PilotHelmetFighter_O					{ quality = 2; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Backpacks
	///////////////////////////////////////////////////////////////////////////////

	class B_AssaultPack_blk							{ quality = 1; price = 90; };
	class B_AssaultPack_cbr							{ quality = 1; price = 90; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 90; };
	class B_AssaultPack_khk							{ quality = 1; price = 90; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 90; };
	class B_AssaultPack_rgr							{ quality = 1; price = 90; };
	class B_AssaultPack_sgg							{ quality = 1; price = 90; };
	class B_FieldPack_blk							{ quality = 2; price = 90; };
	class B_FieldPack_cbr							{ quality = 2; price = 90; };
	class B_FieldPack_ocamo							{ quality = 2; price = 90; };
	class B_FieldPack_oucamo						{ quality = 2; price = 90; };
	class B_TacticalPack_blk						{ quality = 2; price = 90; };
	class B_TacticalPack_rgr						{ quality = 2; price = 90; };
	class B_TacticalPack_ocamo						{ quality = 2; price = 90; };
	class B_TacticalPack_mcamo						{ quality = 2; price = 90; };
	class B_TacticalPack_oli						{ quality = 2; price = 90; };
	class B_Kitbag_cbr								{ quality = 3; price = 90; };
	class B_Kitbag_mcamo							{ quality = 3; price = 90; };
	class B_Kitbag_sgg								{ quality = 3; price = 90; };
	class B_Carryall_cbr							{ quality = 3; price = 90; };
	class B_Carryall_khk							{ quality = 3; price = 90; };
	class B_Carryall_mcamo							{ quality = 3; price = 90; };
	class B_Carryall_ocamo							{ quality = 3; price = 90; };
	class B_Carryall_oli							{ quality = 3; price = 90; };
	class B_Carryall_oucamo							{ quality = 3; price = 90; };
	class B_Bergen_blk								{ quality = 2; price = 90; };
	class B_Bergen_mcamo							{ quality = 2; price = 90; };
	class B_Bergen_rgr								{ quality = 2; price = 90; };
	class B_Bergen_sgg								{ quality = 2; price = 90; };
	class B_HuntingBackpack							{ quality = 3; price = 90; };
	class B_OutdoorPack_blk							{ quality = 1; price = 90; };
	class B_OutdoorPack_blu							{ quality = 1; price = 90; };
	class B_OutdoorPack_tan							{ quality = 1; price = 90; };
	class B_mas_m_Bergen_us 						{ quality = 1; price = 90; };
	class B_mas_m_Bergen_us_g 						{ quality = 1; price = 90; };
	class B_mas_m_Bergen_us_m 						{ quality = 1; price = 90; };
	class B_mas_m_Bergen_us_b 						{ quality = 1; price = 90; };
	class B_mas_m_Bergen_us_w 						{ quality = 1; price = 90; };
	class B_mas_m_Bergen_acr 						{ quality = 1; price = 90; };
	class B_mas_m_Bergen_acr_c 						{ quality = 1; price = 90; };
	class B_mas_m_Bergen_acr_g 						{ quality = 1; price = 90; };
	class B_mas_m_Bergen_acr_w  					{ quality = 1; price = 90; };
	class B_mas_m_Bergen_rpg   						{ quality = 1; price = 90; };
	class B_mas_m_Bergen_rpg_b  					{ quality = 1; price = 90; };
	class B_mas_m_Bergen_al  						{ quality = 1; price = 90; };
	class B_mas_AssaultPack_mul  					{ quality = 1; price = 90; };
	class B_mas_Kitbag_mul  						{ quality = 1; price = 90; };
	class B_mas_Bergen_mul 							{ quality = 1; price = 90; };
	class B_mas_AssaultPack_mul_ammo 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_mul_ammo_MG 			{ quality = 1; price = 90; };
	class B_mas_AssaultPack_mul_Medic 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_mul_AA 					{ quality = 1; price = 90; };
	class B_mas_AssaultPack_mul_AT 					{ quality = 1; price = 90; };
	class B_mas_AssaultPack_mul_AT4 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_mul_m72 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_mul_MAAWS 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_mul_SMAW 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_mul_ATM 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_mul_Repair 				{ quality = 1; price = 90; };
	class B_mas_Bergen_mul_Exp 						{ quality = 1; price = 90; };
	class B_mas_AssaultPack_des 					{ quality = 1; price = 90; };
	class B_mas_Kitbag_des 							{ quality = 1; price = 90; };
	class B_mas_Bergen_des 							{ quality = 1; price = 90; };
	class B_mas_AssaultPack_des_Medic 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_des_AA 					{ quality = 1; price = 90; };
	class B_mas_AssaultPack_des_AT 					{ quality = 1; price = 90; };
	class B_mas_AssaultPack_des_AT4 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_des_m72 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_des_MAAWS 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_des_SMAW 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_des_ATM 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_des_Repair 				{ quality = 1; price = 90; };
	class B_mas_Bergen_des_Exp 						{ quality = 1; price = 90; };
	class B_mas_AssaultPack_black 					{ quality = 1; price = 90; };
	class B_mas_Kitbag_black 						{ quality = 1; price = 90; };
	class B_mas_Bergen_black 						{ quality = 1; price = 90; };
	class B_mas_AssaultPack_black_Medic 			{ quality = 1; price = 90; };
	class B_mas_AssaultPack_black_AA 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_black_AT 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_black_AT4				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_black_m72				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_black_MAAWS 			{ quality = 1; price = 90; };
	class B_mas_AssaultPack_black_SMAW 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_black_ATM 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_black_Repair			{ quality = 1; price = 90; };
	class B_mas_Bergen_black_Exp					{ quality = 1; price = 90; };
	class B_mas_AssaultPack_rng 					{ quality = 1; price = 90; };
	class B_mas_Kitbag_rng 							{ quality = 1; price = 90; };
	class B_mas_Bergen_rng 							{ quality = 1; price = 90; };
	class B_mas_AssaultPack_rng_Medic 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_rng_AA 					{ quality = 1; price = 90; };
	class B_mas_AssaultPack_rng_AT 					{ quality = 1; price = 90; };
	class B_mas_AssaultPack_rng_AT4 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_rng_m72 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_rng_MAAWS 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_rng_SMAW 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_rng_ATM 				{ quality = 1; price = 90; };
	class B_mas_AssaultPack_rng_Repair 				{ quality = 1; price = 90; };
	class B_mas_Bergen_rng_Exp 						{ quality = 1; price = 90; };

	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class 100Rnd_65x39_caseless_mag 				{ quality = 1; price = 30; };
	class 100Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 40; };
	class 10Rnd_127x54_Mag 							{ quality = 1; price = 30; };
	// Broken in Arma
	class 10Rnd_338_Mag 							{ quality = 1; price = 30; };

	class 10Rnd_762x54_Mag 							{ quality = 1; price = 30; };
	//class 10Rnd_762x51_Mag 							{ quality = 1; price = 30; };
	class 10Rnd_93x64_DMR_05_Mag 					{ quality = 1; price = 40; };
	class 11Rnd_45ACP_Mag 							{ quality = 1; price = 8; };
	class 150Rnd_762x54_Box 						{ quality = 1; price = 20; };
	class 150Rnd_762x54_Box_Tracer 					{ quality = 2; price = 30; };
	class 16Rnd_9x21_Mag 							{ quality = 1; price = 20; };
	class 200Rnd_65x39_cased_Box 					{ quality = 1; price = 30; };
	class 200Rnd_65x39_cased_Box_Tracer 			{ quality = 2; price = 30; };
	class 150Rnd_93x64_Mag 							{ quality = 2; price = 50; };
	class 130Rnd_338_Mag 							{ quality = 2; price = 40; };
	class 20Rnd_556x45_UW_mag 						{ quality = 1; price = 20; };
	class 20Rnd_762x51_Mag 							{ quality = 1; price = 20; };
	class 30Rnd_45ACP_Mag_SMG_01 					{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 		{ quality = 2; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow		{ quality = 2; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red			{ quality = 2; price = 10; };
	class 30Rnd_556x45_Stanag 						{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Green 			{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_green  				{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Red 			{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 		{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_red 					{ quality = 2; price = 20; };
	class 30Rnd_65x39_caseless_green 				{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 	{ quality = 2; price = 30; };
	class 30Rnd_65x39_caseless_mag 					{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 30; };
	class 30Rnd_9x21_Mag 							{ quality = 1; price = 10; };
	class 5Rnd_127x108_APDS_Mag 					{ quality = 2; price = 50; };
	class 5Rnd_127x108_Mag 							{ quality = 1; price = 40; };
	class 6Rnd_45ACP_Cylinder 						{ quality = 1; price = 8; };
	class 6Rnd_GreenSignal_F 						{ quality = 9000; price = 30; };
	class 6Rnd_RedSignal_F 							{ quality = 9000; price = 30; };
	class 7Rnd_408_Mag 								{ quality = 1; price = 10; };
	class 9Rnd_45ACP_Mag 							{ quality = 1; price = 6; };
	class 30Rnd_mas_556x45_Stanag 					{ quality = 10; price = 20; };
	class 30Rnd_mas_556x45_T_Stanag 				{ quality = 10; price = 20; };
	class 200Rnd_mas_556x45_Stanag 					{ quality = 10; price = 20; };
	class 200Rnd_mas_556x45_T_Stanag 				{ quality = 10; price = 20; };
	class 100Rnd_mas_762x51_Stanag 					{ quality = 10; price = 20; };
	class 100Rnd_mas_762x51_T_Stanag 				{ quality = 10; price = 20; };
	class 100Rnd_mas_762x54_mag 					{ quality = 10; price = 20; };
	class 100Rnd_mas_762x54_T_mag 					{ quality = 10; price = 20; };
	class 100Rnd_mas_762x39_mag 					{ quality = 10; price = 20; };
	class 100Rnd_mas_762x39_T_mag 					{ quality = 10; price = 20; };
	class 30Rnd_mas_545x39_mag 						{ quality = 10; price = 20; };
	class 30Rnd_mas_545x39_T_mag 					{ quality = 10; price = 20; };
	class 100Rnd_mas_545x39_mag 					{ quality = 10; price = 20; };
	class 100Rnd_mas_545x39_T_mag 					{ quality = 10; price = 20; };
	class 20Rnd_mas_762x51_Stanag 					{ quality = 10; price = 20; };
	class 20Rnd_mas_762x51_T_Stanag 				{ quality = 10; price = 20; };
	class 5Rnd_mas_762x51_Stanag 					{ quality = 10; price = 20; };
	class 5Rnd_mas_762x51_T_Stanag 					{ quality = 10; price = 20; };
	class 10Rnd_mas_338_Stanag 						{ quality = 10; price = 20; };
	class 10Rnd_mas_338_T_Stanag 					{ quality = 10; price = 20; };
	class 30Rnd_mas_762x39_mag 						{ quality = 10; price = 20; };
	class 30Rnd_mas_762x39_T_mag 					{ quality = 10; price = 20; };
	class 10Rnd_mas_762x54_mag 						{ quality = 10; price = 20; };
	class 10Rnd_mas_762x54_T_mag 					{ quality = 10; price = 20; };
	class 5Rnd_mas_127x99_Stanag 					{ quality = 10; price = 20; };
	class 5Rnd_mas_127x99_dem_Stanag 				{ quality = 10; price = 20; };
	class 5Rnd_mas_127x99_T_Stanag 					{ quality = 10; price = 20; };
	class 5Rnd_mas_127x108_mag						{ quality = 10; price = 20; };
	class 5Rnd_mas_127x108_dem_mag 					{ quality = 10; price = 20; };
	class 5Rnd_mas_127x108_T_mag 					{ quality = 10; price = 20; };
	class 30Rnd_mas_9x21_Stanag 					{ quality = 10; price = 20; };
	class 30Rnd_mas_9x21d_Stanag 					{ quality = 10; price = 20; };
	class 12Rnd_mas_45acp_Mag 						{ quality = 10; price = 20; };
	class 10Rnd_mas_45acp_Mag 						{ quality = 10; price = 20; };
	class 8Rnd_mas_45acp_Mag 						{ quality = 10; price = 20; };
	class 15Rnd_mas_9x21_Mag 						{ quality = 10; price = 20; };
	class 17Rnd_mas_9x21_Mag 						{ quality = 10; price = 20; };
	class 13Rnd_mas_9x21_Mag 						{ quality = 10; price = 20; };
	class 8Rnd_mas_9x18_mag							{ quality = 10; price = 20; };
	class 64Rnd_mas_9x18_mag							{ quality = 10; price = 20; };
	class 20Rnd_mas_765x17_Mag							{ quality = 10; price = 20; };
	class 25Rnd_mas_9x19_Mag							{ quality = 10; price = 20; };
	class 40Rnd_mas_46x30_Mag							{ quality = 10; price = 20; };
	class 150Rnd_mas_556x45_Stanag							{ quality = 10; price = 20; };
	class 150Rnd_mas_556x45_T_Stanag							{ quality = 10; price = 20; };
	class 30Rnd_mas_556x45sd_Stanag					{ quality = 10; price = 20; };
	class 30Rnd_mas_545x39sd_mag					{ quality = 10; price = 20; };
	class 20Rnd_mas_762x51sd_Stanag					{ quality = 10; price = 20; };
	class 30Rnd_mas_762x39sd_mag					{ quality = 10; price = 20; };
	class 30Rnd_mas_9x21sd_Stanag					{ quality = 10; price = 20; };
	class 30Rnd_mas_9x39sd_mag						{ quality = 10; price = 20; };
	class 40Rnd_mas_46x30sd_Mag						{ quality = 10; price = 20; };


	///////////////////////////////////////////////////////////////////////////////
	// Flares
	///////////////////////////////////////////////////////////////////////////////
	class Chemlight_blue							{ quality = 1; price = 2; };
	class Chemlight_green							{ quality = 1; price = 2; };
	class Chemlight_red								{ quality = 1; price = 2; };
	class FlareGreen_F								{ quality = 1; price = 6; };
	class FlareRed_F								{ quality = 1; price = 6; };
	class FlareWhite_F								{ quality = 1; price = 6; };
	class FlareYellow_F								{ quality = 1; price = 6; };
	class UGL_FlareGreen_F							{ quality = 2; price = 8; };
	class UGL_FlareRed_F							{ quality = 2; price = 8; };
	class UGL_FlareWhite_F							{ quality = 2; price = 8; };
	class UGL_FlareYellow_F							{ quality = 2; price = 8; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 3; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Smokes
	///////////////////////////////////////////////////////////////////////////////
	class SmokeShell								{ quality = 1; price = 6; };
	class SmokeShellBlue							{ quality = 1; price = 6; };
	class SmokeShellGreen							{ quality = 1; price = 6; };
	class SmokeShellOrange							{ quality = 1; price = 6; };
	class SmokeShellPurple							{ quality = 1; price = 6; };
	class SmokeShellRed								{ quality = 1; price = 6; };
	class SmokeShellYellow							{ quality = 1; price = 6; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 2; price = 8; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 8; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 3; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Explosives
	///////////////////////////////////////////////////////////////////////////////
	class HandGrenade								{ quality = 3; price = 40; };
	class MiniGrenade								{ quality = 2; price = 30; };
	class B_IR_Grenade								{ quality = 1; price = 50; };
	class O_IR_Grenade								{ quality = 1; price = 50; };
	class I_IR_Grenade								{ quality = 1; price = 50; };
	class 1Rnd_HE_Grenade_shell						{ quality = 2; price = 70; };
	class 3Rnd_HE_Grenade_shell						{ quality = 3; price = 70*3; };
	class APERSBoundingMine_Range_Mag				{ quality = 3; price = 500; };
	class APERSMine_Range_Mag						{ quality = 3; price = 600; };
	class APERSTripMine_Wire_Mag					{ quality = 3; price = 300; };
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 3; price = 350; };
	class DemoCharge_Remote_Mag						{ quality = 3; price = 700; };
	class IEDLandBig_Remote_Mag						{ quality = 3; price = 600; };
	class IEDLandSmall_Remote_Mag					{ quality = 3; price = 300; };
	class IEDUrbanBig_Remote_Mag					{ quality = 3; price = 800; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 3; price = 400; };
	class SatchelCharge_Remote_Mag					{ quality = 3; price = 1000; };
	class SLAMDirectionalMine_Wire_Mag				{ quality = 3; price = 700; };

	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
	class hgun_ACPC2_F 								{ quality = 1; price = 50; };
	class hgun_P07_F 								{ quality = 1; price = 50; };
	class hgun_Pistol_heavy_01_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_heavy_02_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_Signal_F 						{ quality = 9000; price = 100; };
	class hgun_Rook40_F 							{ quality = 1; price = 50; };
	class hgun_mas_m9_F								{ quality = 1; price = 50; };
	class hgun_mas_glock_F							{ quality = 1; price = 50; };
	class hgun_mas_p226_F							{ quality = 1; price = 50; };
	class hgun_mas_bhp_F							{ quality = 1; price = 50; };
	class hgun_mas_grach_F							{ quality = 1; price = 50; };
	class hgun_mas_acp_F 							{ quality = 1; price = 50; };
	class hgun_mas_usp_F 							{ quality = 1; price = 50; };
	class hgun_mas_usp_l_F 							{ quality = 1; price = 50; };
	class hgun_mas_glocksf_F 						{ quality = 1; price = 50; };


	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class hgun_PDW2000_F 							{ quality = 1; price = 100; };
	class SMG_01_F 									{ quality = 1; price = 150; };
	class SMG_02_F 									{ quality = 1; price = 150; };
	class arifle_mas_mp5							{ quality = 1; price = 150; };
	class hgun_mas_mp7_F							{ quality = 1; price = 150; };
	class hgun_mas_mp7p_F							{ quality = 1; price = 150; };
	class hgun_mas_uzi_F							{ quality = 1; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MX_SW_Black_F						{ quality = 2; price = 250; };
	class arifle_MX_SW_F							{ quality = 2; price = 250; };
	class LMG_Mk200_F								{ quality = 2; price = 250; };
	class LMG_Zafir_F								{ quality = 2; price = 250; };
	class MMG_01_hex_F								{ quality = 3; price = 250; };
	class MMG_01_tan_F								{ quality = 3; price = 250; };
	class MMG_02_black_F							{ quality = 3; price = 250; };
	class MMG_02_camo_F								{ quality = 3; price = 250; };
	class MMG_02_sand_F								{ quality = 3; price = 250; };
	class LMG_mas_Mk200_F							{ quality = 3; price = 250; };
	class LMG_mas_M249_F							{ quality = 3; price = 250; };
	class LMG_mas_M249_F_v							{ quality = 3; price = 250; };
	class LMG_mas_M249_F_d							{ quality = 3; price = 250; };
	class LMG_mas_Mk48_F							{ quality = 3; price = 250; };
	class LMG_mas_Mk48_F_d							{ quality = 3; price = 250; };
	class LMG_mas_Mk48_F_v							{ quality = 3; price = 250; };
	class LMG_mas_mg3_F								{ quality = 3; price = 250; };
	class LMG_mas_M60_F								{ quality = 3; price = 250; };
	class LMG_mas_rpk_F								{ quality = 3; price = 250; };
	class LMG_mas_pkm_F								{ quality = 3; price = 250; };


	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_Katiba_C_F							{ quality = 1; price = 150; };
	class arifle_Katiba_F							{ quality = 1; price = 150; };
	class arifle_Katiba_GL_F						{ quality = 2; price = 450; };
	class arifle_Mk20_F								{ quality = 1; price = 150; };
	class arifle_Mk20_GL_F							{ quality = 2; price = 450; };
	class arifle_Mk20_GL_plain_F					{ quality = 2; price = 450; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 150; };
	class arifle_Mk20C_F							{ quality = 1; price = 150; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 150; };
	class arifle_MX_Black_F							{ quality = 1; price = 150; };
	class arifle_MX_F								{ quality = 1; price = 150; };
	class arifle_MX_GL_Black_F						{ quality = 2; price = 450; };
	class arifle_MX_GL_F							{ quality = 2; price = 450; };
	class arifle_MXC_Black_F						{ quality = 1; price = 150; };
	class arifle_MXC_F								{ quality = 1; price = 150; };
	class arifle_SDAR_F								{ quality = 3; price = 150; };
	class arifle_TRG20_F							{ quality = 1; price = 150; };
	class arifle_TRG21_F							{ quality = 1; price = 150; };
	class arifle_TRG21_GL_F							{ quality = 2; price = 150; };
	class arifle_mas_hk416 							{ quality = 1; price = 150; };
	class arifle_mas_hk416_gl 							{ quality = 1; price = 150; };
	class arifle_mas_hk416_m203 					{ quality = 1; price = 450; };
	class arifle_mas_hk416_v 						{ quality = 1; price = 150; };
	class arifle_mas_hk416_gl_v						{ quality = 1; price = 450; };
	class arifle_mas_hk416_m203_v  					{ quality = 1; price = 450; };
	class arifle_mas_hk416_d  						{ quality = 1; price = 150; };
	class arifle_mas_hk416_gl_d 					{ quality = 1; price = 450; };
	class arifle_mas_hk416_m203_d 					{ quality = 1; price = 450; };
	class arifle_mas_hk416c 						{ quality = 1; price = 150; };
	class arifle_mas_hk416_m203c 					{ quality = 1; price = 450; };
	class arifle_mas_hk416c_v 						{ quality = 1; price = 150; };
	class arifle_mas_hk416_m203c_v 					{ quality = 1; price = 450; };
	class arifle_mas_hk416c_d 						{ quality = 1; price = 150; };
	class arifle_mas_hk416_m203c_d 					{ quality = 1; price = 450; };
	class arifle_mas_hk417c 						{ quality = 1; price = 150; };
	class arifle_mas_hk417_m203c 					{ quality = 1; price = 450; };
	class arifle_mas_hk417c_v 						{ quality = 1; price = 150; };
	class arifle_mas_hk417_m203c_v 					{ quality = 1; price = 450; };
	class arifle_mas_hk417c_d 						{ quality = 1; price = 150; };
	class arifle_mas_hk417_m203c_d 					{ quality = 1; price = 450; };
	class arifle_mas_m4								{ quality = 1; price = 150; };
	class arifle_mas_m4_gl								{ quality = 1; price = 150; };
	class arifle_mas_m4_m203								{ quality = 1; price = 150; };
	class arifle_mas_m4_v								{ quality = 1; price = 150; };
	class arifle_mas_m4_gl_v								{ quality = 1; price = 150; };
	class arifle_mas_m4_m203_v								{ quality = 1; price = 150; };
	class arifle_mas_m4_d							{ quality = 1; price = 150; };
	class arifle_mas_m4_gl_d							{ quality = 1; price = 150; };
	class arifle_mas_m4_m203_d							{ quality = 1; price = 150; };
	class arifle_mas_m4vlt							{ quality = 1; price = 150; };
	class arifle_mas_m4c							{ quality = 1; price = 150; };
	class arifle_mas_m4_m203c_v							{ quality = 1; price = 150; };
	class arifle_mas_m4c_d							{ quality = 1; price = 150; };
	class arifle_mas_m4_m203c_d							{ quality = 1; price = 150; };
	class arifle_mas_m16							{ quality = 1; price = 150; };
	class arifle_mas_m16_gl							{ quality = 1; price = 150; };
	class arifle_mas_l119							{ quality = 1; price = 150; };
	class arifle_mas_l119c						{ quality = 1; price = 450; };
	class arifle_mas_l119_gl						{ quality = 1; price = 450; };
	class arifle_mas_l119_m203							{ quality = 1; price = 150; };
	class arifle_mas_l119_v						{ quality = 1; price = 150; };
	class arifle_mas_l119c_v						{ quality = 1; price = 450; };
	class arifle_mas_l119_gl_v					{ quality = 1; price = 450; };
	class arifle_mas_l119_m203_v						{ quality = 1; price = 450; };
	class arifle_mas_l119_d					{ quality = 1; price = 450; };
	class arifle_mas_l119c_d							{ quality = 1; price = 150; };
	class arifle_mas_l119_gl_d						{ quality = 1; price = 150; };
	class arifle_mas_l119_m203_d						{ quality = 1; price = 450; };
	class arifle_mas_g36c							{ quality = 1; price = 150; };
	class arifle_mas_mk16							{ quality = 1; price = 150; };
	class arifle_mas_mk16_gl						{ quality = 1; price = 450; };
	class arifle_mas_mk16_l							{ quality = 1; price = 150; };
	class arifle_mas_mk17							{ quality = 1; price = 150; };
	class arifle_mas_mk17_gl						{ quality = 1; price = 450; };
	class arifle_mas_arx							{ quality = 1; price = 150; };
	class arifle_mas_arx_gl							{ quality = 1; price = 450; };
	class arifle_mas_arx_l							{ quality = 1; price = 150; };
	class arifle_mas_arx_l_gl						{ quality = 1; price = 450; };
	class arifle_mas_m14							{ quality = 1; price = 150; };
	class arifle_mas_ak_74m							{ quality = 1; price = 150; };
	class arifle_mas_aks74							{ quality = 1; price = 150; };
	class arifle_mas_ak74							{ quality = 1; price = 150; };
	class arifle_mas_ak_74m_sf						{ quality = 1; price = 150; };
	class arifle_mas_ak_74m_sf_c					{ quality = 1; price = 150; };
	class arifle_mas_aks_74_sf						{ quality = 1; price = 150; };
	class arifle_mas_ak12_sf						{ quality = 1; price = 150; };
	class arifle_mas_akms							{ quality = 1; price = 150; };
	class arifle_mas_akms_c							{ quality = 1; price = 150; };
	class arifle_mas_akm_a							{ quality = 1; price = 150; };
	class arifle_mas_aks74u							{ quality = 1; price = 150; };
	class arifle_mas_aks74u_c						{ quality = 1; price = 150; };
	class arifle_mas_m27							{ quality = 1; price = 150; };
	class arifle_mas_m27_v							{ quality = 1; price = 150; };
	class arifle_mas_m27_d							{ quality = 1; price = 150; };
	class arifle_mas_g3							{ quality = 1; price = 150; };
	class arifle_mas_g3_m203							{ quality = 1; price = 150; };
	class arifle_mas_g3s							{ quality = 1; price = 150; };
	class arifle_mas_g3s_m203							{ quality = 1; price = 150; };
	class arifle_mas_fal							{ quality = 1; price = 150; };
	class arifle_mas_fal_m203							{ quality = 1; price = 150; };
	class arifle_mas_m70							{ quality = 1; price = 150; };
	class arifle_mas_m70_gl							{ quality = 1; price = 150; };
	class arifle_mas_m70ab							{ quality = 1; price = 150; };
	class arifle_mas_m70ab_gl							{ quality = 1; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MXM_Black_F 						{ quality = 1; price = 550; };
	class arifle_MXM_F 								{ quality = 1; price = 550; };
	class srifle_DMR_01_F 							{ quality = 2; price = 600; };
	class srifle_DMR_02_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_02_F 							{ quality = 3; price = 800; };
	class srifle_DMR_02_sniper_F 					{ quality = 3; price = 800; };
	class srifle_DMR_03_F 							{ quality = 3; price = 750; };
	class srifle_DMR_03_khaki_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_multicam_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_tan_F 						{ quality = 3; price = 750; };
	class srifle_DMR_03_woodland_F 					{ quality = 3; price = 750; };
	class srifle_DMR_04_F 							{ quality = 3; price = 700; };
	class srifle_DMR_04_Tan_F 						{ quality = 3; price = 700; };
	class srifle_DMR_05_blk_F 						{ quality = 3; price = 850; };
	class srifle_DMR_05_hex_F 						{ quality = 3; price = 850; };
	class srifle_DMR_05_tan_f 						{ quality = 3; price = 850; };
	class srifle_DMR_06_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_06_olive_F 					{ quality = 3; price = 800; };
	class srifle_EBR_F 								{ quality = 2; price = 700; };
	class srifle_GM6_camo_F 						{ quality = 3; price = 900; };
	class srifle_GM6_F 								{ quality = 3; price = 900; };
	class srifle_LRR_camo_F 						{ quality = 3; price = 850; };
	class srifle_LRR_F 								{ quality = 3; price = 850; };
	class srifle_mas_hk417							{ quality = 1; price = 550; };
	class srifle_mas_hk417_v						{ quality = 1; price = 550; };
	class srifle_mas_hk417_d						{ quality = 1; price = 550; };
	class srifle_mas_sr25							{ quality = 1; price = 550; };
	class srifle_mas_sr25_v							{ quality = 1; price = 550; };
	class srifle_mas_sr25_d							{ quality = 1; price = 550; };
	class srifle_mas_ebr							{ quality = 1; price = 550; };
	class srifle_mas_mk17s							{ quality = 1; price = 550; };
	class srifle_mas_m110							{ quality = 1; price = 1550; };
	class srifle_mas_m107							{ quality = 1; price = 1550; };
	class srifle_mas_m107_v							{ quality = 1; price = 1550; };
	class srifle_mas_m107_d							{ quality = 1; price = 1550; };
	class srifle_mas_m24							{ quality = 1; price = 550; };
	class srifle_mas_m24_v							{ quality = 1; price = 550; };
	class srifle_mas_m24_d							{ quality = 1; price = 550; };
	class srifle_mas_lrr							{ quality = 1; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_OldBike 						{ quality = 1; price = 40; };
	class Exile_Bike_MountainBike 					{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Black					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Blue					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Red					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_White					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Nato					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Csat					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Fia					{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Guerilla01			{ quality = 1; price = 500; };
	class Exile_Bike_QuadBike_Guerilla02			{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// KARTS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_BluKing					{ quality = 1; price = 400; };
	class Exile_Car_Kart_RedStone					{ quality = 1; price = 400; };
	class Exile_Car_Kart_Vrana						{ quality = 1; price = 400; };
	class Exile_Car_Kart_Green						{ quality = 1; price = 400; };
	class Exile_Car_Kart_Blue						{ quality = 1; price = 400; };
	class Exile_Car_Kart_Orange						{ quality = 1; price = 400; };
	class Exile_Car_Kart_White						{ quality = 1; price = 400; };
	class Exile_Car_Kart_Yellow						{ quality = 1; price = 400; };
	class Exile_Car_Kart_Black						{ quality = 1; price = 400; };

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Police				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_Orange				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_White				{ quality = 1; price = 700; };

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_CSAT				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Digital				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Orange				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Blue				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Black				{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_CSAT						{ quality = 1; price = 1000; };
	class Exile_Boat_SDV_Digital					{ quality = 1; price = 1000; };
	class Exile_Boat_SDV_Grey						{ quality = 1; price = 1000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Green				{ quality = 1; price = 7000; };
	class Exile_Chopper_Hellcat_FIA					{ quality = 1; price = 7000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Green			{ quality = 1; price = 6500; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Blue				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Red				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_ION				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_BlueLine			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Digital			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Elliptical		{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Furious			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher		{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Jeans				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Light				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Shadow			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Sheriff			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Speedy			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Sunset			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Vrana				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Wasp				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Wave				{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Black								{ quality = 1; price = 10000; };
	class Exile_Chopper_Huron_Green								{ quality = 1; price = 10000; };

	///////////////////////////////////////////////////////////////////////////////
	// Mohawk
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Mohawk_FIA								{ quality = 1; price = 9000; };

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_CSAT								{ quality = 1; price = 7000; };
	class Exile_Chopper_Orca_Black								{ quality = 1; price = 7000; };
	class Exile_Chopper_Orca_BlackCustom						{ quality = 1; price = 7000; };

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_CSAT						{ quality = 1; price = 8000; };
	class Exile_Chopper_Taru_Transport_Black					{ quality = 1; price = 8000; };

	class Exile_Chopper_Taru_CSAT								{ quality = 1; price = 8200; };
	class Exile_Chopper_Taru_Black								{ quality = 1; price = 8200; };

	class Exile_Chopper_Taru_Covered_CSAT						{ quality = 1; price = 8400; };
	class Exile_Chopper_Taru_Covered_Black						{ quality = 1; price = 8400; };

	///////////////////////////////////////////////////////////////////////////////
	// Cessna
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_Cessna									{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Beige						{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Green						{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Blue						{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_BlueCustom				{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_BeigeCustom				{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Yellow					{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Grey						{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Black						{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Dark						{ quality = 1; price = 1000; };
	class Exile_Car_Hatchback_Rusty1					{ quality = 1; price = 900; };
	class Exile_Car_Hatchback_Rusty2					{ quality = 1; price = 900; };
	class Exile_Car_Hatchback_Rusty3					{ quality = 1; price = 900; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Red					{ quality = 1; price = 1250; };
	class Exile_Car_Hatchback_Sport_Blue				{ quality = 1; price = 1250; };
	class Exile_Car_Hatchback_Sport_Orange				{ quality = 1; price = 1250; };
	class Exile_Car_Hatchback_Sport_White				{ quality = 1; price = 1250; };
	class Exile_Car_Hatchback_Sport_Beige				{ quality = 1; price = 1250; };
	class Exile_Car_Hatchback_Sport_Green				{ quality = 1; price = 1250; };

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HEMMT 								{ quality = 1; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hunter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter 								{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ifrit
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit 								{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Red							{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Beige						{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_White						{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Blue						{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_DarkRed						{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_BlueCustom					{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Guerilla01					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla02					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla03					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla04					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla05					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla06					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla07					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla08					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla09					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla10					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla11					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Guerilla12					{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Rusty1						{ quality = 1; price = 2000; };
	class Exile_Car_Offroad_Rusty2						{ quality = 1; price = 2000; };
	class Exile_Car_Offroad_Rusty3						{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Guerilla01 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla02 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla03 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla04 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla05 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla06 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla07 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla08 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla09 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla10 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla11 			{ quality = 1; price = 5000; };
	class Exile_Car_Offroad_Armed_Guerilla12 			{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Civillian 			{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_Red 					{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_Beige 				{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_White 				{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_Blue 				{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_DarkRed 				{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_BlueCustom 			{ quality = 1; price = 2500; };
	class Exile_Car_Offroad_Repair_Guerilla01 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla02 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla03 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla04 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla05 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla06 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla07 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla08 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla09 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla10 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla11 			{ quality = 1; price = 2700; };
	class Exile_Car_Offroad_Repair_Guerilla12 			{ quality = 1; price = 2700; };

	///////////////////////////////////////////////////////////////////////////////
	// Strider
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Strider 							{ quality = 1; price = 8000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Red 							{ quality = 1; price = 1500; };
	class Exile_Car_SUV_Black 							{ quality = 1; price = 1500; };
	class Exile_Car_SUV_Grey 							{ quality = 1; price = 1500; };
	class Exile_Car_SUV_Orange 							{ quality = 1; price = 1500; };

	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest 							{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Black 							{ quality = 1; price = 2000; };
	class Exile_Car_Van_White 							{ quality = 1; price = 2000; };
	class Exile_Car_Van_Red 							{ quality = 1; price = 2000; };
	class Exile_Car_Van_Guerilla01 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla02 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla03 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla04 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla05 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla06 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla07 						{ quality = 1; price = 2300; };
	class Exile_Car_Van_Guerilla08 						{ quality = 1; price = 2300; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Black 						{ quality = 1; price = 1900; };
	class Exile_Car_Van_Box_White 						{ quality = 1; price = 1900; };
	class Exile_Car_Van_Box_Red 						{ quality = 1; price = 1900; };
	class Exile_Car_Van_Box_Guerilla01 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla02 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla03 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla04 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla05 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla06 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla07 					{ quality = 1; price = 2000; };
	class Exile_Car_Van_Box_Guerilla08 					{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Black 						{ quality = 1; price = 4500; };
	class Exile_Car_Van_Fuel_White 						{ quality = 1; price = 4500; };
	class Exile_Car_Van_Fuel_Red 						{ quality = 1; price = 4500; };
	class Exile_Car_Van_Fuel_Guerilla01 				{ quality = 1; price = 4500; };
	class Exile_Car_Van_Fuel_Guerilla02 				{ quality = 1; price = 4500; };
	class Exile_Car_Van_Fuel_Guerilla03 				{ quality = 1; price = 4500; };

	///////////////////////////////////////////////////////////////////////////////
	// Zamak
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Zamak 								{ quality = 1; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Massi Vehicles
	///////////////////////////////////////////////////////////////////////////////
	class B_mas_usr_Truck_01_covered_F 					{ quality = 1; price = 3000; };
	class B_mas_usr_Truck_01_transport_F 				{ quality = 1; price = 3000; };
	class B_mas_usr_Truck_01_reammo_F 					{ quality = 1; price = 3000; };
	class B_mas_usr_Truck_01_refuel_F 					{ quality = 1; price = 3000; };
	class B_mas_usr_Truck_01_repair_F					{ quality = 1; price = 3000; };
	class B_mas_HMMWV_M2								{ quality = 1; price = 3000; };
	class B_mas_HMMWV_M134 								{ quality = 1; price = 3000; };
	class B_mas_HMMWV_SOV								{ quality = 1; price = 3000; };
	class B_mas_HMMWV_SOV_M134							{ quality = 1; price = 3000; };
	class B_mas_HMMWV_TOW								{ quality = 1; price = 3000; };
	class B_mas_HMMWV_MK19								{ quality = 1; price = 3000; };
	class B_mas_HMMWV_UNA								{ quality = 1; price = 3000; };
	class B_mas_HMMWV_MEV								{ quality = 1; price = 3000; };
	class B_mas_HMMWV_M2_des							{ quality = 1; price = 3000; };
	class B_mas_HMMWV_M134_des							{ quality = 1; price = 3000; };
	class B_mas_HMMWV_SOV_des							{ quality = 1; price = 3000; };
	class B_mas_HMMWV_SOV_M134_des						{ quality = 1; price = 3000; };
	class B_mas_HMMWV_TOW_des							{ quality = 1; price = 3000; };
	class B_mas_HMMWV_MK19_des							{ quality = 1; price = 3000; };
	class B_mas_HMMWV_UNA_des							{ quality = 1; price = 3000; };
	class B_mas_HMMWV_MEV_des							{ quality = 1; price = 3000; };
	class B_mas_cars_Hilux_MG							{ quality = 1; price = 3000; };
	class B_mas_cars_Hilux_AGS30						{ quality = 1; price = 3000; };
	class B_mas_cars_Hilux_SPG9							{ quality = 1; price = 3000; };
	class B_mas_cars_Hilux_RKTS							{ quality = 1; price = 3000; };
	class B_mas_cars_Hilux_Unarmed						{ quality = 1; price = 3000; };
	class B_mas_cars_Hilux_Med							{ quality = 1; price = 3000; };
	class B_mas_cars_Hilux_M2							{ quality = 1; price = 3000; };
	class B_mas_cars_LR_Unarmed							{ quality = 1; price = 3000; };
	class B_mas_cars_LR_Med								{ quality = 1; price = 3000; };
	class B_mas_cars_LR_M2								{ quality = 1; price = 3000; };
	class B_mas_cars_LR_Mk19							{ quality = 1; price = 3000; };
	class B_mas_cars_LR_TOW								{ quality = 1; price = 3000; };
	class B_mas_cars_LR_SPG9							{ quality = 1; price = 3000; };
	class B_mas_usn_Offroad_01_F						{ quality = 1; price = 3000; };
	class B_mas_usn_Offroad_01_armed_F					{ quality = 1; price = 3000; };
	class B_mas_usd_Offroad_01_F						{ quality = 1; price = 3000; };
	class B_mas_usd_Offroad_01_armed_F					{ quality = 1; price = 3000; };
	class B_mas_usd_Offroad_02_F						{ quality = 1; price = 3000; };
	class B_mas_usd_Offroad_02_armed_F					{ quality = 1; price = 3000; };
	class B_mas_usr_MRAP_01_F							{ quality = 1; price = 3000; };
	class B_mas_usr_MRAP_01_med_F						{ quality = 1; price = 3000; };
	class B_mas_usr_MRAP_01_gmg_F						{ quality = 1; price = 3000; };
	class B_mas_usr_MRAP_01_hmg_F						{ quality = 1; price = 3000; };
	class B_mas_usr_HMMWV_M2							{ quality = 1; price = 3000; };
	class B_mas_usr_HMMWV_TOW							{ quality = 1; price = 3000; };
	class B_mas_usr_HMMWV_MK19 							{ quality = 1; price = 3000; };
	class B_mas_usr_HMMWV_UNA 							{ quality = 1; price = 3000; };
	class B_mas_usr_HMMWV_MEV 							{ quality = 1; price = 3000; };
	class B_mas_usr_HMMWV_M134 							{ quality = 1; price = 3000; };
	class B_mas_usr_HMMWV_SOV 							{ quality = 1; price = 3000; };
	class B_mas_usr_HMMWV_SOV_M134 						{ quality = 1; price = 3000; };
	class B_mas_usr_Quadbike_01_F 						{ quality = 1; price = 3000; };
	class B_mas_usr_Quadbike_02_F 						{ quality = 1; price = 3000; };
	class B_mas_usr_Quadbike_03_F 						{ quality = 1; price = 3000; };
	class B_mas_usr_Quadbike_04_F 						{ quality = 1; price = 3000; };
	class B_mas_usr_APC_Wheeled_01_cannon_F				{ quality = 1; price = 3000; };
	class B_mas_usr_Heli_Light_01_F								{ quality = 1; price = 8200; };
	class B_mas_usr_Heli_Light_01_armed_F						{ quality = 1; price = 8200; };
	class B_mas_usr_Heli_Transport_01_F							{ quality = 1; price = 8200; };
	class B_mas_usr_Heli_Med_01_F								{ quality = 1; price = 8200; };
	class B_mas_usr_UH60M										{ quality = 1; price = 8200; };
	class B_mas_usr_UH60M_SF									{ quality = 1; price = 8200; };
	class B_mas_usr_UH60M_MEV									{ quality = 1; price = 8200; };
	class B_mas_usr_CH_47F										{ quality = 1; price = 20000; };
	class B_mas_CH_47F											{ quality = 1; price = 20000; };
	class B_mas_UH1Y_F 											{ quality = 1; price = 8200; };
	class B_mas_UH1Y_UNA_F 										{ quality = 1; price = 8200; };
	class B_mas_UH1Y_MEV_F										{ quality = 1; price = 8200; };
	class B_mas_UH60M 											{ quality = 1; price = 8200; };
	class B_mas_UH60M_SF 										{ quality = 1; price = 8200; };
	class B_mas_UH60M_MEV										{ quality = 1; price = 8200; };
	class mas_F_35C		 										{ quality = 1; price = 40000; };
	class mas_F_35C_S 											{ quality = 1; price = 40000; };
	class mas_F_35C_cas											{ quality = 1; price = 40000; };
	class B_mas_usr_Boat_Transport_01_F 						{ quality = 1; price = 8200; };
	class B_mas_usr_Boat_Armed_01_F								{ quality = 1; price = 8200; };
	class B_mas_usn_SDV_01_F									{ quality = 1; price = 8200; };
};
class CfgExileCustomCode
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgFlags
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uid = "";
	};
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] =
	{
		{5000,	15}, // Level 1
		{10000,	30}, // Level 2
		{15000,	45}, // Level 3
		{20000,	60}, // Level 4
		{25000,	75}, // Level 5
		{30000,	90}, // Level 6
		{35000,	105}, // Level 7
		{40000,	120}, // Level 8
		{45000,	135}, // Level 9
		{50000,	150}  // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 325;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1000;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 1000;

	// Defines the period in days where protection money needs to be payed.
	// Every time you pay the protection money, the "due date" will be
	// pro-longed by that period too.
	protectionPeriod = 21;

	// Amount of pop tabs or respect per object to pay
	popTabAmountPerObject = 10;
	respectAmountPerObject = 5;
};
class CfgTraderCategories
{
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_NikosAgedBody",
			"U_NikosBody",
			"U_Competitor",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_CombatUniform_tshirt",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_blk",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"U_C_HunterBody_grn",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_1",
			"U_BG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_IG_leader",
			"U_I_G_resistanceLeader_F",
			"U_B_FullGhillie_ard",
			"U_B_FullGhillie_lsh",
			"U_B_FullGhillie_sard",
			"U_B_GhillieSuit",
			"U_I_FullGhillie_ard",
			"U_I_FullGhillie_lsh",
			"U_I_FullGhillie_sard",
			"U_I_GhillieSuit",
			"U_O_FullGhillie_ard",
			"U_O_FullGhillie_lsh",
			"U_O_FullGhillie_sard",
			"U_O_GhillieSuit",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit",
			"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls",
			"U_mas_sfod_B_CombatUniform_wood",
			"U_mas_sfod_B_CombatUniform_wood_tshirt",
			"U_mas_sfod_B_CombatUniform_wood_vest",
			"U_mas_sfod_B_CombatUniform_wood_vest1",
			"U_mas_sfod_B_CombatUniform_wood_vest2",
			"U_mas_sfod_B_CombatUniform_wood_vest3",
			"U_mas_sfod_B_CombatUniform_wood_vest4",
			"U_mas_sfod_B_CombatUniform_des",
			"U_mas_sfod_B_CombatUniform_des_tshirt",
			"U_mas_sfod_B_CombatUniform_des_vest",
			"U_mas_sfod_B_CombatUniform_des_vest1",
			"U_mas_sfod_B_CombatUniform_des_vest2",
			"U_mas_usn_B_CombatUniform_mcam",
			"U_mas_usn_B_CombatUniform_mcam_tshirt",
			"U_mas_usn_B_CombatUniform_mcam_vest",
			"U_mas_usn_B_CombatUniform_mcam_vest1",
			"U_mas_usn_B_CombatUniform_mcam_vest2",
			"U_mas_usn_B_CombatUniform_mcam_vest3",
			"U_mas_usn_B_CombatUniform_mcam_vest4",
			"U_mas_usn_B_CombatUniform_veg",
			"U_mas_usn_B_CombatUniform_veg_tshirt",
			"U_mas_usn_B_CombatUniform_veg_vest",
			"U_mas_usn_B_CombatUniform_veg_vest1",
			"U_mas_usn_B_CombatUniform_veg_vest2",
			"U_mas_usn_B_CombatUniform_des",
			"U_mas_usn_B_CombatUniform_des_tshirt",
			"U_mas_usn_B_CombatUniform_des_vest",
			"U_mas_usn_B_CombatUniform_des_vest1",
			"U_mas_usn_B_CombatUniform_des_vest2",
			"U_mas_usn_B_CombatUniform_sage",
			"U_mas_usn_B_CombatUniform_sage_tshirt",
			"U_mas_usn_B_CombatUniform_sage_vest",
			"U_mas_usn_B_CombatUniform_wood",
			"U_mas_usn_B_CombatUniform_wood_tshirt",
			"U_mas_usn_B_CombatUniform_wood_vest",
			"U_mas_usd_B_CombatUniform_mcam",
			"U_mas_usd_B_CombatUniform_mcam_tshirt",
			"U_mas_usd_B_CombatUniform_mcam_vest",
			"U_mas_usd_B_CombatUniform_mcam_vest1",
			"U_mas_usr_B_IndUniform1_o",
			"U_mas_usr_B_IndUniform2_o",
			"U_mas_usr_B_IndUniform1_v",
			"U_mas_usr_B_IndUniform2_v",
			"U_mas_usr_B_IndUniform1_d",
			"U_mas_usr_B_IndUniform2_d",
			"U_mas_usd_B_founiform1_o",
			"U_mas_usd_B_founiform2_o",
			"U_mas_usd_B_founiform3_o",
			"U_mas_usd_B_founiform4_o",
			"U_mas_usd_B_founiform5_o",
			"U_mas_usd_B_founiform6_o",
			"U_mas_usd_B_founiform7_o",
			"U_mas_usd_B_founiform8_o",
			"U_mas_usd_B_founiform9_o",
			"U_mas_usn_B_DEV",
			"U_mas_usn_B_wint",
			"U_mas_usn_B_pilot",
			"U_mas_usn_B_Wetsuit",
			"U_mas_usn_B_GhillieSuit",
			"U_mas_usn_B_GhillieSuit_v",
			"U_mas_usn_B_GhillieSuit_d",
			"U_mas_usn_B_GhillieSuit_w"
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{
			"V_Press_F",
			"V_Rangemaster_belt",
			"V_TacVest_blk",
			"V_TacVest_blk_POLICE",
			"V_TacVest_brn",
			"V_TacVest_camo",
			"V_TacVest_khk",
			"V_TacVest_oli",
			"V_TacVestCamo_khk",
			"V_TacVestIR_blk",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_Chestrig_rgr",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_HarnessOSpec_brn",
			"V_HarnessOSpec_gry",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierGL_blk",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierSpec_blk",
			"V_PlateCarrierSpec_mtp",
			"V_PlateCarrierSpec_rgr",
			"V_mas_usn_Rangemaster_belt",
			"V_mas_usn_BandollierB_rgr",
			"V_mas_usn_PlateCarrier1_rgr",
			"V_mas_usn_PlateCarrier2_rgr",
			"V_mas_usn_PlateCarrierGL_rgr",
			"V_mas_usn_ChestrigB_rgr",
			"V_mas_usr_BandollierB_rgr_m",
			"V_mas_usr_PlateCarrier1_rgr_m",
			"V_mas_usr_PlateCarrier2_rgr_m",
			"V_mas_usn_Rangemaster_belt_d",
			"V_mas_usn_BandollierB_rgr_d",
			"V_mas_usn_PlateCarrier1_rgr_d",
			"V_mas_usn_PlateCarrier2_rgr_d",
			"V_mas_usn_PlateCarrierGL_rgr_d",
			"V_mas_usn_ChestrigB_rgr_d",
			"V_mas_usn_Rangemaster_belt_v",
			"V_mas_usn_BandollierB_rgr_v",
			"V_mas_usn_PlateCarrier1_rgr_v",
			"V_mas_usn_PlateCarrier2_rgr_v",
			"V_mas_usn_PlateCarrierGL_rgr_v",
			"V_mas_usn_ChestrigB_rgr_v",
			"V_mas_usn_Rangemaster_belt_g",
			"V_mas_usn_BandollierB_rgr_g",
			"V_mas_usn_PlateCarrier1_rgr_g",
			"V_mas_usn_PlateCarrier2_rgr_g",
			"V_mas_usn_PlateCarrierGL_rgr_g",
			"V_mas_usn_ChestrigB_rgr_g",
			"V_mas_usn_PlateCarrier1_rgr_w",
			"V_mas_usn_ChestrigB_rgr_w",
			"V_mas_usr_Rangemaster_belt",
			"V_mas_usr_BandollierB_rgr",
			"V_mas_usr_PlateCarrier1_rgr",
			"V_mas_usr_PlateCarrier2_rgr",
			"V_mas_usr_PlateCarrierGL_rgr",
			"V_mas_usr_ChestrigB_rgr",
			"V_mas_usr_Rangemaster_belt_d",
			"V_mas_usr_BandollierB_rgr_d",
			"V_mas_usr_PlateCarrier1_rgr_d",
			"V_mas_usr_PlateCarrier2_rgr_d",
			"V_mas_usr_PlateCarrierGL_rgr_d",
			"V_mas_usr_ChestrigB_rgr_d",
			"V_mas_usr_Rangemaster_belt_g",
			"V_mas_usr_BandollierB_rgr_g",
			"V_mas_usr_PlateCarrier1_rgr_g",
			"V_mas_usr_PlateCarrier2_rgr_g",
			"V_mas_usr_PlateCarrierGL_rgr_g",
			"V_mas_usr_ChestrigB_rgr_g",
			"V_mas_usn_TacVest_p",
			"V_mas_usn_TacVest_g"
		};
	};

	class Headgear
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_sgg",
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_oucamo",
			"H_MilCap_rucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_dirty",
			"H_Booniehat_grn",
			"H_Booniehat_indp",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_blk_POLICE",
			"H_Beret_brn_SF",
			"H_Beret_Colonel",
			"H_Beret_grn",
			"H_Beret_grn_SF",
			"H_Beret_ocamo",
			"H_Beret_red",
			"H_Shemag_khk",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_Shemag_tan",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan",
			"H_TurbanO_blk",
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_paint",
			"H_HelmetB_plain_blk",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetIA_camo",
			"H_HelmetIA_net",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_HelmetCrew_I",
			"H_HelmetCrew_B",
			"H_HelmetCrew_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O",
			"H_mas_usn_PilotHelmetHeli_B",
			"H_mas_usn_CrewHelmetHeli_B",
			"H_mas_usn_CrewHelmet_B",
			"H_mas_usn_off",
			"H_mas_usn_off_v",
			"H_mas_usn_off_d",
			"H_mas_usn_off_g",
			"H_mas_usr_off",
			"H_mas_usr_off_v",
			"H_mas_usr_off_d",
			"H_mas_usr_off_g",
			"H_mas_usr_beret",
			"H_mas_sfod_beret",
			"H_mas_usn_MilCap_mcamo",
			"H_mas_usn_MilCap_mcamo_v",
			"H_mas_usn_MilCap_mcamo_d",
			"H_mas_usn_Cap",
			"H_mas_usn_Cap_headphones",
			"H_mas_usn_Cap_headphones_d",
			"H_mas_usn_Cap_headphones_v",
			"H_mas_usn_Cap_headphones_w",
			"H_mas_usn_Cap_headphones_g",
			"H_mas_usn_Woolhat",
			"H_mas_usn_Woolhat_c",
			"H_mas_usn_Woolhat_w",
			"H_mas_usn_woolhat_ht",
			"H_mas_usn_woolhat_ht_w",
			"H_mas_usn_Booniehat_mul",
			"H_mas_usd_Booniehat_mul",
			"H_mas_usd_Booniehat_tan",
			"H_mas_usn_Booniehat_rgr",
			"H_mas_usn_Booniehat_des",
			"H_mas_usr_Booniehat_rgr",
			"H_mas_usr_Booniehat_des",
			"H_mas_usn_revcapheadset_b",
			"H_mas_usn_revcapheadset_v",
			"H_mas_usn_bandana",
			"H_mas_usn_bandana_ht",
			"H_mas_usn_helmet_mich_sf",
			"H_mas_usn_helmet_mich_sf_g",
			"H_mas_usn_helmet_mich_sf_m",
			"H_mas_usn_helmet_mich_sf_w",
			"H_mas_usn_helmet_mich_sf_b",
			"H_mas_usn_helmet_mich_sf_gog",
			"H_mas_usn_helmet_mich_sf_gog_g",
			"H_mas_usn_helmet_mich_sf_gog_m",
			"H_mas_usn_helmet_mich_sf_gog_w",
			"H_mas_usn_helmet_mich_sf_gog_b",
			"H_mas_usn_helmet_mich_sf_h",
			"H_mas_usn_helmet_mich_sf_h_g",
			"H_mas_usn_helmet_mich_sf_h_m",
			"H_mas_usn_helmet_mich_sf_h_w",
			"H_mas_usn_helmet_mich_sf_h_b",
			"H_mas_usn_helmet_ops_sf",
			"H_mas_usn_helmet_ops_sf_b",
			"H_mas_usn_helmet_ops_sf_g",
			"H_mas_usn_helmet_ops_sf_d",
			"H_mas_usn_helmet_ops_sf_w",
			"H_mas_usn_helmet_ops_sf_e",
			"H_mas_usn_helmet_ops_sf_v",
			"H_mas_usn_helmet_ops_sf_m",
			"H_mas_usn_helmet_ops_sf_z",
			"H_mas_usn_helmet_ops_sf_gog",
			"H_mas_usn_helmet_ops_sf_gog_b",
			"H_mas_usn_helmet_ops_sf_gog_g",
			"H_mas_usn_helmet_ops_sf_gog_d",
			"H_mas_usn_helmet_ops_sf_gog_w",
			"H_mas_usn_helmet_ops_sf_gog_e",
			"H_mas_usn_helmet_ops_sf_gog_v",
			"H_mas_usn_helmet_ops_sf_gog_m",
			"H_mas_usn_helmet_ops_sf_gog_z",
			"H_mas_usn_helmet_ops_sf_h",
			"H_mas_usn_helmet_ops_sf_h_b",
			"H_mas_usn_helmet_ops_sf_h_g",
			"H_mas_usn_helmet_ops_sf_h_d",
			"H_mas_usn_helmet_ops_sf_h_w",
			"H_mas_usn_helmet_ops_sf_h_e",
			"H_mas_usn_helmet_ops_sf_h_v",
			"H_mas_usn_helmet_ops_sf_h_m",
			"H_mas_usn_helmet_ops_sf_h_z",
			"G_mas_wpn_gog",
			"G_mas_wpn_gog_d",
			"G_mas_wpn_gog_m",
			"G_mas_wpn_gog_md",
			"G_mas_wpn_gog_g",
			"G_mas_wpn_gog_gd",
			"G_mas_wpn_mask",
			"G_mas_wpn_mask_b",
			"G_mas_wpn_wrap",
			"G_mas_wpn_wrap_f",
			"G_mas_wpn_wrap_t",
			"G_mas_wpn_wrap_b",
			"G_mas_wpn_wrap_c",
			"G_mas_wpn_wrap_g",
			"G_mas_wpn_wrap_gog",
			"G_mas_wpn_wrap_gog_f",
			"G_mas_wpn_wrap_gog_t",
			"G_mas_wpn_wrap_gog_b",
			"G_mas_wpn_wrap_gog_c",
			"G_mas_wpn_wrap_gog_g",
			"G_mas_wpn_wrap_mask",
			"G_mas_wpn_wrap_mask_t",
			"G_mas_wpn_wrap_mask_f",
			"G_mas_wpn_wrap_mask_b",
			"G_mas_wpn_wrap_mask_c",
			"G_mas_wpn_wrap_mask_g",
			"G_mas_wpn_bala",
			"G_mas_wpn_bala_b",
			"G_mas_wpn_bala_t",
			"G_mas_wpn_bala_gog",
			"G_mas_wpn_bala_gog_b",
			"G_mas_wpn_bala_gog_t",
			"G_mas_wpn_bala_mask",
			"G_mas_wpn_bala_mask_b",
			"G_mas_wpn_bala_mask_t",
			"G_mas_wpn_shemag",
			"G_mas_wpn_shemag_r",
			"G_mas_wpn_shemag_w",
			"G_mas_wpn_shemag_gog",
			"G_mas_wpn_shemag_mask"
		};
	};


	class PointerAttachments
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"acc_flashlight",
			"acc_pointer_IR",
			"acc_mas_flash_gun",
			"acc_mas_pointer_gun_IR",
			"acc_mas_pointer_IR",
			"acc_mas_pointer_IR_b",
			"acc_mas_pointer_IR_top",
			"acc_mas_pointer_IR_top_b",
			"acc_mas_pointer_IR2",
			"acc_mas_pointer_IR2_top",
			"acc_mas_pointer_IR2c",
			"acc_mas_pointer_IR2c_top"
		};
	};

	class BipodAttachments
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] =
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli"
		};
	};

	class MuzzleAttachments
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] =
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M",
			"muzzle_mas_snds_L",
			"muzzle_mas_snds_LM",
			"muzzle_mas_snds_C",
			"muzzle_mas_snds_MP5SD6",
			"muzzle_mas_snds_M",
			"muzzle_mas_snds_Mc",
			"muzzle_mas_snds_MP7",
			"muzzle_mas_snds_AK",
			"muzzle_mas_snds_SM",
			"muzzle_mas_snds_SMc",
			"muzzle_mas_snds_SH",
			"muzzle_mas_snds_SHc",
			"muzzle_mas_snds_SV",
			"muzzle_mas_snds_SVc",
			"muzzle_mas_snds_SVD",
			"muzzle_mas_snds_KSVK"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] =
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"O_HMG_01_support_F",
			//"O_HMG_01_support_high_F", // Does not seem to work with HMG01, only the lower version does
			"O_HMG_01_weapon_F"
		};
	};

	class OpticAttachments
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] =
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			"optic_tws",
			"optic_tws_mg",
			"optic_Yorris",
			"optic_mas_DMS",
			"optic_mas_DMS_c",
			"optic_mas_Holosight_blk",
			"optic_mas_Holosight_camo",
			"optic_mas_Arco_blk",
			"optic_mas_Arco_camo",
			"optic_mas_Hamr_camo",
			"optic_mas_Aco_camo",
			"optic_mas_ACO_grn_camo",
			"optic_mas_MRCO_camo",
			"optic_mas_zeiss",
			"optic_mas_zeiss_c",
			"optic_mas_zeiss_eo",
			"optic_mas_zeiss_eo_c",
			"optic_mas_acog",
			"optic_mas_acog_c",
			"optic_mas_acog_eo",
			"optic_mas_acog_eo_c",
			"optic_mas_acog_rd",
			"optic_mas_acog_rd_c",
			"optic_mas_handle",
			"optic_mas_aim",
			"optic_mas_aim_c",
			"optic_mas_PSO",
			"optic_mas_PSO_c",
			"optic_mas_PSO_eo",
			"optic_mas_PSO_eo_c",
			"optic_mas_PSO_nv",
			"optic_mas_PSO_nv_c",
			"optic_mas_PSO_nv_eo",
			"optic_mas_PSO_nv_eo_c",
			"optic_mas_PSO_day",
			"optic_mas_PSO_nv_day",
			"optic_mas_term",
			"optic_mas_MRD",
			"optic_mas_LRPS",
			"optic_mas_kobra",
			"optic_mas_kobra_c",
			"optic_mas_nspu",
			"optic_mas_goshawk",
			"optic_mas_PSO_kv",
			"optic_mas_PSO_kv_c"
		};
	};

	class Hardware
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_Rope",
			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_SafeKit",
			"Exile_Item_CamoTentKit",
			"Exile_Item_CodeLock"
		};
	};

	class Food
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_SausageGravy",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_Surstromming",
			"Exile_Item_Catfood"
		};
	};

	class Drinks
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Beer",
			"Exile_Item_Energydrink"
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Binocular",
			"Rangefinder",
			"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"NVGoggles_mas_h",
			"Rangefinder_mas_h",
			"Laserdesignator_mas_h"
		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_InstaDoc"
		};
	};
	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"B_Parachute",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR"
		};
	};

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] =
		{
			"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_Bergen_blk",
			"B_Bergen_mcamo",
			"B_Bergen_rgr",
			"B_Bergen_sgg",
			"B_Carryall_cbr",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Carryall_oucamo",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_oucamo",
			"B_HuntingBackpack",
			"B_Kitbag_cbr",
			"B_Kitbag_mcamo",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_tan",
			"B_TacticalPack_blk",
			"B_TacticalPack_mcamo",
			"B_TacticalPack_ocamo",
			"B_TacticalPack_oli",
			"B_TacticalPack_rgr",
			"B_mas_m_Bergen_us",
			"B_mas_m_Bergen_us_g",
			"B_mas_m_Bergen_us_m",
			"B_mas_m_Bergen_us_b",
			"B_mas_m_Bergen_us_w",
			"B_mas_m_Bergen_acr",
			"B_mas_m_Bergen_acr_c",
			"B_mas_m_Bergen_acr_g",
			"B_mas_m_Bergen_acr_w",
			"B_mas_m_Bergen_rpg",
			"B_mas_m_Bergen_rpg_b",
			"B_mas_m_Bergen_al",
			"B_mas_AssaultPack_mul",
			"B_mas_Kitbag_mul",
			"B_mas_Bergen_mul",
			"B_mas_AssaultPack_mul_ammo",
			"B_mas_AssaultPack_mul_ammo_MG",
			"B_mas_AssaultPack_mul_Medic",
			"B_mas_AssaultPack_mul_AA",
			"B_mas_AssaultPack_mul_AT",
			"B_mas_AssaultPack_mul_AT4",
			"B_mas_AssaultPack_mul_m72",
			"B_mas_AssaultPack_mul_MAAWS",
			"B_mas_AssaultPack_mul_SMAW",
			"B_mas_AssaultPack_mul_ATM",
			"B_mas_AssaultPack_mul_Repair",
			"B_mas_Bergen_mul_Exp",
			"B_mas_AssaultPack_des",
			"B_mas_Kitbag_des",
			"B_mas_Bergen_des",
			"B_mas_AssaultPack_des_Medic",
			"B_mas_AssaultPack_des_AA",
			"B_mas_AssaultPack_des_AT",
			"B_mas_AssaultPack_des_AT4",
			"B_mas_AssaultPack_des_m72",
			"B_mas_AssaultPack_des_MAAWS",
			"B_mas_AssaultPack_des_SMAW",
			"B_mas_AssaultPack_des_ATM",
			"B_mas_AssaultPack_des_Repair",
			"B_mas_Bergen_des_Exp",
			"B_mas_AssaultPack_black",
			"B_mas_Kitbag_black",
			"B_mas_Bergen_black",
			"B_mas_AssaultPack_black_Medic",
			"B_mas_AssaultPack_black_AA",
			"B_mas_AssaultPack_black_AT",
			"B_mas_AssaultPack_black_AT4",
			"B_mas_AssaultPack_black_m72",
			"B_mas_AssaultPack_black_MAAWS",
			"B_mas_AssaultPack_black_SMAW",
			"B_mas_AssaultPack_black_ATM",
			"B_mas_AssaultPack_black_Repair",
			"B_mas_Bergen_black_Exp",
			"B_mas_AssaultPack_rng",
			"B_mas_Kitbag_rng",
			"B_mas_Bergen_rng",
			"B_mas_AssaultPack_rng_Medic",
			"B_mas_AssaultPack_rng_AA",
			"B_mas_AssaultPack_rng_AT",
			"B_mas_AssaultPack_rng_AT4",
			"B_mas_AssaultPack_rng_m72",
			"B_mas_AssaultPack_rng_MAAWS",
			"B_mas_AssaultPack_rng_SMAW",
			"B_mas_AssaultPack_rng_ATM",
			"B_mas_AssaultPack_rng_Repair",
			"B_mas_Bergen_rng_Exp"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			"130Rnd_338_Mag",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			"150Rnd_93x64_Mag",
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag",
			"200Rnd_mas_556x45_Stanag",
			"200Rnd_mas_556x45_T_Stanag",
			"100Rnd_mas_762x51_Stanag",
			"100Rnd_mas_762x51_T_Stanag",
			"100Rnd_mas_762x54_mag",
			"100Rnd_mas_762x54_T_mag",
			"100Rnd_mas_762x39_mag",
			"100Rnd_mas_762x39_T_mag",
			"30Rnd_mas_545x39_mag",
			"30Rnd_mas_545x39_T_mag",
			"100Rnd_mas_545x39_mag",
			"100Rnd_mas_545x39_T_mag",
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag",
			"5Rnd_mas_762x51_Stanag",
			"5Rnd_mas_762x51_T_Stanag",
			"10Rnd_mas_338_Stanag",
			"10Rnd_mas_338_T_Stanag",
			"30Rnd_mas_762x39_mag",
			"30Rnd_mas_762x39_T_mag",
			"10Rnd_mas_762x54_mag",
			"10Rnd_mas_762x54_T_mag",
			"5Rnd_mas_127x99_Stanag",
			"5Rnd_mas_127x99_dem_Stanag",
			"5Rnd_mas_127x99_T_Stanag",
			"5Rnd_mas_127x108_mag",
			"5Rnd_mas_127x108_dem_mag",
			"5Rnd_mas_127x108_T_mag",
			"30Rnd_mas_9x21_Stanag",
			"30Rnd_mas_9x21d_Stanag",
			"12Rnd_mas_45acp_Mag",
			"10Rnd_mas_45acp_Mag",
			"8Rnd_mas_45acp_Mag",
			"15Rnd_mas_9x21_Mag",
			"17Rnd_mas_9x21_Mag",
			"13Rnd_mas_9x21_Mag",
			"8Rnd_mas_9x18_mag",
			"64Rnd_mas_9x18_mag",
			"20Rnd_mas_765x17_Mag",
			"25Rnd_mas_9x19_Mag",
			"40Rnd_mas_46x30_Mag",
			"150Rnd_mas_556x45_Stanag",
			"150Rnd_mas_556x45_T_Stanag",
			"30Rnd_mas_556x45sd_Stanag",
			"30Rnd_mas_545x39sd_mag",
			"20Rnd_mas_762x51sd_Stanag",
			"30Rnd_mas_762x39sd_mag",
			"30Rnd_mas_9x21sd_Stanag",
			"30Rnd_mas_9x39sd_mag",
			"40Rnd_mas_46x30sd_Mag"
		};
	};

	class Flares
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] =
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag"
		};
	};

	class Pistols
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] =
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F",
			"hgun_mas_m9_F",
			"hgun_mas_glock_F",
			"hgun_mas_p226_F",
			"hgun_mas_bhp_F",
			"hgun_mas_grach_F",
			"hgun_mas_acp_F",
			"hgun_mas_usp_F",
			"hgun_mas_usp_l_F",
			"hgun_mas_glocksf_F",

		};
	};

	class SubMachineGuns
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F",
			"arifle_mas_mp5",
			"hgun_mas_mp7_F",
			"hgun_mas_mp7p_F",
			"hgun_mas_uzi_F"
		};
	};

	class LightMachineGuns
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F",
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_black_F",
			"MMG_02_camo_F",
			"MMG_02_sand_F",
			"LMG_mas_Mk200_F",
			"LMG_mas_M249_F",
			"LMG_mas_M249_F_v",
			"LMG_mas_M249_F_d",
			"LMG_mas_Mk48_F",
			"LMG_mas_Mk48_F_v",
			"LMG_mas_Mk48_F_d",
			"LMG_mas_M60_F",
			"LMG_mas_mg3_F",
			"LMG_mas_rpk_F",
			"LMG_mas_pkm_F"
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F",
			"arifle_mas_hk416",
			"arifle_mas_hk416_gl",
			"arifle_mas_hk416_m203",
			"arifle_mas_hk416_v",
			"arifle_mas_hk416_gl_v",
			"arifle_mas_hk416_m203_v",
			"arifle_mas_hk416_d",
			"arifle_mas_hk416_gl_d",
			"arifle_mas_hk416_m203_d",
			"arifle_mas_hk416c",
			"arifle_mas_hk416_m203c",
			"arifle_mas_hk416c_v",
			"arifle_mas_hk416_m203c_v",
			"arifle_mas_hk416c_d",
			"arifle_mas_hk416_m203c_d",
			"arifle_mas_hk417c",
			"arifle_mas_hk417_m203c",
			"arifle_mas_hk417c_v",
			"arifle_mas_hk417_m203c_v",
			"arifle_mas_hk417c_d",
			"arifle_mas_ak_74m",
			"arifle_mas_aks74",
			"arifle_mas_ak74",
			"arifle_mas_ak_74m_sf",
			"arifle_mas_ak_74m_sf_c",
			"arifle_mas_aks_74_sf",
			"arifle_mas_ak12_sf",
			"arifle_mas_akms",
			"arifle_mas_akms_c",
			"arifle_mas_akm_a",
			"arifle_mas_aks74u",
			"arifle_mas_aks74u_c",
			"arifle_mas_m27",
			"arifle_mas_m27_v",
			"arifle_mas_m27_d",
			"arifle_mas_m4",
			"arifle_mas_m4_gl",
			"arifle_mas_m4_m203",
			"arifle_mas_m4_v",
			"arifle_mas_m4_gl_v",
			"arifle_mas_m4_m203_v",
			"arifle_mas_m4_d",
			"arifle_mas_m4_gl_d",
			"arifle_mas_m4_m203_d",
			"arifle_mas_m4vlt",
			"arifle_mas_m4c",
			"arifle_mas_m4_m203c",
			"arifle_mas_m4c_v",
			"arifle_mas_m4_m203c_v",
			"arifle_mas_m4c_d",
			"arifle_mas_m4_m203c_d",
			"arifle_mas_m16",
			"arifle_mas_m16_gl",
			"arifle_mas_l119",
			"arifle_mas_l119c",
			"arifle_mas_l119_gl",
			"arifle_mas_l119_m203",
			"arifle_mas_l119_v",
			"arifle_mas_l119c_v",
			"arifle_mas_l119_gl_v",
			"arifle_mas_l119_m203_v",
			"arifle_mas_l119_d",
			"arifle_mas_l119c_d",
			"arifle_mas_l119_gl_d",
			"arifle_mas_l119_m203_d",
			"arifle_mas_g36c",
			"arifle_mas_mk16",
			"arifle_mas_mk16_gl",
			"arifle_mas_mk16_l",
			"arifle_mas_mk17",
			"arifle_mas_mk17_gl",
			"arifle_mas_arx",
			"arifle_mas_arx_gl",
			"arifle_mas_arx_l",
			"arifle_mas_arx_l_gl",
			"arifle_mas_g3",
			"arifle_mas_g3_m203",
			"arifle_mas_g3s",
			"arifle_mas_g3s_m203",
			"arifle_mas_fal",
			"arifle_mas_fal_m203",
			"arifle_mas_m14",
			"arifle_mas_m70",
			"arifle_mas_m70_gl",
			"arifle_mas_m70ab",
			"arifle_mas_m70ab_gl"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F",
			"srifle_mas_hk417",
			"srifle_mas_hk417_v",
			"srifle_mas_hk417_d",
			"srifle_mas_sr25",
			"srifle_mas_sr25_v",
			"srifle_mas_sr25_d",
			"srifle_mas_ebr",
			"srifle_mas_mk17s",
			"srifle_mas_m110",
			"srifle_mas_m107",
			"srifle_mas_m107_v",
			"srifle_mas_m107_d",
			"srifle_mas_m24",
			"srifle_mas_m24_v",
			"srifle_mas_m24_d",
			"srifle_mas_lrr"
		};
	};

	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike"
		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Car_Kart_Black",
			"Exile_Bike_QuadBike_Black",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Offroad_Repair_Civillian",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_Strider",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit",
			"B_mas_HMMWV_M2",
			"B_mas_HMMWV_M134",
			"B_mas_HMMWV_SOV",
			"B_mas_HMMWV_SOV_M134",
			"B_mas_HMMWV_TOW",
			"B_mas_HMMWV_MK19",
			"B_mas_HMMWV_UNA",
			"B_mas_HMMWV_MEV",
			"B_mas_HMMWV_M2_des",
			"B_mas_HMMWV_M134_des",
			"B_mas_HMMWV_SOV_des",
			"B_mas_HMMWV_SOV_M134_des",
			"B_mas_HMMWV_TOW_des",
			"B_mas_HMMWV_MK19_des",
			"B_mas_HMMWV_UNA_des",
			"B_mas_HMMWV_MEV_des",
			"B_mas_cars_Hilux_MG",
			"B_mas_cars_Hilux_AGS30",
			"B_mas_cars_Hilux_SPG9",
			"B_mas_cars_Hilux_RKTS",
			"B_mas_cars_Hilux_Unarmed",
			"B_mas_cars_Hilux_Med",
			"B_mas_cars_Hilux_M2",
			"B_mas_cars_LR_Unarmed",
			"B_mas_cars_LR_Med",
			"B_mas_cars_LR_M2",
			"B_mas_cars_LR_Mk19",
			"B_mas_cars_LR_TOW",
			"B_mas_cars_LR_SPG9",
			"B_mas_usn_Offroad_01_F",
			"B_mas_usn_Offroad_01_armed_F",
			"B_mas_usd_Offroad_01_F",
			"B_mas_usd_Offroad_01_armed_F",
			"B_mas_usd_Offroad_02_F",
			"B_mas_usd_Offroad_02_armed_F",
			"B_mas_usr_MRAP_01_F",
			"B_mas_usr_MRAP_01_med_F",
			"B_mas_usr_MRAP_01_gmg_F",
			"B_mas_usr_MRAP_01_hmg_F",
			"B_mas_usr_HMMWV_M2",
			"B_mas_usr_HMMWV_TOW",
			"B_mas_usr_HMMWV_MK19",
			"B_mas_usr_HMMWV_UNA",
			"B_mas_usr_HMMWV_MEV",
			"B_mas_usr_HMMWV_M134",
			"B_mas_usr_HMMWV_SOV",
			"B_mas_usr_HMMWV_SOV_M134",
			"B_mas_usr_Quadbike_01_F",
			"B_mas_usr_Quadbike_02_F",
			"B_mas_usr_Quadbike_03_F",
			"B_mas_usr_Quadbike_04_F",
			"B_mas_usr_APC_Wheeled_01_cannon_F"
		};
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"B_mas_usr_Truck_01_covered_F",
			"B_mas_usr_Truck_01_transport_F",
			"B_mas_usr_Truck_01_reammo_F",
			"B_mas_usr_Truck_01_refuel_F",
			"B_mas_usr_Truck_01_repair_F"
		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Orca_BlackCustom",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Hellcat_Green",
			"B_mas_usr_Heli_Light_01_F",
			"B_mas_usr_Heli_Light_01_armed_F",
			"B_mas_usr_Heli_Transport_01_F",
			"B_mas_usr_Heli_Med_01_F",
			"B_mas_usr_UH60M",
			"B_mas_usr_UH60M_SF",
			"B_mas_usr_UH60M_MEV",
			"B_mas_usr_CH_47F",
			"B_mas_CH_47F",
			"B_mas_UH1Y_F",
			"B_mas_UH1Y_UNA_F",
			"B_mas_UH1Y_MEV_F",
			"B_mas_UH60M",
			"B_mas_UH60M_SF",
			"B_mas_UH60M_MEV"
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey",
			"B_mas_usr_Boat_Transport_01_F",
			"B_mas_usr_Boat_Armed_01_F",
			"B_mas_usn_SDV_01_F"
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Plane_Cessna",
			"mas_F_35C",
			"mas_F_35C_S",
			"mas_F_35C_cas"
		};
	};
};

class CfgTraders
{
	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] =
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] =
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"Navigation"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] =
		{
			"Headgear",
			"Uniforms",
			"Vests",
			"Backpacks",
			"Tools",
			"FirstAid"
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] =
		{
			"Food",
			"Drinks"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] =
		{
			"Hardware"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] =
		{
			"Cars",
			"Trucks"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] =
		{
			"Choppers",
			"Planes"
		};
	};

	/**
	 * Sells ships and boats
	 */
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] =
		{
			"Boats"
		};
	};

	/**
	 * Sells Community Items
	 */
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community"
		};
	};

};
class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] =
		{
			{"Exile_Bike_QuadBike_Black",		100},
			{"Exile_Bike_QuadBike_Blue",		100},
			{"Exile_Bike_QuadBike_Red",			100},
			{"Exile_Bike_QuadBike_White",		100},
			{"Exile_Bike_QuadBike_Nato",		150},
			{"Exile_Bike_QuadBike_Csat",		150},
			{"Exile_Bike_QuadBike_Fia",			150},
			{"Exile_Bike_QuadBike_Guerilla01",	150},
			{"Exile_Bike_QuadBike_Guerilla02",	150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_MotorBoat_Police",		350},
			{"Exile_Boat_MotorBoat_Orange",		300},
			{"Exile_Boat_MotorBoat_White",		300}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_RubberDuck_CSAT",		200},
			{"Exile_Boat_RubberDuck_Digital",	200},
			{"Exile_Boat_RubberDuck_Orange",	150},
			{"Exile_Boat_RubberDuck_Blue",		150},
			{"Exile_Boat_RubberDuck_Black",		150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_SDV_CSAT",		200},
			{"Exile_Boat_SDV_Digital",	200},
			{"Exile_Boat_SDV_Grey",		100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hellcat_Green", 350},
			{"Exile_Chopper_Hellcat_FIA", 	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Kart_BluKing", 				100},
			{"Exile_Car_Kart_RedStone", 			100},
			{"Exile_Car_Kart_Vrana", 				100},
			{"Exile_Car_Kart_Green", 				100},
			{"Exile_Car_Kart_Blue", 				100},
			{"Exile_Car_Kart_Orange", 				100},
			{"Exile_Car_Kart_White", 				100},
			{"Exile_Car_Kart_Yellow", 				100},
			{"Exile_Car_Kart_Black", 				100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huron_Black", 	450},
			{"Exile_Chopper_Huron_Green", 	450}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Orca_CSAT", 		350},
			{"Exile_Chopper_Orca_Black", 		350},
			{"Exile_Chopper_Orca_BlackCustom", 	350}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_CSAT",		500},
			{"Exile_Chopper_Taru_Black",	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500},
			{"Exile_Chopper_Taru_Transport_Black",	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500},
			{"Exile_Chopper_Taru_Covered_Black",	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Rusty1", 			50},
			{"Exile_Car_Hatchback_Rusty2", 			50},
			{"Exile_Car_Hatchback_Rusty3", 			50},
			{"Exile_Car_Hatchback_Beige", 			100},
			{"Exile_Car_Hatchback_Green", 			100},
			{"Exile_Car_Hatchback_Blue", 			100},
			{"Exile_Car_Hatchback_BlueCustom", 		100},
			{"Exile_Car_Hatchback_BeigeCustom", 	100},
			{"Exile_Car_Hatchback_Yellow", 			100},
			{"Exile_Car_Hatchback_Grey", 			100},
			{"Exile_Car_Hatchback_Black", 			100},
			{"Exile_Car_Hatchback_Dark", 			100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100},
			{"Exile_Car_Hatchback_Sport_Blue", 		100},
			{"Exile_Car_Hatchback_Sport_Orange", 	100},
			{"Exile_Car_Hatchback_Sport_White", 	100},
			{"Exile_Car_Hatchback_Sport_Beige", 	100},
			{"Exile_Car_Hatchback_Sport_Green", 	100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Rusty1", 		50},
			{"Exile_Car_Offroad_Rusty2", 		50},
			{"Exile_Car_Offroad_Rusty3", 		50},
			{"Exile_Car_Offroad_Red", 			500},
			{"Exile_Car_Offroad_Beige", 		500},
			{"Exile_Car_Offroad_White", 		500},
			{"Exile_Car_Offroad_Blue", 			500},
			{"Exile_Car_Offroad_DarkRed", 		500},
			{"Exile_Car_Offroad_BlueCustom", 	500},
			{"Exile_Car_Offroad_Guerilla01", 	700},
			{"Exile_Car_Offroad_Guerilla02", 	700},
			{"Exile_Car_Offroad_Guerilla03", 	700},
			{"Exile_Car_Offroad_Guerilla04", 	700},
			{"Exile_Car_Offroad_Guerilla05", 	700},
			{"Exile_Car_Offroad_Guerilla06", 	700},
			{"Exile_Car_Offroad_Guerilla07", 	700},
			{"Exile_Car_Offroad_Guerilla08", 	700},
			{"Exile_Car_Offroad_Guerilla09", 	700},
			{"Exile_Car_Offroad_Guerilla10", 	700},
			{"Exile_Car_Offroad_Guerilla11", 	700},
			{"Exile_Car_Offroad_Guerilla12", 	700}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150},
			{"Exile_Car_Offroad_Repair_Red",			150},
			{"Exile_Car_Offroad_Repair_Beige",			150},
			{"Exile_Car_Offroad_Repair_White",			150},
			{"Exile_Car_Offroad_Repair_Blue",			150},
			{"Exile_Car_Offroad_Repair_DarkRed",		150},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] =
		{
			{"Exile_Car_SUV_Red", 		100},
			{"Exile_Car_SUV_Black", 	150},
			{"Exile_Car_SUV_Grey", 		100},
			{"Exile_Car_SUV_Orange", 	100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Black",			100},
			{"Exile_Car_Van_White",			100},
			{"Exile_Car_Van_Red",			100},
			{"Exile_Car_Van_Guerilla01",	150},
			{"Exile_Car_Van_Guerilla02",	150},
			{"Exile_Car_Van_Guerilla03",	150},
			{"Exile_Car_Van_Guerilla04",	150},
			{"Exile_Car_Van_Guerilla05",	150},
			{"Exile_Car_Van_Guerilla06",	150},
			{"Exile_Car_Van_Guerilla07",	150},
			{"Exile_Car_Van_Guerilla08",	150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Box_Black",				100},
			{"Exile_Car_Van_Box_White",				100},
			{"Exile_Car_Van_Box_Red",				100},
			{"Exile_Car_Van_Box_Guerilla01",		150},
			{"Exile_Car_Van_Box_Guerilla02",		150},
			{"Exile_Car_Van_Box_Guerilla03",		150},
			{"Exile_Car_Van_Box_Guerilla04",		150},
			{"Exile_Car_Van_Box_Guerilla05",		150},
			{"Exile_Car_Van_Box_Guerilla06",		150},
			{"Exile_Car_Van_Box_Guerilla07",		150},
			{"Exile_Car_Van_Box_Guerilla08",		150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Fuel_Black",			100},
			{"Exile_Car_Van_Fuel_White",			100},
			{"Exile_Car_Van_Fuel_Red",				100},
			{"Exile_Car_Van_Fuel_Guerilla01",		150},
			{"Exile_Car_Van_Fuel_Guerilla02",		150},
			{"Exile_Car_Van_Fuel_Guerilla03",		150}
		};
	};
};
