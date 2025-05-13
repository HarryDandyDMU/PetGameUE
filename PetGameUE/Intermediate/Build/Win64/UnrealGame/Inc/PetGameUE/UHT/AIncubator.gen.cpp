// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/AIncubator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIncubator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_AAIncubator();
	PETGAMEUE_API UClass* Z_Construct_UClass_AAIncubator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	void AAIncubator::StaticRegisterNativesAAIncubator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIncubator);
	UClass* Z_Construct_UClass_AAIncubator_NoRegister()
	{
		return AAIncubator::StaticClass();
	}
	struct Z_Construct_UClass_AAIncubator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncubatorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IncubatorMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIncubator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIncubator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIncubator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIncubator.h" },
		{ "ModuleRelativePath", "Public/AIncubator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIncubator_Statics::NewProp_IncubatorMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//IncubatorMesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AIncubator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IncubatorMesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIncubator_Statics::NewProp_IncubatorMesh = { "IncubatorMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIncubator, IncubatorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIncubator_Statics::NewProp_IncubatorMesh_MetaData), Z_Construct_UClass_AAIncubator_Statics::NewProp_IncubatorMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIncubator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIncubator_Statics::NewProp_IncubatorMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIncubator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIncubator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIncubator_Statics::ClassParams = {
		&AAIncubator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIncubator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIncubator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIncubator_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIncubator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIncubator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAIncubator()
	{
		if (!Z_Registration_Info_UClass_AAIncubator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIncubator.OuterSingleton, Z_Construct_UClass_AAIncubator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIncubator.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<AAIncubator>()
	{
		return AAIncubator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIncubator);
	AAIncubator::~AAIncubator() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AIncubator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AIncubator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIncubator, AAIncubator::StaticClass, TEXT("AAIncubator"), &Z_Registration_Info_UClass_AAIncubator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIncubator), 3323445777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AIncubator_h_4161276480(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AIncubator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AIncubator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
