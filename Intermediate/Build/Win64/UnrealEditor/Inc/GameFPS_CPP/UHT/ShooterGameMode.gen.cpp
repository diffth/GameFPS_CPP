// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFPS_CPP/Private/Gameplay/ShooterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameMode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterGameMode();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterGameMode_NoRegister();
	GAMEFPS_CPP_API UFunction* Z_Construct_USparseDelegateFunction_GameFPS_CPP_ShooterGameModeOnEndGame__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_GameFPS_CPP_ShooterGameModeOnEndGame__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_GameFPS_CPP_ShooterGameModeOnEndGame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_GameFPS_CPP_ShooterGameModeOnEndGame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameFPS_CPP, nullptr, "ShooterGameModeOnEndGame__DelegateSignature", "ShooterGameMode", "OnEndGameCPP", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_GameFPS_CPP_ShooterGameModeOnEndGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_GameFPS_CPP_ShooterGameModeOnEndGame__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_USparseDelegateFunction_GameFPS_CPP_ShooterGameModeOnEndGame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_GameFPS_CPP_ShooterGameModeOnEndGame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FShooterGameModeOnEndGame_DelegateWrapper(const FMulticastScriptDelegate& ShooterGameModeOnEndGame)
{
	ShooterGameModeOnEndGame.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(AShooterGameMode::execUpdateRankingCPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRankingCPP();
		P_NATIVE_END;
	}
	void AShooterGameMode::StaticRegisterNativesAShooterGameMode()
	{
		UClass* Class = AShooterGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateRankingCPP", &AShooterGameMode::execUpdateRankingCPP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterGameMode_UpdateRankingCPP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterGameMode_UpdateRankingCPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterGameMode_UpdateRankingCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterGameMode, nullptr, "UpdateRankingCPP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGameMode_UpdateRankingCPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterGameMode_UpdateRankingCPP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShooterGameMode_UpdateRankingCPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterGameMode_UpdateRankingCPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterGameMode);
	UClass* Z_Construct_UClass_AShooterGameMode_NoRegister()
	{
		return AShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEndGameCPP_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndGameCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTimeCPP_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTimeCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTimeCPP_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndTimeCPP;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RankingScoresCPP_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RankingScoresCPP_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RankingScoresCPP;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RankingTimesCPP_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RankingTimesCPP_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RankingTimesCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RankingCPP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RankingCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreCPP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoreCPP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFPS_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterGameMode_UpdateRankingCPP, "UpdateRankingCPP" }, // 1057891345
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gameplay/ShooterGameMode.h" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_OnEndGameCPP_MetaData[] = {
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_OnEndGameCPP = { "OnEndGameCPP", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterGameMode, OnEndGameCPP), Z_Construct_USparseDelegateFunction_GameFPS_CPP_ShooterGameModeOnEndGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_OnEndGameCPP_MetaData), Z_Construct_UClass_AShooterGameMode_Statics::NewProp_OnEndGameCPP_MetaData) }; // 1772889947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_StartTimeCPP_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_StartTimeCPP = { "StartTimeCPP", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterGameMode, StartTimeCPP), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_StartTimeCPP_MetaData), Z_Construct_UClass_AShooterGameMode_Statics::NewProp_StartTimeCPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_EndTimeCPP_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_EndTimeCPP = { "EndTimeCPP", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterGameMode, EndTimeCPP), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_EndTimeCPP_MetaData), Z_Construct_UClass_AShooterGameMode_Statics::NewProp_EndTimeCPP_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingScoresCPP_Inner = { "RankingScoresCPP", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingScoresCPP_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingScoresCPP = { "RankingScoresCPP", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterGameMode, RankingScoresCPP), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingScoresCPP_MetaData), Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingScoresCPP_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingTimesCPP_Inner = { "RankingTimesCPP", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingTimesCPP_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingTimesCPP = { "RankingTimesCPP", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterGameMode, RankingTimesCPP), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingTimesCPP_MetaData), Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingTimesCPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingCPP_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingCPP = { "RankingCPP", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterGameMode, RankingCPP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingCPP_MetaData), Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingCPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_ScoreCPP_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_ScoreCPP = { "ScoreCPP", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterGameMode, ScoreCPP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_ScoreCPP_MetaData), Z_Construct_UClass_AShooterGameMode_Statics::NewProp_ScoreCPP_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_OnEndGameCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_StartTimeCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_EndTimeCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingScoresCPP_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingScoresCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingTimesCPP_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingTimesCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_RankingCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_ScoreCPP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterGameMode_Statics::ClassParams = {
		&AShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShooterGameMode()
	{
		if (!Z_Registration_Info_UClass_AShooterGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterGameMode.OuterSingleton, Z_Construct_UClass_AShooterGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterGameMode.OuterSingleton;
	}
	template<> GAMEFPS_CPP_API UClass* StaticClass<AShooterGameMode>()
	{
		return AShooterGameMode::StaticClass();
	}
	AShooterGameMode::AShooterGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGameMode);
	AShooterGameMode::~AShooterGameMode() {}
	struct Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterGameMode, AShooterGameMode::StaticClass, TEXT("AShooterGameMode"), &Z_Registration_Info_UClass_AShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterGameMode), 2775050970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_1319632483(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
