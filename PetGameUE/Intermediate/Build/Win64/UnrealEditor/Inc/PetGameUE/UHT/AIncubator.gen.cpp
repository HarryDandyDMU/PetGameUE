// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/AIncubator.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIncubator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PETGAMEUE_API UClass* Z_Construct_UClass_AAIncubator();
	PETGAMEUE_API UClass* Z_Construct_UClass_AAIncubator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	DEFINE_FUNCTION(AAIncubator::execOnBeginOverlapEgg)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapEgg(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AAIncubator::StaticRegisterNativesAAIncubator()
	{
		UClass* Class = AAIncubator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlapEgg", &AAIncubator::execOnBeginOverlapEgg },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics
	{
		struct AIncubator_eventOnBeginOverlapEgg_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIncubator_eventOnBeginOverlapEgg_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIncubator_eventOnBeginOverlapEgg_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIncubator_eventOnBeginOverlapEgg_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIncubator_eventOnBeginOverlapEgg_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((AIncubator_eventOnBeginOverlapEgg_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIncubator_eventOnBeginOverlapEgg_Parms), &Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIncubator_eventOnBeginOverlapEgg_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIncubator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIncubator, nullptr, "OnBeginOverlapEgg", nullptr, nullptr, Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::AIncubator_eventOnBeginOverlapEgg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::AIncubator_eventOnBeginOverlapEgg_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIncubator);
	UClass* Z_Construct_UClass_AAIncubator_NoRegister()
	{
		return AAIncubator::StaticClass();
	}
	struct Z_Construct_UClass_AAIncubator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EggCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EggCollision;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIncubator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIncubator_OnBeginOverlapEgg, "OnBeginOverlapEgg" }, // 96149465
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIncubator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIncubator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIncubator.h" },
		{ "ModuleRelativePath", "Public/AIncubator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIncubator_Statics::NewProp_EggCollision_MetaData[] = {
		{ "Category", "Trigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AIncubator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIncubator_Statics::NewProp_EggCollision = { "EggCollision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIncubator, EggCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIncubator_Statics::NewProp_EggCollision_MetaData), Z_Construct_UClass_AAIncubator_Statics::NewProp_EggCollision_MetaData) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIncubator_Statics::NewProp_EggCollision,
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
		FuncInfo,
		Z_Construct_UClass_AAIncubator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AAIncubator, AAIncubator::StaticClass, TEXT("AAIncubator"), &Z_Registration_Info_UClass_AAIncubator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIncubator), 1778581289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AIncubator_h_2946532060(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AIncubator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_AIncubator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
