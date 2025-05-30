// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/SaveGameClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	PETGAMEUE_API UClass* Z_Construct_UClass_APetMaster_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_USaveGameClass();
	PETGAMEUE_API UClass* Z_Construct_UClass_USaveGameClass_NoRegister();
	PETGAMEUE_API UEnum* Z_Construct_UEnum_PetGameUE_EEvolution();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	void USaveGameClass::StaticRegisterNativesUSaveGameClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameClass);
	UClass* Z_Construct_UClass_USaveGameClass_NoRegister()
	{
		return USaveGameClass::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueStack_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlueStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GreenStack_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GreenStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YellowStack_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_YellowStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedStack_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RedStack;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GemTypeMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GemTypeMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GemTypeMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GemTypeMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GemLocationMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GemLocationMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GemLocationMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GemLocationMap;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EggHatchTime_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EggHatchTime_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EggHatchTime_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EggHatchTime;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PetToSpawn_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PetToSpawn_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PetToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PetToSpawn;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeciesType_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpeciesType_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeciesType_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SpeciesType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EggLocationMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EggLocationMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EggLocationMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EggLocationMap;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PetSpeciesType_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PetSpeciesType_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PetSpeciesType_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PetSpeciesType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PetLocation_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PetLocation_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PetLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentEvolution_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentEvolution_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentEvolution_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEvolution_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CurrentEvolution;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphBashful_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MorphBashful_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphBashful_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MorphBashful;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphJoyful_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MorphJoyful_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphJoyful_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MorphJoyful;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphSerious_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MorphSerious_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphSerious_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MorphSerious;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphCalm_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MorphCalm_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphCalm_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MorphCalm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SaveGameClass.h" },
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_SaveName_MetaData[] = {
		{ "Category", "SaveSlots" },
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, SaveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_SaveName_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_SaveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "SaveSlots" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//name of save slot\n" },
#endif
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "name of save slot" },
#endif
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_UserIndex_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_UserIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "SavePlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player location\n" },
#endif
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player location" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_PlayerLocation_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_PlayerLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_BlueStack_MetaData[] = {
		{ "Category", "SavePlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//inventory stacks\n" },
