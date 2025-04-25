// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/BTAIControllerPet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTAIControllerPet() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	PETGAMEUE_API UClass* Z_Construct_UClass_ABTAIControllerPet();
	PETGAMEUE_API UClass* Z_Construct_UClass_ABTAIControllerPet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	void ABTAIControllerPet::StaticRegisterNativesABTAIControllerPet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABTAIControllerPet);
	UClass* Z_Construct_UClass_ABTAIControllerPet_NoRegister()
	{
		return ABTAIControllerPet::StaticClass();
	}
	struct Z_Construct_UClass_ABTAIControllerPet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABTAIControllerPet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABTAIControllerPet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABTAIControllerPet_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BTAIControllerPet.h" },
		{ "ModuleRelativePath", "Public/BTAIControllerPet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABTAIControllerPet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABTAIControllerPet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABTAIControllerPet_Statics::ClassParams = {
		&ABTAIControllerPet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABTAIControllerPet_Statics::Class_MetaDataParams), Z_Construct_UClass_ABTAIControllerPet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABTAIControllerPet()
	{
		if (!Z_Registration_Info_UClass_ABTAIControllerPet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABTAIControllerPet.OuterSingleton, Z_Construct_UClass_ABTAIControllerPet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABTAIControllerPet.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<ABTAIControllerPet>()
	{
		return ABTAIControllerPet::StaticClass();
	}
	ABTAIControllerPet::ABTAIControllerPet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABTAIControllerPet);
	ABTAIControllerPet::~ABTAIControllerPet() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_BTAIControllerPet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_BTAIControllerPet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABTAIControllerPet, ABTAIControllerPet::StaticClass, TEXT("ABTAIControllerPet"), &Z_Registration_Info_UClass_ABTAIControllerPet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABTAIControllerPet), 2175620666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_BTAIControllerPet_h_293916447(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_BTAIControllerPet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_BTAIControllerPet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
