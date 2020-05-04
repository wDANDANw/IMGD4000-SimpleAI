// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Presentation/SampleCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSampleCharacter() {}
// Cross Module References
	PRESENTATION_API UClass* Z_Construct_UClass_ASampleCharacter_NoRegister();
	PRESENTATION_API UClass* Z_Construct_UClass_ASampleCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Presentation();
	PRESENTATION_API UFunction* Z_Construct_UFunction_ASampleCharacter_MovingForward();
	PRESENTATION_API UFunction* Z_Construct_UFunction_ASampleCharacter_PrimaryAttack();
	PRESENTATION_API UFunction* Z_Construct_UFunction_ASampleCharacter_stopPrimaryAttack();
// End Cross Module References
	void ASampleCharacter::StaticRegisterNativesASampleCharacter()
	{
		UClass* Class = ASampleCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MovingForward", &ASampleCharacter::execMovingForward },
			{ "PrimaryAttack", &ASampleCharacter::execPrimaryAttack },
			{ "stopPrimaryAttack", &ASampleCharacter::execstopPrimaryAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASampleCharacter_MovingForward_Statics
	{
		struct SampleCharacter_eventMovingForward_Parms
		{
			float Amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASampleCharacter_MovingForward_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SampleCharacter_eventMovingForward_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASampleCharacter_MovingForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASampleCharacter_MovingForward_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASampleCharacter_MovingForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raccoon Actions" },
		{ "ModuleRelativePath", "SampleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASampleCharacter_MovingForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASampleCharacter, nullptr, "MovingForward", nullptr, nullptr, sizeof(SampleCharacter_eventMovingForward_Parms), Z_Construct_UFunction_ASampleCharacter_MovingForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASampleCharacter_MovingForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASampleCharacter_MovingForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASampleCharacter_MovingForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASampleCharacter_MovingForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASampleCharacter_MovingForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASampleCharacter_PrimaryAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASampleCharacter_PrimaryAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raccoon Actions" },
		{ "ModuleRelativePath", "SampleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASampleCharacter_PrimaryAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASampleCharacter, nullptr, "PrimaryAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASampleCharacter_PrimaryAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASampleCharacter_PrimaryAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASampleCharacter_PrimaryAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASampleCharacter_PrimaryAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASampleCharacter_stopPrimaryAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASampleCharacter_stopPrimaryAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raccoon Actions" },
		{ "ModuleRelativePath", "SampleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASampleCharacter_stopPrimaryAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASampleCharacter, nullptr, "stopPrimaryAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASampleCharacter_stopPrimaryAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASampleCharacter_stopPrimaryAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASampleCharacter_stopPrimaryAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASampleCharacter_stopPrimaryAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASampleCharacter_NoRegister()
	{
		return ASampleCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASampleCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_primaryAttackStarted_MetaData[];
#endif
		static void NewProp_primaryAttackStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_primaryAttackStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASampleCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Presentation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASampleCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASampleCharacter_MovingForward, "MovingForward" }, // 2290105487
		{ &Z_Construct_UFunction_ASampleCharacter_PrimaryAttack, "PrimaryAttack" }, // 1529069095
		{ &Z_Construct_UFunction_ASampleCharacter_stopPrimaryAttack, "stopPrimaryAttack" }, // 2026181547
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASampleCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SampleCharacter.h" },
		{ "ModuleRelativePath", "SampleCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASampleCharacter_Statics::NewProp_primaryAttackStarted_MetaData[] = {
		{ "Category", "SampleCharacter" },
		{ "ModuleRelativePath", "SampleCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASampleCharacter_Statics::NewProp_primaryAttackStarted_SetBit(void* Obj)
	{
		((ASampleCharacter*)Obj)->primaryAttackStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASampleCharacter_Statics::NewProp_primaryAttackStarted = { "primaryAttackStarted", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASampleCharacter), &Z_Construct_UClass_ASampleCharacter_Statics::NewProp_primaryAttackStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASampleCharacter_Statics::NewProp_primaryAttackStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASampleCharacter_Statics::NewProp_primaryAttackStarted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASampleCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASampleCharacter_Statics::NewProp_primaryAttackStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASampleCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASampleCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASampleCharacter_Statics::ClassParams = {
		&ASampleCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASampleCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASampleCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASampleCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASampleCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASampleCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASampleCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASampleCharacter, 2647182466);
	template<> PRESENTATION_API UClass* StaticClass<ASampleCharacter>()
	{
		return ASampleCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASampleCharacter(Z_Construct_UClass_ASampleCharacter, &ASampleCharacter::StaticClass, TEXT("/Script/Presentation"), TEXT("ASampleCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASampleCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
