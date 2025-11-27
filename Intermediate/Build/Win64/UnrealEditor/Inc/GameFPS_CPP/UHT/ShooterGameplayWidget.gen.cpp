// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFPS_CPP/Private/Widget/ShooterGameplayWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameplayWidget() {}
// Cross Module References
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_UShooterGameplayWidget();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_UShooterGameplayWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	DEFINE_FUNCTION(UShooterGameplayWidget::execTickTimeCPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickTimeCPP();
		P_NATIVE_END;
	}
	void UShooterGameplayWidget::StaticRegisterNativesUShooterGameplayWidget()
	{
		UClass* Class = UShooterGameplayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TickTimeCPP", &UShooterGameplayWidget::execTickTimeCPP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShooterGameplayWidget_TickTimeCPP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShooterGameplayWidget_TickTimeCPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Widget/ShooterGameplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterGameplayWidget_TickTimeCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShooterGameplayWidget, nullptr, "TickTimeCPP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterGameplayWidget_TickTimeCPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterGameplayWidget_TickTimeCPP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UShooterGameplayWidget_TickTimeCPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterGameplayWidget_TickTimeCPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShooterGameplayWidget);
	UClass* Z_Construct_UClass_UShooterGameplayWidget_NoRegister()
	{
		return UShooterGameplayWidget::StaticClass();
	}
	struct Z_Construct_UClass_UShooterGameplayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextTime_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextRemainingBullets_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextRemainingBullets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextMaxRemainingBullets_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextMaxRemainingBullets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextWeaponName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextWeaponName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextFireMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextFireMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterGameplayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFPS_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameplayWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UShooterGameplayWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShooterGameplayWidget_TickTimeCPP, "TickTimeCPP" }, // 2308913728
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameplayWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameplayWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/ShooterGameplayWidget.h" },
		{ "ModuleRelativePath", "Private/Widget/ShooterGameplayWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextTime_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShooterGameplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Widget/ShooterGameplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextTime = { "TextTime", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterGameplayWidget, TextTime), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextTime_MetaData), Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextRemainingBullets_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShooterGameplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Widget/ShooterGameplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextRemainingBullets = { "TextRemainingBullets", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterGameplayWidget, TextRemainingBullets), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextRemainingBullets_MetaData), Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextRemainingBullets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextMaxRemainingBullets_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShooterGameplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Widget/ShooterGameplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextMaxRemainingBullets = { "TextMaxRemainingBullets", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterGameplayWidget, TextMaxRemainingBullets), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextMaxRemainingBullets_MetaData), Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextMaxRemainingBullets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextWeaponName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShooterGameplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Widget/ShooterGameplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextWeaponName = { "TextWeaponName", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterGameplayWidget, TextWeaponName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextWeaponName_MetaData), Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextWeaponName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextFireMode_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ShooterGameplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Widget/ShooterGameplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextFireMode = { "TextFireMode", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterGameplayWidget, TextFireMode), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextFireMode_MetaData), Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextFireMode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterGameplayWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextRemainingBullets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextMaxRemainingBullets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextWeaponName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameplayWidget_Statics::NewProp_TextFireMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterGameplayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterGameplayWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterGameplayWidget_Statics::ClassParams = {
		&UShooterGameplayWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShooterGameplayWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameplayWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameplayWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UShooterGameplayWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameplayWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UShooterGameplayWidget()
	{
		if (!Z_Registration_Info_UClass_UShooterGameplayWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterGameplayWidget.OuterSingleton, Z_Construct_UClass_UShooterGameplayWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShooterGameplayWidget.OuterSingleton;
	}
	template<> GAMEFPS_CPP_API UClass* StaticClass<UShooterGameplayWidget>()
	{
		return UShooterGameplayWidget::StaticClass();
	}
	UShooterGameplayWidget::UShooterGameplayWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterGameplayWidget);
	UShooterGameplayWidget::~UShooterGameplayWidget() {}
	struct Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Widget_ShooterGameplayWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Widget_ShooterGameplayWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShooterGameplayWidget, UShooterGameplayWidget::StaticClass, TEXT("UShooterGameplayWidget"), &Z_Registration_Info_UClass_UShooterGameplayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterGameplayWidget), 3567999674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Widget_ShooterGameplayWidget_h_249863958(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Widget_ShooterGameplayWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Widget_ShooterGameplayWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
