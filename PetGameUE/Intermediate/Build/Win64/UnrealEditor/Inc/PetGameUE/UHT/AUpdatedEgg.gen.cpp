// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/AUpdatedEgg.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAUpdatedEgg() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	PETGAMEUE_API UClass* Z_Construct_UClass_AAUpdatedEgg();
	PETGAMEUE_API UClass* Z_Construct_UClass_AAUpdatedEgg_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_APetMaster_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	void AAUpdatedEgg::StaticRegisterNativesAAUpdatedEgg()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAUpdatedEgg);
	UClass* Z_Construct_UClass_AAUpdatedEgg_NoRegister()
	{
		return AAUpdatedEgg::StaticClass();
	}
	struct Z_Construct_UClass_AAUpdatedEgg_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EggMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EggMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PetToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PetToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DropLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HatchTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HatchTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HatchTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HatchTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeciesType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeciesType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAUpdatedEgg_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAUpdatedEgg_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAUpdatedEgg_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AUpdatedEgg.h" },
		{ "ModuleRelativePath", "Public/AUpdatedEgg.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_EggMesh_MetaData[] = {
		{ "Category", "EggMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//egg Mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AUpdatedEgg.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "egg Mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_EggMesh = { "EggMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAUpdatedEgg, EggMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_EggMesh_MetaData), Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_EggMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_PetToSpawn_MetaData[] = {
		{ "Category", "Species" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//bp children of Species\n" },
#endif
		{ "ModuleRelativePath", "Public/AUpdatedEgg.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bp children of Species" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_PetToSpawn = { "PetToSpawn", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAUpdatedEgg, PetToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_APetMaster_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_PetToSpawn_MetaData), Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_PetToSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_DropLocation_MetaData[] = {
		{ "Category", "SpawnLoc" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AUpdatedEgg.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_DropLocation = { "DropLocation", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAUpdatedEgg, DropLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_DropLocation_MetaData), Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_DropLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_HatchTimer_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/AUpdatedEgg.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_HatchTimer = { "HatchTimer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAUpdatedEgg, HatchTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_HatchTimer_MetaData), Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_HatchTimer_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_HatchTime_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/AUpdatedEgg.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_HatchTime = { "HatchTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAUpdatedEgg, HatchTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_HatchTime_MetaData), Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_HatchTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_SpeciesType_MetaData[] = {
		{ "Category", "Species" },
		{ "ModuleRelativePath", "Public/AUpdatedEgg.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_SpeciesType = { "SpeciesType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAUpdatedEgg, SpeciesType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_SpeciesType_MetaData), Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_SpeciesType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAUpdatedEgg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_EggMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_PetToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_DropLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_HatchTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_HatchTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAUpdatedEgg_Statics::NewProp_SpeciesType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAUpdatedEgg_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAUpdatedEgg>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAUpdatedEgg_Statics::ClassParams = {
		&AAUpdatedEgg::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAUpdatedEgg_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAUpdatedEgg_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAUpdatedEgg_Statics::Class_MetaDataParams), Z_Construct_UClass_AAUpdatedEgg_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAUpdatedEgg_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAUpdatedEgg()
	{
		if (!Z_Registration_Info_UClass_AAUpdatedEgg.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAUpdatedEgg.OuterSingleton, Z_Construct_UClass_AAUpdatedEgg_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAUpdatedEgg.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<AAUpdatedEgg>()
	{
		return AAUpdatedEgg::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAUpdatedEgg);
	AAUpdatedEgg::~AAUpdatedEgg() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AUpdatedEgg_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AUpdatedEgg_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAUpdatedEgg, AAUpdatedEgg::StaticClass, TEXT("AAUpdatedEgg"), &Z_Registration_Info_UClass_AAUpdatedEgg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAUpdatedEgg), 3270492949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AUpdatedEgg_h_2263853551(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AUpdatedEgg_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AUpdatedEgg_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
