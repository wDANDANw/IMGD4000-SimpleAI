// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRESENTATION_SampleCharacter_generated_h
#error "SampleCharacter.generated.h already included, missing '#pragma once' in SampleCharacter.h"
#endif
#define PRESENTATION_SampleCharacter_generated_h

#define Presentation_Source_Presentation_SampleCharacter_h_12_SPARSE_DATA
#define Presentation_Source_Presentation_SampleCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMovingForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MovingForward(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrimaryAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrimaryAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execstopPrimaryAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->stopPrimaryAttack(); \
		P_NATIVE_END; \
	}


#define Presentation_Source_Presentation_SampleCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMovingForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MovingForward(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrimaryAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrimaryAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execstopPrimaryAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->stopPrimaryAttack(); \
		P_NATIVE_END; \
	}


#define Presentation_Source_Presentation_SampleCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASampleCharacter(); \
	friend struct Z_Construct_UClass_ASampleCharacter_Statics; \
public: \
	DECLARE_CLASS(ASampleCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Presentation"), NO_API) \
	DECLARE_SERIALIZER(ASampleCharacter)


#define Presentation_Source_Presentation_SampleCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASampleCharacter(); \
	friend struct Z_Construct_UClass_ASampleCharacter_Statics; \
public: \
	DECLARE_CLASS(ASampleCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Presentation"), NO_API) \
	DECLARE_SERIALIZER(ASampleCharacter)


#define Presentation_Source_Presentation_SampleCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASampleCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASampleCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASampleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASampleCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASampleCharacter(ASampleCharacter&&); \
	NO_API ASampleCharacter(const ASampleCharacter&); \
public:


#define Presentation_Source_Presentation_SampleCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASampleCharacter(ASampleCharacter&&); \
	NO_API ASampleCharacter(const ASampleCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASampleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASampleCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASampleCharacter)


#define Presentation_Source_Presentation_SampleCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define Presentation_Source_Presentation_SampleCharacter_h_9_PROLOG
#define Presentation_Source_Presentation_SampleCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Presentation_Source_Presentation_SampleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Presentation_Source_Presentation_SampleCharacter_h_12_SPARSE_DATA \
	Presentation_Source_Presentation_SampleCharacter_h_12_RPC_WRAPPERS \
	Presentation_Source_Presentation_SampleCharacter_h_12_INCLASS \
	Presentation_Source_Presentation_SampleCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Presentation_Source_Presentation_SampleCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Presentation_Source_Presentation_SampleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Presentation_Source_Presentation_SampleCharacter_h_12_SPARSE_DATA \
	Presentation_Source_Presentation_SampleCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Presentation_Source_Presentation_SampleCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Presentation_Source_Presentation_SampleCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRESENTATION_API UClass* StaticClass<class ASampleCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Presentation_Source_Presentation_SampleCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
