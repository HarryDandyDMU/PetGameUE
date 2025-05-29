// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/ARubbleMaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARubbleMaster() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_AAGem_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_AARubbleMaster();
	PETGAMEUE_API UClass* Z_Construct_UClass_AARubbleMaster_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_AAUpdatedEgg_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	void AARubbleMaster::StaticRegisterNativesAARubbleMaster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARubbleMaster);
	UClass* Z_Construct_UClass_AARubbleMaster_NoRegister()
	{
		return AARubbleMaster::StaticClass();
	}
	struct Z_Construct_UClass_AARubbleMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RubbleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RubbleMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DropLocation;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Gems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Gems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EggType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EggType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARubbleMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AARubbleMaster_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARubbleMaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARubbleMaster.h" },
		{ "ModuleRelativePath", "Public/ARubbleMaster.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARubbleMaster_Statics::NewProp_RubbleMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//RubbleMesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARubbleMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RubbleMesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARubbleMaster_Statics::NewProp_RubbleMesh = { "RubbleMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARubbleMaster, RubbleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARubbleMaster_Statics::NewProp_RubbleMesh_MetaData), Z_Construct_UClass_AARubbleMaster_Statics::NewProp_RubbleMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARubbleMaster_Statics::NewProp_DropLocation_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//location for items to drop relative to char\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARubbleMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "location for items to drop relative to char" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARubbleMaster_Statics::NewProp_DropLocation = { "DropLocation", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARubbleMaster, DropLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARubbleMaster_Statics::NewProp_DropLocation_MetaData), Z_Construct_UClass_AARubbleMaster_Statics::NewProp_DropLocation_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AARubbleMaster_Statics::NewProp_Gems_Inner = { "Gems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AAGem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARubbleMaster_Statics::NewProp_Gems_MetaData[] = {
		{ "Category", "Gems" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//bp children of gem\n" },
#endif
		{ "ModuleRelativePath", "Public/ARubbleMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bp children of gem" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AARubbleMaster_Statics::NewProp_Gems = { "Gems", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARubbleMaster, Gems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARubbleMaster_Statics::NewProp_Gems_MetaData), Z_Construct_UClass_AARubbleMaster_Statics::NewProp_Gems_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARubbleMaster_Statics::NewProp_EggType_MetaData[] = {
		{ "Category", "Gems" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//contains gems\n" },
#endif
		{ "ModuleRelativePath", "Public/ARubbleMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "contains gems" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AARubbleMaster_Statics::NewProp_EggType = { "EggType", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARubbleMaster, EggType), Z_Construct_UClass_UClass, Z_Construct_UClass_AAUpdatedEgg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARubbleMaster_Statics::NewProp_EggType_MetaData), Z_Construct_UClass_AARubbleMaster_Statics::NewProp_EggType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARubbleMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARubbleMaster_Statics::NewProp_RubbleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARubbleMaster_Statics::NewProp_DropLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARubbleMaster_Statics::NewProp_Gems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARubbleMaster_Statics::NewProp_Gems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARubbleMaster_Statics::NewProp_EggType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARubbleMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARubbleMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARubbleMaster_Statics::ClassParams = {
		&AARubbleMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AARubbleMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AARubbleMaster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARubbleMaster_Statics::Class_MetaDataParams), Z_Construct_UClass_AARubbleMaster_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AARubbleMaster_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AARubbleMaster()
	{
		if (!Z_Registration_Info_UClass_AARubbleMaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARubbleMaster.OuterSingleton, Z_Construct_UClass_AARubbleMaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARubbleMaster.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<AARubbleMaster>()
	{
		return AARubbleMaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARubbleMaster);
	AARubbleMaster::~AARubbleMaster() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_ARubbleMaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_ARubbleMaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARubbleMaster, AARubbleMaster::StaticClass, TEXT("AARubbleMaster"), &Z_Registration_Info_UClass_AARubbleMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARubbleMaster), 726864713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_ARubbleMaster_h_4091837814(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_ARubbleMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_ARubbleMaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
