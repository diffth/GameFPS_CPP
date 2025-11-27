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
	GAMEFPS_CPP_API UEnum* Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP();
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
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_StateOfGameCPP;
	static UEnum* StateOfGameCPP_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_StateOfGameCPP.OuterSingleton)
		{
			Z_Registration_Info_UEnum_StateOfGameCPP.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP, (UObject*)Z_Construct_UPackage__Script_GameFPS_CPP(), TEXT("StateOfGameCPP"));
		}
		return Z_Registration_Info_UEnum_StateOfGameCPP.OuterSingleton;
	}
	template<> GAMEFPS_CPP_API UEnum* StaticEnum<StateOfGameCPP>()
	{
		return StateOfGameCPP_StaticEnum();
	}
	struct Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP_Statics::Enumerators[] = {
		{ "StateOfGameCPP::Ready", (int64)StateOfGameCPP::Ready },
		{ "StateOfGameCPP::Playing", (int64)StateOfGameCPP::Playing },
		{ "StateOfGameCPP::Ended", (int64)StateOfGameCPP::Ended },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ended.Name", "StateOfGameCPP::Ended" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
		{ "Playing.Name", "StateOfGameCPP::Playing" },
		{ "Ready.Name", "StateOfGameCPP::Ready" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameFPS_CPP,
		nullptr,
		"StateOfGameCPP",
		"StateOfGameCPP",
		Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP()
	{
		if (!Z_Registration_Info_UEnum_StateOfGameCPP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_StateOfGameCPP.InnerSingleton, Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_StateOfGameCPP.InnerSingleton;
	}
	DEFINE_FUNCTION(AShooterGameMode::execGetStartTimeCPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetStartTimeCPP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterGameMode::execGetStateCPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(StateOfGameCPP*)Z_Param__Result=P_THIS->GetStateCPP();
		P_NATIVE_END;
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
			{ "GetStartTimeCPP", &AShooterGameMode::execGetStartTimeCPP },
			{ "GetStateCPP", &AShooterGameMode::execGetStateCPP },
			{ "UpdateRankingCPP", &AShooterGameMode::execUpdateRankingCPP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics
	{
		struct ShooterGameMode_eventGetStartTimeCPP_Parms
		{
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterGameMode_eventGetStartTimeCPP_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterGameMode, nullptr, "GetStartTimeCPP", nullptr, nullptr, Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics::ShooterGameMode_eventGetStartTimeCPP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics::ShooterGameMode_eventGetStartTimeCPP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics
	{
		struct ShooterGameMode_eventGetStateCPP_Parms
		{
			StateOfGameCPP ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterGameMode_eventGetStateCPP_Parms, ReturnValue), Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP, METADATA_PARAMS(0, nullptr) }; // 3222178229
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterGameMode, nullptr, "GetStateCPP", nullptr, nullptr, Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::ShooterGameMode_eventGetStateCPP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::ShooterGameMode_eventGetStateCPP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShooterGameMode_GetStateCPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterGameMode_GetStateCPP_Statics::FuncParams);
		}
		return ReturnFunction;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_StateCPP_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateCPP_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StateCPP;
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
		{ &Z_Construct_UFunction_AShooterGameMode_GetStartTimeCPP, "GetStartTimeCPP" }, // 3907107626
		{ &Z_Construct_UFunction_AShooterGameMode_GetStateCPP, "GetStateCPP" }, // 4020000867
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_StateCPP_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameMode_Statics::NewProp_StateCPP_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_StateCPP = { "StateCPP", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterGameMode, StateCPP), Z_Construct_UEnum_GameFPS_CPP_StateOfGameCPP, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::NewProp_StateCPP_MetaData), Z_Construct_UClass_AShooterGameMode_Statics::NewProp_StateCPP_MetaData) }; // 3222178229
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_StateCPP_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_StateCPP,
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_Statics::EnumInfo[] = {
		{ StateOfGameCPP_StaticEnum, TEXT("StateOfGameCPP"), &Z_Registration_Info_UEnum_StateOfGameCPP, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3222178229U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterGameMode, AShooterGameMode::StaticClass, TEXT("AShooterGameMode"), &Z_Registration_Info_UClass_AShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterGameMode), 1321260587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_722100997(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterGameMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
