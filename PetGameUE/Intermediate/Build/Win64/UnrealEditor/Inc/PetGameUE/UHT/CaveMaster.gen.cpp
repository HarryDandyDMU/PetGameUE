// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/CaveMaster.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaveMaster() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PETGAMEUE_API UClass* Z_Construct_UClass_AARubbleMaster_NoRegister();
	PETGAMEUE_API UClass* Z_Construct_UClass_ACaveMaster();
	PETGAMEUE_API UClass* Z_Construct_UClass_ACaveMaster_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PetGameUE();
// End Cross Module References
	DEFINE_FUNCTION(ACaveMaster::execOnBeginOverlapBox)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapBox(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ACaveMaster::StaticRegisterNativesACaveMaster()
	{
		UClass* Class = ACaveMaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlapBox", &ACaveMaster::execOnBeginOverlapBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics
	{
		struct CaveMaster_eventOnBeginOverlapBox_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaveMaster_eventOnBeginOverlapBox_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaveMaster_eventOnBeginOverlapBox_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaveMaster_eventOnBeginOverlapBox_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaveMaster_eventOnBeginOverlapBox_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CaveMaster_eventOnBeginOverlapBox_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CaveMaster_eventOnBeginOverlapBox_Parms), &Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaveMaster_eventOnBeginOverlapBox_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CaveMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaveMaster, nullptr, "OnBeginOverlapBox", nullptr, nullptr, Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::CaveMaster_eventOnBeginOverlapBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::CaveMaster_eventOnBeginOverlapBox_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACaveMaster);
	UClass* Z_Construct_UClass_ACaveMaster_NoRegister()
	{
		return ACaveMaster::StaticClass();
	}
	struct Z_Construct_UClass_ACaveMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnterCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitCollision;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnLocations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RubbleToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RubbleToSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaveMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PetGameUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACaveMaster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaveMaster_OnBeginOverlapBox, "OnBeginOverlapBox" }, // 1179216992
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaveMaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CaveMaster.h" },
		{ "ModuleRelativePath", "Public/CaveMaster.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaveMaster_Statics::NewProp_EnterCollision_MetaData[] = {
		{ "Category", "Trigger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(EditAnywhere, Category = \"EnterCave\")\n\x09""ATriggerVolume* TriggerEnterCaveVolume;\n\n\x09UPROPERTY(EditAnywhere, Category = \"ExitCave\")\n\x09""ATriggerVolume* TriggerExitCaveVolume;*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CaveMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"EnterCave\")\n       ATriggerVolume* TriggerEnterCaveVolume;\n\n       UPROPERTY(EditAnywhere, Category = \"ExitCave\")\n       ATriggerVolume* TriggerExitCaveVolume;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaveMaster_Statics::NewProp_EnterCollision = { "EnterCollision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaveMaster, EnterCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::NewProp_EnterCollision_MetaData), Z_Construct_UClass_ACaveMaster_Statics::NewProp_EnterCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaveMaster_Statics::NewProp_ExitCollision_MetaData[] = {
		{ "Category", "Trigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CaveMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaveMaster_Statics::NewProp_ExitCollision = { "ExitCollision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaveMaster, ExitCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::NewProp_ExitCollision_MetaData), Z_Construct_UClass_ACaveMaster_Statics::NewProp_ExitCollision_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACaveMaster_Statics::NewProp_SpawnLocations_Inner = { "SpawnLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaveMaster_Statics::NewProp_SpawnLocations_MetaData[] = {
		{ "Category", "CaveLocations" },
		{ "ModuleRelativePath", "Public/CaveMaster.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACaveMaster_Statics::NewProp_SpawnLocations = { "SpawnLocations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaveMaster, SpawnLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::NewProp_SpawnLocations_MetaData), Z_Construct_UClass_ACaveMaster_Statics::NewProp_SpawnLocations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaveMaster_Statics::NewProp_RubbleToSpawn_MetaData[] = {
		{ "Category", "Rubble" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// array of rubble locations in the map\n" },
#endif
		{ "ModuleRelativePath", "Public/CaveMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "array of rubble locations in the map" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaveMaster_Statics::NewProp_RubbleToSpawn = { "RubbleToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaveMaster, RubbleToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AARubbleMaster_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::NewProp_RubbleToSpawn_MetaData), Z_Construct_UClass_ACaveMaster_Statics::NewProp_RubbleToSpawn_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaveMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaveMaster_Statics::NewProp_EnterCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaveMaster_Statics::NewProp_ExitCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaveMaster_Statics::NewProp_SpawnLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaveMaster_Statics::NewProp_SpawnLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaveMaster_Statics::NewProp_RubbleToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaveMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaveMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaveMaster_Statics::ClassParams = {
		&ACaveMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACaveMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaveMaster_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaveMaster_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACaveMaster()
	{
		if (!Z_Registration_Info_UClass_ACaveMaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaveMaster.OuterSingleton, Z_Construct_UClass_ACaveMaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACaveMaster.OuterSingleton;
	}
	template<> PETGAMEUE_API UClass* StaticClass<ACaveMaster>()
	{
		return ACaveMaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaveMaster);
	ACaveMaster::~ACaveMaster() {}
	struct Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACaveMaster, ACaveMaster::StaticClass, TEXT("ACaveMaster"), &Z_Registration_Info_UClass_ACaveMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaveMaster), 357461604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_164410315(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
