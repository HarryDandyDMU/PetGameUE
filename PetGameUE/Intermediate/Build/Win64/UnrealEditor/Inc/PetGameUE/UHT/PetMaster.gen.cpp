// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/PetMaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePetMaster() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_APetMaster();
	PETGAMEUE_API UClass* Z_Construct_UClass_APetMaster_NoRegister();
	PETGAMEUE_API UEnum* Z_Construct_UEnum_PetGameUE_EEvolution();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEvolution;
	static UEnum* EEvolution_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEvolution.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEvolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PetGameUE_EEvolution, (UObject*)Z_Construct_UPackage__Script_PetGameUE(), TEXT("EEvolution"));
		}
		return Z_Registration_Info_UEnum_EEvolution.OuterSingleton;
	}
	template<> PETGAMEUE_API UEnum* StaticEnum<EEvolution>()
	{
		return EEvolution_StaticEnum();
	}
	struct Z_Construct_UEnum_PetGameUE_EEvolution_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PetGameUE_EEvolution_Statics::Enumerators[] = {
		{ "EEvolution::Baby", (int64)EEvolution::Baby },
		{ "EEvolution::Adult", (int64)EEvolution::Adult },
		{ "EEvolution::Elder", (int64)EEvolution::Elder },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PetGameUE_EEvolution_Statics::Enum_MetaDataParams[] = {
		{ "Adult.Name", "EEvolution::Adult" },
		{ "Baby.Comment", "//uint8 makes it tiny\n" },
		{ "Baby.Name", "EEvolution::Baby" },
		{ "Baby.ToolTip", "uint8 makes it tiny" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//states of evolution to dictate models \n" },
#endif
		{ "Elder.Name", "EEvolution::Elder" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "states of evolution to dictate models" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PetGameUE_EEvolution_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PetGameUE,
		nullptr,
		"EEvolution",
		"EEvolution",
		Z_Construct_UEnum_PetGameUE_EEvolution_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PetGameUE_EEvolution_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PetGameUE_EEvolution_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PetGameUE_EEvolution_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PetGameUE_EEvolution()
	{
		if (!Z_Registration_Info_UEnum_EEvolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEvolution.InnerSingleton, Z_Construct_UEnum_PetGameUE_EEvolution_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEvolution.InnerSingleton;
	}
	DEFINE_FUNCTION(APetMaster::execEvolve)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Evolve();
		P_NATIVE_END;
	}
	void APetMaster::StaticRegisterNativesAPetMaster()
	{
		UClass* Class = APetMaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Evolve", &APetMaster::execEvolve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APetMaster_Evolve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APetMaster_Evolve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PetMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APetMaster_Evolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APetMaster, nullptr, "Evolve", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APetMaster_Evolve_Statics::Function_MetaDataParams), Z_Construct_UFunction_APetMaster_Evolve_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APetMaster_Evolve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APetMaster_Evolve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APetMaster);
	UClass* Z_Construct_UClass_APetMaster_NoRegister()
	{
		return APetMaster::StaticClass();
	}
	struct Z_Construct_UClass_APetMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PFJoyful_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PFJoyful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NFSerious_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NFSerious;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PFCalm_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PFCalm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NFBashful_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NFBashful;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentEvolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEvolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentEvolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultEvolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEvolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultEvolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PetMeshAdult_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PetMeshAdult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PetMeshBaby_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PetMeshBaby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PetMeshElder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PetMeshElder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvolutionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EvolutionTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APetMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APetMaster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APetMaster_Evolve, "Evolve" }, // 2670839419
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PetMaster.h" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_PFJoyful_MetaData[] = {
		{ "Category", "Mood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//variables for stats for all pets make private later w/ get set functions that are clamped 0-1\n// NF = NEGATIVE FLOAT (BAD TRAIT)\n// PF = POSITIVE FLOAT (POSITIVE TRAIT)\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "variables for stats for all pets make private later w/ get set functions that are clamped 0-1\n NF = NEGATIVE FLOAT (BAD TRAIT)\n PF = POSITIVE FLOAT (POSITIVE TRAIT)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_PFJoyful = { "PFJoyful", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, PFJoyful), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_PFJoyful_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_PFJoyful_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_NFSerious_MetaData[] = {
		{ "Category", "Mood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0-1f used to Dicatate the blend shapes\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0-1f used to Dicatate the blend shapes" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_NFSerious = { "NFSerious", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, NFSerious), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_NFSerious_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_NFSerious_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_PFCalm_MetaData[] = {
		{ "Category", "Mood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0-1f used to Dicatate the blend shapes\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0-1f used to Dicatate the blend shapes" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_PFCalm = { "PFCalm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, PFCalm), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_PFCalm_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_PFCalm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_NFBashful_MetaData[] = {
		{ "Category", "Mood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0-1f used to Dicatate the blend shapes\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0-1f used to Dicatate the blend shapes" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_NFBashful = { "NFBashful", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, NFBashful), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_NFBashful_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_NFBashful_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution_MetaData[] = {
		{ "Category", "Evolution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0-1f used to Dicatate the blend shapes\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0-1f used to Dicatate the blend shapes" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution = { "CurrentEvolution", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, CurrentEvolution), Z_Construct_UEnum_PetGameUE_EEvolution, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution_MetaData) }; // 1680861448
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_DefaultEvolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_DefaultEvolution_MetaData[] = {
		{ "Category", "Evolution" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_DefaultEvolution = { "DefaultEvolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, DefaultEvolution), Z_Construct_UEnum_PetGameUE_EEvolution, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_DefaultEvolution_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_DefaultEvolution_MetaData) }; // 1680861448
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshAdult_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//include skeletal mesh component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "include skeletal mesh component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshAdult = { "PetMeshAdult", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, PetMeshAdult), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshAdult_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshAdult_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshBaby_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//include skeletal mesh component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "include skeletal mesh component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshBaby = { "PetMeshBaby", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, PetMeshBaby), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshBaby_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshBaby_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshElder_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//include skeletal mesh component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "include skeletal mesh component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshElder = { "PetMeshElder", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, PetMeshElder), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshElder_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshElder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_DefaultSceneRoot_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//scene root\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "scene root" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_DefaultSceneRoot_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_DefaultSceneRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_EvolutionTime_MetaData[] = {
		{ "Category", "Timer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//timer length\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "timer length" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_EvolutionTime = { "EvolutionTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, EvolutionTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_EvolutionTime_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_EvolutionTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APetMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_PFJoyful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_NFSerious,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_PFCalm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_NFBashful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_DefaultEvolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_DefaultEvolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshAdult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshBaby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshElder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_DefaultSceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_EvolutionTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APetMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APetMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APetMaster_Statics::ClassParams = {
		&APetMaster::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APetMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::Class_MetaDataParams), Z_Construct_UClass_APetMaster_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APetMaster()
	{
		if (!Z_Registration_Info_UClass_APetMaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APetMaster.OuterSingleton, Z_Construct_UClass_APetMaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APetMaster.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<APetMaster>()
	{
		return APetMaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APetMaster);
	APetMaster::~APetMaster() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_Statics::EnumInfo[] = {
		{ EEvolution_StaticEnum, TEXT("EEvolution"), &Z_Registration_Info_UEnum_EEvolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1680861448U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APetMaster, APetMaster::StaticClass, TEXT("APetMaster"), &Z_Registration_Info_UClass_APetMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APetMaster), 1958013223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_3217971071(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
