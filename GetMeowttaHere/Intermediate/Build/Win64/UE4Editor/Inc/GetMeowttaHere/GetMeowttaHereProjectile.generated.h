// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GETMEOWTTAHERE_GetMeowttaHereProjectile_generated_h
#error "GetMeowttaHereProjectile.generated.h already included, missing '#pragma once' in GetMeowttaHereProjectile.h"
#endif
#define GETMEOWTTAHERE_GetMeowttaHereProjectile_generated_h

#define GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGetMeowttaHereProjectile(); \
	friend struct Z_Construct_UClass_AGetMeowttaHereProjectile_Statics; \
public: \
	DECLARE_CLASS(AGetMeowttaHereProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GetMeowttaHere"), NO_API) \
	DECLARE_SERIALIZER(AGetMeowttaHereProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGetMeowttaHereProjectile(); \
	friend struct Z_Construct_UClass_AGetMeowttaHereProjectile_Statics; \
public: \
	DECLARE_CLASS(AGetMeowttaHereProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GetMeowttaHere"), NO_API) \
	DECLARE_SERIALIZER(AGetMeowttaHereProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGetMeowttaHereProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGetMeowttaHereProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGetMeowttaHereProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGetMeowttaHereProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGetMeowttaHereProjectile(AGetMeowttaHereProjectile&&); \
	NO_API AGetMeowttaHereProjectile(const AGetMeowttaHereProjectile&); \
public:


#define GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGetMeowttaHereProjectile(AGetMeowttaHereProjectile&&); \
	NO_API AGetMeowttaHereProjectile(const AGetMeowttaHereProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGetMeowttaHereProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGetMeowttaHereProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGetMeowttaHereProjectile)


#define GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGetMeowttaHereProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGetMeowttaHereProjectile, ProjectileMovement); }


#define GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_9_PROLOG
#define GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_RPC_WRAPPERS \
	GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_INCLASS \
	GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_INCLASS_NO_PURE_DECLS \
	GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GetMeowttaHere_Source_GetMeowttaHere_GetMeowttaHereProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