#endif
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "inventory stacks" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_BlueStack = { "BlueStack", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, BlueStack), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_BlueStack_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_BlueStack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_GreenStack_MetaData[] = {
		{ "Category", "SavePlayer" },
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_GreenStack = { "GreenStack", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, GreenStack), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_GreenStack_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_GreenStack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_YellowStack_MetaData[] = {
		{ "Category", "SavePlayer" },
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_YellowStack = { "YellowStack", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, YellowStack), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_YellowStack_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_YellowStack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_RedStack_MetaData[] = {
		{ "Category", "SavePlayer" },
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_RedStack = { "RedStack", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, RedStack), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_RedStack_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_RedStack_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemTypeMap_ValueProp = { "GemTypeMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemTypeMap_Key_KeyProp = { "GemTypeMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemTypeMap_MetaData[] = {
		{ "Category", "Gems" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gems\n" },
#endif
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gems" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemTypeMap = { "GemTypeMap", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, GemTypeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemTypeMap_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemTypeMap_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemLocationMap_ValueProp = { "GemLocationMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemLocationMap_Key_KeyProp = { "GemLocationMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemLocationMap_MetaData[] = {
		{ "Category", "Gems" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//dictionary of gem types\n" },
#endif
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "dictionary of gem types" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemLocationMap = { "GemLocationMap", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, GemLocationMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemLocationMap_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemLocationMap_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggHatchTime_ValueProp = { "EggHatchTime", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggHatchTime_Key_KeyProp = { "EggHatchTime_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggHatchTime_MetaData[] = {
		{ "Category", "Eggs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Eggs\n" },
#endif
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Eggs" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggHatchTime = { "EggHatchTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, EggHatchTime), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggHatchTime_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggHatchTime_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetToSpawn_ValueProp = { "PetToSpawn", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_APetMaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetToSpawn_Key_KeyProp = { "PetToSpawn_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetToSpawn_MetaData[] = {
		{ "Category", "Eggs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Dictionary of Egg hatch timer amounts\n" },
#endif
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dictionary of Egg hatch timer amounts" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetToSpawn = { "PetToSpawn", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, PetToSpawn), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetToSpawn_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetToSpawn_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_SpeciesType_ValueProp = { "SpeciesType", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_SpeciesType_Key_KeyProp = { "SpeciesType_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_SpeciesType_MetaData[] = {
		{ "Category", "Eggs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//dictionary of bps of pets to spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "dictionary of bps of pets to spawn" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_SpeciesType = { "SpeciesType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, SpeciesType), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_SpeciesType_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_SpeciesType_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggLocationMap_ValueProp = { "EggLocationMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggLocationMap_Key_KeyProp = { "EggLocationMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggLocationMap_MetaData[] = {
		{ "Category", "Eggs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Dictionary of type of egg to decide which bp to instantiate\n" },
#endif
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dictionary of type of egg to decide which bp to instantiate" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggLocationMap = { "EggLocationMap", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, EggLocationMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggLocationMap_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggLocationMap_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetSpeciesType_ValueProp = { "PetSpeciesType", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetSpeciesType_Key_KeyProp = { "PetSpeciesType_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetSpeciesType_MetaData[] = {
		{ "Category", "Pet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//SPECIES\n" },
#endif
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SPECIES" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetSpeciesType = { "PetSpeciesType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, PetSpeciesType), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetSpeciesType_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetSpeciesType_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetLocation_ValueProp = { "PetLocation", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetLocation_Key_KeyProp = { "PetLocation_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetLocation_MetaData[] = {
		{ "Category", "Pet" },
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetLocation = { "PetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, PetLocation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetLocation_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetLocation_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_CurrentEvolution_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_CurrentEvolution_ValueProp = { "CurrentEvolution", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_PetGameUE_EEvolution, METADATA_PARAMS(0, nullptr) }; // 1680861448
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_CurrentEvolution_Key_KeyProp = { "CurrentEvolution_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_CurrentEvolution_MetaData[] = {
		{ "Category", "Pet" },
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_CurrentEvolution = { "CurrentEvolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, CurrentEvolution), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_CurrentEvolution_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_CurrentEvolution_MetaData) }; // 1680861448
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphBashful_ValueProp = { "MorphBashful", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphBashful_Key_KeyProp = { "MorphBashful_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphBashful_MetaData[] = {
		{ "Category", "Morph" },
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphBashful = { "MorphBashful", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, MorphBashful), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphBashful_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphBashful_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphJoyful_ValueProp = { "MorphJoyful", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphJoyful_Key_KeyProp = { "MorphJoyful_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphJoyful_MetaData[] = {
		{ "Category", "Morph" },
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphJoyful = { "MorphJoyful", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, MorphJoyful), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphJoyful_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphJoyful_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphSerious_ValueProp = { "MorphSerious", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphSerious_Key_KeyProp = { "MorphSerious_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphSerious_MetaData[] = {
		{ "Category", "Morph" },
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphSerious = { "MorphSerious", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, MorphSerious), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphSerious_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphSerious_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphCalm_ValueProp = { "MorphCalm", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphCalm_Key_KeyProp = { "MorphCalm_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphCalm_MetaData[] = {
		{ "Category", "Morph" },
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphCalm = { "MorphCalm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, MorphCalm), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphCalm_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphCalm_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_SaveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_PlayerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_BlueStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_GreenStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_YellowStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_RedStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemTypeMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemTypeMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemTypeMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemLocationMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemLocationMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_GemLocationMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggHatchTime_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggHatchTime_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggHatchTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetToSpawn_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetToSpawn_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_SpeciesType_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_SpeciesType_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_SpeciesType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggLocationMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggLocationMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_EggLocationMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetSpeciesType_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetSpeciesType_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetSpeciesType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetLocation_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetLocation_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_CurrentEvolution_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_CurrentEvolution_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_CurrentEvolution_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_CurrentEvolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphBashful_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphBashful_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphBashful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphJoyful_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphJoyful_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphJoyful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphSerious_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphSerious_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphSerious,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphCalm_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphCalm_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_MorphCalm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameClass_Statics::ClassParams = {
		&USaveGameClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGameClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USaveGameClass()
	{
		if (!Z_Registration_Info_UClass_USaveGameClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameClass.OuterSingleton, Z_Construct_UClass_USaveGameClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveGameClass.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<USaveGameClass>()
	{
		return USaveGameClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameClass);
	USaveGameClass::~USaveGameClass() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_SaveGameClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_SaveGameClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameClass, USaveGameClass::StaticClass, TEXT("USaveGameClass"), &Z_Registration_Info_UClass_USaveGameClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameClass), 2431531354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_SaveGameClass_h_3961672689(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_SaveGameClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_SaveGameClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
