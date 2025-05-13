// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BTAIPetController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PETGAMEUE_BTAIPetController_generated_h
#error "BTAIPetController.generated.h already included, missing '#pragma once' in BTAIPetController.h"
#endif
#define PETGAMEUE_BTAIPetController_generated_h

#define FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_SPARSE_DATA
#define FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPerceptionUpdated);


#define FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_ACCESSORS
#define FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABTAIPetController(); \
	friend struct Z_Construct_UClass_ABTAIPetController_Statics; \
public: \
	DECLARE_CLASS(ABTAIPetController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PetGameUE"), NO_API) \
	DECLARE_SERIALIZER(ABTAIPetController)


#define FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABTAIPetController(ABTAIPetController&&); \
	NO_API ABTAIPetController(const ABTAIPetController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABTAIPetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABTAIPetController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABTAIPetController) \
	NO_API virtual ~ABTAIPetController();


#define FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_18_PROLOG
#define FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_SPARSE_DATA \
	FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_ACCESSORS \
	FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_INCLASS_NO_PURE_DECLS \
	FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PETGAMEUE_API UClass* StaticClass<class ABTAIPetController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PetGameUE_Source_PetGameUE_Public_BTAIPetController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
