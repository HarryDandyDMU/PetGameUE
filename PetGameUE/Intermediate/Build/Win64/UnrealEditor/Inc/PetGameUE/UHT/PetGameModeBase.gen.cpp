// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/PetGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePetGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PETGAMEUE_API UClass* Z_Construct_UClass_AAGem_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_AAUpdatedEgg_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_APetGameModeBase();
	PETGAMEUE_API UClass* Z_Construct_UClass_APetGameModeBase_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_APetMaster_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	void APetGameModeBase::StaticRegisterNativesAPetGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APetGameModeBase);
	UClass* Z_Construct_UClass_APetGameModeBase_NoRegister()
	{
		return APetGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APetGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedGem_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RedGem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueGem_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlueGem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YellowGem_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_YellowGem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GreenGem_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GreenGem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Species1Egg_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Species1Egg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Species1Pet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Species1Pet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APetGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APetGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PetGameModeBase.h" },
		{ "ModuleRelativePath", "Public/PetGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetGameModeBase_Statics::NewProp_RedGem_MetaData[] = {
		{ "Category", "Gems" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//save variables\n//GEMS\n" },
#endif
		{ "ModuleRelativePath", "Public/PetGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "save variables\nGEMS" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APetGameModeBase_Statics::NewProp_RedGem = { "RedGem", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetGameModeBase, RedGem), Z_Construct_UClass_UClass, Z_Construct_UClass_AAGem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetGameModeBase_Statics::NewProp_RedGem_MetaData), Z_Construct_UClass_APetGameModeBase_Statics::NewProp_RedGem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetGameModeBase_Statics::NewProp_BlueGem_MetaData[] = {
		{ "Category", "Gems" },
		{ "ModuleRelativePath", "Public/PetGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APetGameModeBase_Statics::NewProp_BlueGem = { "BlueGem", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetGameModeBase, BlueGem), Z_Construct_UClass_UClass, Z_Construct_UClass_AAGem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetGameModeBase_Statics::NewProp_BlueGem_MetaData), Z_Construct_UClass_APetGameModeBase_Statics::NewProp_BlueGem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetGameModeBase_Statics::NewProp_YellowGem_MetaData[] = {
		{ "Category", "Gems" },
		{ "ModuleRelativePath", "Public/PetGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APetGameModeBase_Statics::NewProp_YellowGem = { "YellowGem", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetGameModeBase, YellowGem), Z_Construct_UClass_UClass, Z_Construct_UClass_AAGem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetGameModeBase_Statics::NewProp_YellowGem_MetaData), Z_Construct_UClass_APetGameModeBase_Statics::NewProp_YellowGem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetGameModeBase_Statics::NewProp_GreenGem_MetaData[] = {
		{ "Category", "Gems" },
		{ "ModuleRelativePath", "Public/PetGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APetGameModeBase_Statics::NewProp_GreenGem = { "GreenGem", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetGameModeBase, GreenGem), Z_Construct_UClass_UClass, Z_Construct_UClass_AAGem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetGameModeBase_Statics::NewProp_GreenGem_MetaData), Z_Construct_UClass_APetGameModeBase_Statics::NewProp_GreenGem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetGameModeBase_Statics::NewProp_Species1Egg_MetaData[] = {
		{ "Category", "Eggs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EGGS\n" },
#endif
		{ "ModuleRelativePath", "Public/PetGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EGGS" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APetGameModeBase_Statics::NewProp_Species1Egg = { "Species1Egg", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetGameModeBase, Species1Egg), Z_Construct_UClass_UClass, Z_Construct_UClass_AAUpdatedEgg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetGameModeBase_Statics::NewProp_Species1Egg_MetaData), Z_Construct_UClass_APetGameModeBase_Statics::NewProp_Species1Egg_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetGameModeBase_Statics::NewProp_Species1Pet_MetaData[] = {
		{ "Category", "Species" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//SPECIES\n" },
#endif
		{ "ModuleRelativePath", "Public/PetGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SPECIES" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APetGameModeBase_Statics::NewProp_Species1Pet = { "Species1Pet", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetGameModeBase, Species1Pet), Z_Construct_UClass_UClass, Z_Construct_UClass_APetMaster_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetGameModeBase_Statics::NewProp_Species1Pet_MetaData), Z_Construct_UClass_APetGameModeBase_Statics::NewProp_Species1Pet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APetGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetGameModeBase_Statics::NewProp_RedGem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetGameModeBase_Statics::NewProp_BlueGem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetGameModeBase_Statics::NewProp_YellowGem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetGameModeBase_Statics::NewProp_GreenGem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetGameModeBase_Statics::NewProp_Species1Egg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetGameModeBase_Statics::NewProp_Species1Pet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APetGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APetGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APetGameModeBase_Statics::ClassParams = {
		&APetGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APetGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APetGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APetGameModeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APetGameModeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APetGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APetGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APetGameModeBase.OuterSingleton, Z_Construct_UClass_APetGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APetGameModeBase.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<APetGameModeBase>()
	{
		return APetGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APetGameModeBase);
	APetGameModeBase::~APetGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APetGameModeBase, APetGameModeBase::StaticClass, TEXT("APetGameModeBase"), &Z_Registration_Info_UClass_APetGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APetGameModeBase), 3560416872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetGameModeBase_h_2678388725(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
