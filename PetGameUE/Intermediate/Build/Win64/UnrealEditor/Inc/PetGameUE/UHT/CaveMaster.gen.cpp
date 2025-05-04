// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/CaveMaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaveMaster() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_ACaveMaster();
	PETGAMEUE_API UClass* Z_Construct_UClass_ACaveMaster_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	void ACaveMaster::StaticRegisterNativesACaveMaster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACaveMaster);
	UClass* Z_Construct_UClass_ACaveMaster_NoRegister()
	{
		return ACaveMaster::StaticClass();
	}
	struct Z_Construct_UClass_ACaveMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEnterCaveVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerEnterCaveVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerExitCaveVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerExitCaveVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaveMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaveMaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CaveMaster.h" },
		{ "ModuleRelativePath", "Public/CaveMaster.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaveMaster_Statics::NewProp_TriggerEnterCaveVolume_MetaData[] = {
		{ "Category", "EnterCave" },
		{ "ModuleRelativePath", "Public/CaveMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaveMaster_Statics::NewProp_TriggerEnterCaveVolume = { "TriggerEnterCaveVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaveMaster, TriggerEnterCaveVolume), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::NewProp_TriggerEnterCaveVolume_MetaData), Z_Construct_UClass_ACaveMaster_Statics::NewProp_TriggerEnterCaveVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaveMaster_Statics::NewProp_TriggerExitCaveVolume_MetaData[] = {
		{ "Category", "ExitCave" },
		{ "ModuleRelativePath", "Public/CaveMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaveMaster_Statics::NewProp_TriggerExitCaveVolume = { "TriggerExitCaveVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaveMaster, TriggerExitCaveVolume), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::NewProp_TriggerExitCaveVolume_MetaData), Z_Construct_UClass_ACaveMaster_Statics::NewProp_TriggerExitCaveVolume_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaveMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaveMaster_Statics::NewProp_TriggerEnterCaveVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaveMaster_Statics::NewProp_TriggerExitCaveVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaveMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaveMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaveMaster_Statics::ClassParams = {
		&ACaveMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACaveMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaveMaster_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACaveMaster()
	{
		if (!Z_Registration_Info_UClass_ACaveMaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaveMaster.OuterSingleton, Z_Construct_UClass_ACaveMaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACaveMaster.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<ACaveMaster>()
	{
		return ACaveMaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaveMaster);
	ACaveMaster::~ACaveMaster() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACaveMaster, ACaveMaster::StaticClass, TEXT("ACaveMaster"), &Z_Registration_Info_UClass_ACaveMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaveMaster), 1970144637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_3653765750(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
