// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFPS_CPP/Private/Gameplay/ShooterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterPlayerController();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	DEFINE_FUNCTION(AShooterPlayerController::execOnEndGameCPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndGameCPP();
		P_NATIVE_END;
	}
	void AShooterPlayerController::StaticRegisterNativesAShooterPlayerController()
	{
		UClass* Class = AShooterPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEndGameCPP", &AShooterPlayerController::execOnEndGameCPP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterPlayerController_OnEndGameCPP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterPlayerController_OnEndGameCPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Gameplay/ShooterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPlayerController_OnEndGameCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPlayerController, nullptr, "OnEndGameCPP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPlayerController_OnEndGameCPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterPlayerController_OnEndGameCPP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShooterPlayerController_OnEndGameCPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterPlayerController_OnEndGameCPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterPlayerController);
	UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister()
	{
		return AShooterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AShooterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShooterInputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShooterInputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ResultWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFPS_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterPlayerController_OnEndGameCPP, "OnEndGameCPP" }, // 2623354115
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Gameplay/ShooterPlayerController.h" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_ShooterInputMappingContext_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_ShooterInputMappingContext = { "ShooterInputMappingContext", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, ShooterInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_ShooterInputMappingContext_MetaData), Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_ShooterInputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_GameplayWidget_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_GameplayWidget = { "GameplayWidget", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, GameplayWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_GameplayWidget_MetaData), Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_GameplayWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_ResultWidget_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_ResultWidget = { "ResultWidget", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPlayerController, ResultWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_ResultWidget_MetaData), Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_ResultWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_ShooterInputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_GameplayWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_ResultWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams = {
		&AShooterPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShooterPlayerController()
	{
		if (!Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton, Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton;
	}
	template<> GAMEFPS_CPP_API UClass* StaticClass<AShooterPlayerController>()
	{
		return AShooterPlayerController::StaticClass();
	}
	AShooterPlayerController::AShooterPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPlayerController);
	AShooterPlayerController::~AShooterPlayerController() {}
	struct Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterPlayerController, AShooterPlayerController::StaticClass, TEXT("AShooterPlayerController"), &Z_Registration_Info_UClass_AShooterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterPlayerController), 2518767861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterPlayerController_h_2599136862(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
