// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GetMeowttaHere/GetMeowttaHereHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetMeowttaHereHUD() {}
// Cross Module References
	GETMEOWTTAHERE_API UClass* Z_Construct_UClass_AGetMeowttaHereHUD_NoRegister();
	GETMEOWTTAHERE_API UClass* Z_Construct_UClass_AGetMeowttaHereHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GetMeowttaHere();
// End Cross Module References
	void AGetMeowttaHereHUD::StaticRegisterNativesAGetMeowttaHereHUD()
	{
	}
	UClass* Z_Construct_UClass_AGetMeowttaHereHUD_NoRegister()
	{
		return AGetMeowttaHereHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGetMeowttaHereHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGetMeowttaHereHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GetMeowttaHere,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGetMeowttaHereHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GetMeowttaHereHUD.h" },
		{ "ModuleRelativePath", "GetMeowttaHereHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGetMeowttaHereHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGetMeowttaHereHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGetMeowttaHereHUD_Statics::ClassParams = {
		&AGetMeowttaHereHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGetMeowttaHereHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGetMeowttaHereHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGetMeowttaHereHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGetMeowttaHereHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGetMeowttaHereHUD, 2514949335);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGetMeowttaHereHUD(Z_Construct_UClass_AGetMeowttaHereHUD, &AGetMeowttaHereHUD::StaticClass, TEXT("/Script/GetMeowttaHere"), TEXT("AGetMeowttaHereHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGetMeowttaHereHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
