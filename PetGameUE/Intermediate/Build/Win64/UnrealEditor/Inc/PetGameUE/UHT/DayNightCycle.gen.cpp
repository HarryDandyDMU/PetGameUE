// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/DayNightCycle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDayNightCycle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_ADayNightCycle();
	PETGAMEUE_API UClass* Z_Construct_UClass_ADayNightCycle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	void ADayNightCycle::StaticRegisterNativesADayNightCycle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADayNightCycle);
	UClass* Z_Construct_UClass_ADayNightCycle_NoRegister()
	{
		return ADayNightCycle::StaticClass();
	}
	struct Z_Construct_UClass_ADayNightCycle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DayTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DayTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DayDonePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DayDonePercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DayLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DayLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulusDay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ModulusDay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunRotationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SunRotationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunProgressionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SunProgressionCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SunLight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADayNightCycle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayNightCycle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DayNightCycle.h" },
		{ "ModuleRelativePath", "Public/DayNightCycle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayTimer_MetaData[] = {
		{ "Category", "Day" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//day\n" },
#endif
		{ "ModuleRelativePath", "Public/DayNightCycle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "day" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayTimer = { "DayTimer", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADayNightCycle, DayTimer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayTimer_MetaData), Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayTimer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayDonePercentage_MetaData[] = {
		{ "Category", "Day" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//timer float for the day\n" },
#endif
		{ "ModuleRelativePath", "Public/DayNightCycle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "timer float for the day" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayDonePercentage = { "DayDonePercentage", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADayNightCycle, DayDonePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayDonePercentage_MetaData), Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayDonePercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayLength_MetaData[] = {
		{ "Category", "Day" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0/1 float that'll be clamped\n" },
#endif
		{ "ModuleRelativePath", "Public/DayNightCycle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0/1 float that'll be clamped" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayLength = { "DayLength", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADayNightCycle, DayLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayLength_MetaData), Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayNightCycle_Statics::NewProp_ModulusDay_MetaData[] = {
		{ "Category", "Day" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//day length in seconds\n" },
#endif
		{ "ModuleRelativePath", "Public/DayNightCycle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "day length in seconds" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADayNightCycle_Statics::NewProp_ModulusDay = { "ModulusDay", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADayNightCycle, ModulusDay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::NewProp_ModulusDay_MetaData), Z_Construct_UClass_ADayNightCycle_Statics::NewProp_ModulusDay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunRotationCurve_MetaData[] = {
		{ "Category", "Sun" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//sun variables\n" },
#endif
		{ "ModuleRelativePath", "Public/DayNightCycle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "sun variables" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunRotationCurve = { "SunRotationCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADayNightCycle, SunRotationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunRotationCurve_MetaData), Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunRotationCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunProgressionCurve_MetaData[] = {
		{ "Category", "Sun" },
		{ "ModuleRelativePath", "Public/DayNightCycle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunProgressionCurve = { "SunProgressionCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADayNightCycle, SunProgressionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunProgressionCurve_MetaData), Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunProgressionCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunLight_MetaData[] = {
		{ "Category", "Sun" },
		{ "ModuleRelativePath", "Public/DayNightCycle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunLight = { "SunLight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADayNightCycle, SunLight), Z_Construct_UClass_ADirectionalLight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunLight_MetaData), Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunLight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADayNightCycle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayDonePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayNightCycle_Statics::NewProp_DayLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayNightCycle_Statics::NewProp_ModulusDay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunRotationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunProgressionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayNightCycle_Statics::NewProp_SunLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADayNightCycle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADayNightCycle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADayNightCycle_Statics::ClassParams = {
		&ADayNightCycle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADayNightCycle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::Class_MetaDataParams), Z_Construct_UClass_ADayNightCycle_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADayNightCycle()
	{
		if (!Z_Registration_Info_UClass_ADayNightCycle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADayNightCycle.OuterSingleton, Z_Construct_UClass_ADayNightCycle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADayNightCycle.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<ADayNightCycle>()
	{
		return ADayNightCycle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADayNightCycle);
	ADayNightCycle::~ADayNightCycle() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_DayNightCycle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_DayNightCycle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADayNightCycle, ADayNightCycle::StaticClass, TEXT("ADayNightCycle"), &Z_Registration_Info_UClass_ADayNightCycle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADayNightCycle), 28761090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_DayNightCycle_h_2946725613(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_DayNightCycle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_DayNightCycle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
