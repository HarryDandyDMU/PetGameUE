// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PETGAMEUE_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define PETGAMEUE_MainCharacter_generated_h

#define FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_15_DELEGATE \
PETGAMEUE_API void FInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& InventoryUpdated);


#define FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_SPARSE_DATA
#define FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDropItem);


#define FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_ACCESSORS
#define FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PetGameUE"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter) \
	NO_API virtual ~AMainCharacter();


#define FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_17_PROLOG
#define FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_SPARSE_DATA \
	FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_ACCESSORS \
	FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PETGAMEUE_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PetGameUE_Source_PetGameUE_Public_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
