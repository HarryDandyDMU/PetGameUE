// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PetGameUE/Public/PetMaster.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePetMaster() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
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
	DEFINE_FUNCTION(APetMaster::execRagdollReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RagdollReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APetMaster::execRagdollTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RagdollTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APetMaster::execEvolve)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Evolve();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APetMaster::execOnCapsuleHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitBump);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCapsuleHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_HitBump);
		P_NATIVE_END;
	}
	void APetMaster::StaticRegisterNativesAPetMaster()
	{
		UClass* Class = APetMaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Evolve", &APetMaster::execEvolve },
			{ "OnCapsuleHit", &APetMaster::execOnCapsuleHit },
			{ "RagdollReset", &APetMaster::execRagdollReset },
			{ "RagdollTimer", &APetMaster::execRagdollTimer },
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
	struct Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics
	{
		struct PetMaster_eventOnCapsuleHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult HitBump;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBump_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitBump;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PetMaster_eventOnCapsuleHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PetMaster_eventOnCapsuleHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PetMaster_eventOnCapsuleHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PetMaster_eventOnCapsuleHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_HitBump_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_HitBump = { "HitBump", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PetMaster_eventOnCapsuleHit_Parms, HitBump), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_HitBump_MetaData), Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_HitBump_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::NewProp_HitBump,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//When it hits the Player\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When it hits the Player" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APetMaster, nullptr, "OnCapsuleHit", nullptr, nullptr, Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::PetMaster_eventOnCapsuleHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::PetMaster_eventOnCapsuleHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APetMaster_OnCapsuleHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APetMaster_OnCapsuleHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APetMaster_RagdollReset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APetMaster_RagdollReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PetMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APetMaster_RagdollReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APetMaster, nullptr, "RagdollReset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APetMaster_RagdollReset_Statics::Function_MetaDataParams), Z_Construct_UFunction_APetMaster_RagdollReset_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APetMaster_RagdollReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APetMaster_RagdollReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APetMaster_RagdollTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APetMaster_RagdollTimer_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//public so can be used on load\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "public so can be used on load" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APetMaster_RagdollTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APetMaster, nullptr, "RagdollTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APetMaster_RagdollTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APetMaster_RagdollTimer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APetMaster_RagdollTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APetMaster_RagdollTimer_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeciesType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeciesType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentEvolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEvolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentEvolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomBashful_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomBashful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomJoyful_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomJoyful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomCalm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomCalm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomSerious_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomSerious;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BabyTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BabyTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdultTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdultTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvolutionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EvolutionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollTimeAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollTimeAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsHungry_MetaData[];
#endif
		static void NewProp_IsHungry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHungry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HungerTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HungerTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoodDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FoodDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static void NewProp_Hit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFood_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_MaxFood;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFood_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_CurrentFood;
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
		{ &Z_Construct_UFunction_APetMaster_OnCapsuleHit, "OnCapsuleHit" }, // 1991250931
		{ &Z_Construct_UFunction_APetMaster_RagdollReset, "RagdollReset" }, // 3266554457
		{ &Z_Construct_UFunction_APetMaster_RagdollTimer, "RagdollTimer" }, // 2702248243
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_SpeciesType_MetaData[] = {
		{ "Category", "Species" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0-1f used to Dicatate the blend shapes\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0-1f used to Dicatate the blend shapes" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_SpeciesType = { "SpeciesType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, SpeciesType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_SpeciesType_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_SpeciesType_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution_MetaData[] = {
		{ "Category", "Evolution" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution = { "CurrentEvolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, CurrentEvolution), Z_Construct_UEnum_PetGameUE_EEvolution, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution_MetaData) }; // 1680861448
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Capsule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//capsule \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "capsule" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00100000000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_CapsuleComp_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_CapsuleComp_MetaData) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_GroomBashful_MetaData[] = {
		{ "Category", "Grooms" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//include elder grooms\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "include elder grooms" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_GroomBashful = { "GroomBashful", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, GroomBashful), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_GroomBashful_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_GroomBashful_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_GroomJoyful_MetaData[] = {
		{ "Category", "Grooms" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_GroomJoyful = { "GroomJoyful", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, GroomJoyful), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_GroomJoyful_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_GroomJoyful_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_GroomCalm_MetaData[] = {
		{ "Category", "Grooms" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_GroomCalm = { "GroomCalm", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, GroomCalm), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_GroomCalm_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_GroomCalm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_GroomSerious_MetaData[] = {
		{ "Category", "Grooms" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_GroomSerious = { "GroomSerious", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, GroomSerious), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_GroomSerious_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_GroomSerious_MetaData) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_BabyTime_MetaData[] = {
		{ "Category", "Timer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//age time length\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "age time length" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_BabyTime = { "BabyTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, BabyTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_BabyTime_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_BabyTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_AdultTime_MetaData[] = {
		{ "Category", "Timer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//2 mins\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2 mins" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_AdultTime = { "AdultTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, AdultTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_AdultTime_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_AdultTime_MetaData) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_RagdollTimeAmount_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_RagdollTimeAmount = { "RagdollTimeAmount", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, RagdollTimeAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_RagdollTimeAmount_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_RagdollTimeAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_IsHungry_MetaData[] = {
		{ "Category", "Eat" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
	};
#endif
	void Z_Construct_UClass_APetMaster_Statics::NewProp_IsHungry_SetBit(void* Obj)
	{
		((APetMaster*)Obj)->IsHungry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_IsHungry = { "IsHungry", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APetMaster), &Z_Construct_UClass_APetMaster_Statics::NewProp_IsHungry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_IsHungry_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_IsHungry_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_HungerTime_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_HungerTime = { "HungerTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, HungerTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_HungerTime_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_HungerTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_FoodDistance_MetaData[] = {
		{ "Category", "Eat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//function to ray trace food infront of pet\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "function to ray trace food infront of pet" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_FoodDistance = { "FoodDistance", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, FoodDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_FoodDistance_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_FoodDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_Hit_MetaData[] = {
		{ "Category", "Eat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//distance to food check\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "distance to food check" },
#endif
	};
#endif
	void Z_Construct_UClass_APetMaster_Statics::NewProp_Hit_SetBit(void* Obj)
	{
		((APetMaster*)Obj)->Hit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APetMaster), &Z_Construct_UClass_APetMaster_Statics::NewProp_Hit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_Hit_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_Hit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_MaxFood_MetaData[] = {
		{ "Category", "Eat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//variable of hit return\n" },
#endif
		{ "ModuleRelativePath", "Public/PetMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "variable of hit return" },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_MaxFood = { "MaxFood", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, MaxFood), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_MaxFood_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_MaxFood_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentFood_MetaData[] = {
		{ "Category", "Eat" },
		{ "ModuleRelativePath", "Public/PetMaster.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentFood = { "CurrentFood", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetMaster, CurrentFood), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentFood_MetaData), Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentFood_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APetMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_PFJoyful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_NFSerious,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_PFCalm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_NFBashful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_SpeciesType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentEvolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_CapsuleComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshAdult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshBaby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_PetMeshElder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_GroomBashful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_GroomJoyful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_GroomCalm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_GroomSerious,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_DefaultSceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_BabyTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_AdultTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_EvolutionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_RagdollTimeAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_IsHungry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_HungerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_FoodDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_MaxFood,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetMaster_Statics::NewProp_CurrentFood,
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
		{ Z_Construct_UClass_APetMaster, APetMaster::StaticClass, TEXT("APetMaster"), &Z_Registration_Info_UClass_APetMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APetMaster), 78403299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_2021758649(TEXT("/Script/PetGameUE"),
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
