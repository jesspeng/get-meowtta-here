// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GetMeowttaHere/GetMeowttaHereGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetMeowttaHereGameMode() {}
// Cross Module References
	GETMEOWTTAHERE_API UClass* Z_Construct_UClass_AGetMeowttaHereGameMode_NoRegister();
	GETMEOWTTAHERE_API UClass* Z_Construct_UClass_AGetMeowttaHereGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GetMeowttaHere();
// End Cross Module References
	void AGetMeowttaHereGameMode::StaticRegisterNativesAGetMeowttaHereGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGetMeowttaHereGameMode_NoRegister()
	{
		return AGetMeowttaHereGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGetMeowttaHereGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGetMeowttaHereGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GetMeowttaHere,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGetMeowttaHereGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GetMeowttaHereGameMode.h" },
		{ "ModuleRelativePath", "GetMeowttaHereGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGetMeowttaHereGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGetMeowttaHereGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGetMeowttaHereGameMode_Statics::ClassParams = {
		&AGetMeowttaHereGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGetMeowttaHereGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGetMeowttaHereGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGetMeowttaHereGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGetMeowttaHereGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGetMeowttaHereGameMode, 2438985789);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGetMeowttaHereGameMode(Z_Construct_UClass_AGetMeowttaHereGameMode, &AGetMeowttaHereGameMode::StaticClass, TEXT("/Script/GetMeowttaHere"), TEXT("AGetMeowttaHereGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGetMeowttaHereGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
