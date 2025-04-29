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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3d();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	PETGAMEUE_API UClass* Z_Construct_UClass_APetMaster_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_USaveGameClass();
	PETGAMEUE_API UClass* Z_Construct_UClass_USaveGameClass_NoRegister();
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
		static const UECodeGen_Private::FClassPropertyParams NewProp_PetInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PetInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PetInstances;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, PlayerLocation), Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_PlayerLocation_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_PlayerLocation_MetaData) };
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetInstances_Inner = { "PetInstances", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APetMaster_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetInstances_MetaData[] = {
		{ "Category", "PetInstances" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Pets\n" },
#endif
		{ "ModuleRelativePath", "Public/SaveGameClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pets" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetInstances = { "PetInstances", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameClass, PetInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetInstances_MetaData), Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetInstances_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_SaveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_PlayerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_BlueStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_GreenStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_YellowStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_RedStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameClass_Statics::NewProp_PetInstances,
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
		{ Z_Construct_UClass_USaveGameClass, USaveGameClass::StaticClass, TEXT("USaveGameClass"), &Z_Registration_Info_UClass_USaveGameClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameClass), 747885241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_SaveGameClass_h_2516296754(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_SaveGameClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_SaveGameClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
