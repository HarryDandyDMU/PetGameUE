// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/AGem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGem() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_AAGem();
	PETGAMEUE_API UClass* Z_Construct_UClass_AAGem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	void AAGem::StaticRegisterNativesAAGem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAGem);
	UClass* Z_Construct_UClass_AAGem_NoRegister()
	{
		return AAGem::StaticClass();
	}
	struct Z_Construct_UClass_AAGem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GemMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GemMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GemType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StimuliSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StimuliSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAGem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAGem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AGem.h" },
		{ "ModuleRelativePath", "Public/AGem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAGem_Statics::NewProp_GemMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//GemSTaticMesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AGem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GemSTaticMesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGem_Statics::NewProp_GemMesh = { "GemMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGem, GemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGem_Statics::NewProp_GemMesh_MetaData), Z_Construct_UClass_AAGem_Statics::NewProp_GemMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAGem_Statics::NewProp_GemType_MetaData[] = {
		{ "Category", "Gem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text of type //won't build if deleted\n" },
#endif
		{ "ModuleRelativePath", "Public/AGem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text of type won't build if deleted" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAGem_Statics::NewProp_GemType = { "GemType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGem, GemType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGem_Statics::NewProp_GemType_MetaData), Z_Construct_UClass_AAGem_Statics::NewProp_GemType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAGem_Statics::NewProp_StimuliSource_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stimuli Source\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AGem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stimuli Source" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGem_Statics::NewProp_StimuliSource = { "StimuliSource", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGem, StimuliSource), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGem_Statics::NewProp_StimuliSource_MetaData), Z_Construct_UClass_AAGem_Statics::NewProp_StimuliSource_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAGem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGem_Statics::NewProp_GemMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGem_Statics::NewProp_GemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGem_Statics::NewProp_StimuliSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAGem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAGem_Statics::ClassParams = {
		&AAGem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAGem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAGem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGem_Statics::Class_MetaDataParams), Z_Construct_UClass_AAGem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAGem()
	{
		if (!Z_Registration_Info_UClass_AAGem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAGem.OuterSingleton, Z_Construct_UClass_AAGem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAGem.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<AAGem>()
	{
		return AAGem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAGem);
	AAGem::~AAGem() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AGem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AGem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAGem, AAGem::StaticClass, TEXT("AAGem"), &Z_Registration_Info_UClass_AAGem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAGem), 1929864802U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AGem_h_105241738(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AGem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AGem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
