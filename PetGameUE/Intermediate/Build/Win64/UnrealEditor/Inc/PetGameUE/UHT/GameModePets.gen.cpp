// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/GameModePets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModePets() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	PETGAMEUE_API UClass* Z_Construct_UClass_AGameModePets();
	PETGAMEUE_API UClass* Z_Construct_UClass_AGameModePets_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	void AGameModePets::StaticRegisterNativesAGameModePets()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameModePets);
	UClass* Z_Construct_UClass_AGameModePets_NoRegister()
	{
		return AGameModePets::StaticClass();
	}
	struct Z_Construct_UClass_AGameModePets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameModePets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameModePets_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModePets_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModePets.h" },
		{ "ModuleRelativePath", "Public/GameModePets.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameModePets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModePets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameModePets_Statics::ClassParams = {
		&AGameModePets::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameModePets_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameModePets_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGameModePets()
	{
		if (!Z_Registration_Info_UClass_AGameModePets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameModePets.OuterSingleton, Z_Construct_UClass_AGameModePets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameModePets.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<AGameModePets>()
	{
		return AGameModePets::StaticClass();
	}
	AGameModePets::AGameModePets(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModePets);
	AGameModePets::~AGameModePets() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_GameModePets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_GameModePets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameModePets, AGameModePets::StaticClass, TEXT("AGameModePets"), &Z_Registration_Info_UClass_AGameModePets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameModePets), 2490068868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_GameModePets_h_2804679109(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_GameModePets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_GameModePets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
