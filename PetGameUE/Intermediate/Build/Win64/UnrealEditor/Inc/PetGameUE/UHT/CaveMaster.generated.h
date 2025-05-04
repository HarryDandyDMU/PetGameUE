// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaveMaster.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PETGAMEUE_CaveMaster_generated_h
#error "CaveMaster.generated.h already included, missing '#pragma once' in CaveMaster.h"
#endif
#define PETGAMEUE_CaveMaster_generated_h

#define FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_SPARSE_DATA
#define FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlapBox);


#define FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_ACCESSORS
#define FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaveMaster(); \
	friend struct Z_Construct_UClass_ACaveMaster_Statics; \
public: \
	DECLARE_CLASS(ACaveMaster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PetGameUE"), NO_API) \
	DECLARE_SERIALIZER(ACaveMaster)


#define FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaveMaster(ACaveMaster&&); \
	NO_API ACaveMaster(const ACaveMaster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaveMaster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaveMaster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACaveMaster) \
	NO_API virtual ~ACaveMaster();


#define FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_14_PROLOG
#define FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_SPARSE_DATA \
	FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_ACCESSORS \
	FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_INCLASS_NO_PURE_DECLS \
	FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PETGAMEUE_API UClass* StaticClass<class ACaveMaster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PetGameUE_Source_PetGameUE_Public_CaveMaster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
