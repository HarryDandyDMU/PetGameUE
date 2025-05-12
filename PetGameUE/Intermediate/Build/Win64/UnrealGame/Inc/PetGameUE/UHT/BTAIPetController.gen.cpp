// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/BTAIPetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTAIPetController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_ABTAIPetController();
	PETGAMEUE_API UClass* Z_Construct_UClass_ABTAIPetController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	DEFINE_FUNCTION(ABTAIPetController::execOnPerceptionUpdated)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdatedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdated(Z_Param_Out_UpdatedActors);
		P_NATIVE_END;
	}
	void ABTAIPetController::StaticRegisterNativesABTAIPetController()
	{
		UClass* Class = ABTAIPetController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPerceptionUpdated", &ABTAIPetController::execOnPerceptionUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics
	{
		struct BTAIPetController_eventOnPerceptionUpdated_Parms
		{
			TArray<AActor*> UpdatedActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTAIPetController_eventOnPerceptionUpdated_Parms, UpdatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_MetaData), Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// perception update function (called on sense)\n" },
#endif
		{ "ModuleRelativePath", "Public/BTAIPetController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "perception update function (called on sense)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABTAIPetController, nullptr, "OnPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::BTAIPetController_eventOnPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::BTAIPetController_eventOnPerceptionUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABTAIPetController);
	UClass* Z_Construct_UClass_ABTAIPetController_NoRegister()
	{
		return ABTAIPetController::StaticClass();
	}
	struct Z_Construct_UClass_ABTAIPetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIBT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BBComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABTAIPetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABTAIPetController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABTAIPetController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABTAIPetController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 3617210629
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABTAIPetController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABTAIPetController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BTAIPetController.h" },
		{ "ModuleRelativePath", "Public/BTAIPetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABTAIPetController_Statics::NewProp_AIPerceptionComponent_MetaData[] = {
		{ "Category", "Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI sight\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BTAIPetController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI sight" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABTAIPetController_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABTAIPetController, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABTAIPetController_Statics::NewProp_AIPerceptionComponent_MetaData), Z_Construct_UClass_ABTAIPetController_Statics::NewProp_AIPerceptionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABTAIPetController_Statics::NewProp_SightConfig_MetaData[] = {
		{ "Category", "Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// sight sense config\n" },
#endif
		{ "ModuleRelativePath", "Public/BTAIPetController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "sight sense config" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABTAIPetController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABTAIPetController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABTAIPetController_Statics::NewProp_SightConfig_MetaData), Z_Construct_UClass_ABTAIPetController_Statics::NewProp_SightConfig_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABTAIPetController_Statics::NewProp_AIBT_MetaData[] = {
		{ "Category", "BTAIPetController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// behavior tree\n" },
#endif
		{ "ModuleRelativePath", "Public/BTAIPetController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "behavior tree" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABTAIPetController_Statics::NewProp_AIBT = { "AIBT", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABTAIPetController, AIBT), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABTAIPetController_Statics::NewProp_AIBT_MetaData), Z_Construct_UClass_ABTAIPetController_Statics::NewProp_AIBT_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABTAIPetController_Statics::NewProp_BBComp_MetaData[] = {
		{ "Category", "BTAIPetController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BBComponent\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BTAIPetController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BBComponent" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABTAIPetController_Statics::NewProp_BBComp = { "BBComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABTAIPetController, BBComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABTAIPetController_Statics::NewProp_BBComp_MetaData), Z_Construct_UClass_ABTAIPetController_Statics::NewProp_BBComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABTAIPetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABTAIPetController_Statics::NewProp_AIPerceptionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABTAIPetController_Statics::NewProp_SightConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABTAIPetController_Statics::NewProp_AIBT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABTAIPetController_Statics::NewProp_BBComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABTAIPetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABTAIPetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABTAIPetController_Statics::ClassParams = {
		&ABTAIPetController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABTAIPetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABTAIPetController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABTAIPetController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABTAIPetController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABTAIPetController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABTAIPetController()
	{
		if (!Z_Registration_Info_UClass_ABTAIPetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABTAIPetController.OuterSingleton, Z_Construct_UClass_ABTAIPetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABTAIPetController.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<ABTAIPetController>()
	{
		return ABTAIPetController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABTAIPetController);
	ABTAIPetController::~ABTAIPetController() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABTAIPetController, ABTAIPetController::StaticClass, TEXT("ABTAIPetController"), &Z_Registration_Info_UClass_ABTAIPetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABTAIPetController), 54363303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_1792490454(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
