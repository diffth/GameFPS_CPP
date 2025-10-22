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
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	void UShooterGameplayWidget::StaticRegisterNativesUShooterGameplayWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShooterGameplayWidget);
	UClass* Z_Construct_UClass_UShooterGameplayWidget_NoRegister()
	{
		return UShooterGameplayWidget::StaticClass();
	}
	struct Z_Construct_UClass_UShooterGameplayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterGameplayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFPS_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameplayWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameplayWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/ShooterGameplayWidget.h" },
		{ "ModuleRelativePath", "Private/Widget/ShooterGameplayWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterGameplayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterGameplayWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterGameplayWidget_Statics::ClassParams = {
		&UShooterGameplayWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameplayWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UShooterGameplayWidget_Statics::Class_MetaDataParams)
	};
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
		{ Z_Construct_UClass_UShooterGameplayWidget, UShooterGameplayWidget::StaticClass, TEXT("UShooterGameplayWidget"), &Z_Registration_Info_UClass_UShooterGameplayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterGameplayWidget), 181612567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Widget_ShooterGameplayWidget_h_2751555798(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Widget_ShooterGameplayWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Widget_ShooterGameplayWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
