// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/PetMasterClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePetMasterClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PETGAMEUE_API UClass* Z_Construct_UClass_APetMasterClass();
	PETGAMEUE_API UClass* Z_Construct_UClass_APetMasterClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	void APetMasterClass::StaticRegisterNativesAPetMasterClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APetMasterClass);
	UClass* Z_Construct_UClass_APetMasterClass_NoRegister()
	{
		return APetMasterClass::StaticClass();
	}
	struct Z_Construct_UClass_APetMasterClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APetMasterClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APetMasterClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMasterClass_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PetMasterClass.h" },
		{ "ModuleRelativePath", "Public/PetMasterClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APetMasterClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APetMasterClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APetMasterClass_Statics::ClassParams = {
		&APetMasterClass::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMasterClass_Statics::Class_MetaDataParams), Z_Construct_UClass_APetMasterClass_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APetMasterClass()
	{
		if (!Z_Registration_Info_UClass_APetMasterClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APetMasterClass.OuterSingleton, Z_Construct_UClass_APetMasterClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APetMasterClass.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<APetMasterClass>()
	{
		return APetMasterClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APetMasterClass);
	APetMasterClass::~APetMasterClass() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMasterClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMasterClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APetMasterClass, APetMasterClass::StaticClass, TEXT("APetMasterClass"), &Z_Registration_Info_UClass_APetMasterClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APetMasterClass), 896878964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMasterClass_h_13336322(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMasterClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMasterClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
