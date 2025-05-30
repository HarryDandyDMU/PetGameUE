// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PetMaster.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PETGAMEUE_PetMaster_generated_h
#error "PetMaster.generated.h already included, missing '#pragma once' in PetMaster.h"
#endif
#define PETGAMEUE_PetMaster_generated_h

#define FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_SPARSE_DATA
#define FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRagdollReset); \
	DECLARE_FUNCTION(execRagdollTimer); \
	DECLARE_FUNCTION(execEvolve); \
	DECLARE_FUNCTION(execOnCapsuleHit);


#define FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_ACCESSORS
#define FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPetMaster(); \
	friend struct Z_Construct_UClass_APetMaster_Statics; \
public: \
	DECLARE_CLASS(APetMaster, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PetGameUE"), NO_API) \
	DECLARE_SERIALIZER(APetMaster)


#define FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APetMaster(APetMaster&&); \
	NO_API APetMaster(const APetMaster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APetMaster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APetMaster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APetMaster) \
	NO_API virtual ~APetMaster();


#define FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_22_PROLOG
#define FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_SPARSE_DATA \
	FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_ACCESSORS \
	FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_INCLASS_NO_PURE_DECLS \
	FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PETGAMEUE_API UClass* StaticClass<class APetMaster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PetGameUE_Source_PetGameUE_Public_PetMaster_h


#define FOREACH_ENUM_EEVOLUTION(op) \
	op(EEvolution::Baby) \
	op(EEvolution::Adult) \
	op(EEvolution::Elder) 

enum class EEvolution : uint8;
template<> struct TIsUEnumClass<EEvolution> { enum { Value = true }; };
template<> PETGAMEUE_API UEnum* StaticEnum<EEvolution>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
