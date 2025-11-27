// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/ShooterGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class StateOfGameCPP : uint8;
#ifdef GAMEFPS_CPP_ShooterGameMode_generated_h
#error "ShooterGameMode.generated.h already included, missing '#pragma once' in ShooterGameMode.h"
#endif
#define GAMEFPS_CPP_ShooterGameMode_generated_h

#define FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_9_DELEGATE \
GAMEFPS_CPP_API void FShooterGameModeOnEndGame_DelegateWrapper(const FMulticastScriptDelegate& ShooterGameModeOnEndGame);


#define FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_SPARSE_DATA
#define FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStateCPP); \
	DECLARE_FUNCTION(execUpdateRankingCPP);


#define FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_ACCESSORS
#define FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterGameMode(); \
	friend struct Z_Construct_UClass_AShooterGameMode_Statics; \
public: \
	DECLARE_CLASS(AShooterGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameFPS_CPP"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameMode)


#define FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterGameMode(AShooterGameMode&&); \
	NO_API AShooterGameMode(const AShooterGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterGameMode) \
	NO_API virtual ~AShooterGameMode();


#define FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_22_PROLOG
#define FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_SPARSE_DATA \
	FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_ACCESSORS \
	FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_INCLASS_NO_PURE_DECLS \
	FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEFPS_CPP_API UClass* StaticClass<class AShooterGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h


#define FOREACH_ENUM_STATEOFGAMECPP(op) \
	op(StateOfGameCPP::Ready) \
	op(StateOfGameCPP::Playing) \
	op(StateOfGameCPP::Ended) 

enum class StateOfGameCPP : uint8;
template<> struct TIsUEnumClass<StateOfGameCPP> { enum { Value = true }; };
template<> GAMEFPS_CPP_API UEnum* StaticEnum<StateOfGameCPP>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
