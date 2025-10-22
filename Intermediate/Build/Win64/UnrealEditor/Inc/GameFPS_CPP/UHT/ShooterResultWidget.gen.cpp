// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFPS_CPP/Private/Widget/ShooterResultWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterResultWidget() {}
// Cross Module References
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_UShooterResultWidget();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_UShooterResultWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	void UShooterResultWidget::StaticRegisterNativesUShooterResultWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShooterResultWidget);
	UClass* Z_Construct_UClass_UShooterResultWidget_NoRegister()
	{
		return UShooterResultWidget::StaticClass();
	}
	struct Z_Construct_UClass_UShooterResultWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterResultWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFPS_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterResultWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterResultWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/ShooterResultWidget.h" },
		{ "ModuleRelativePath", "Private/Widget/ShooterResultWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterResultWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterResultWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterResultWidget_Statics::ClassParams = {
		&UShooterResultWidget::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterResultWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UShooterResultWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UShooterResultWidget()
	{
		if (!Z_Registration_Info_UClass_UShooterResultWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterResultWidget.OuterSingleton, Z_Construct_UClass_UShooterResultWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShooterResultWidget.OuterSingleton;
	}
	template<> GAMEFPS_CPP_API UClass* StaticClass<UShooterResultWidget>()
	{
		return UShooterResultWidget::StaticClass();
	}
	UShooterResultWidget::UShooterResultWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterResultWidget);
	UShooterResultWidget::~UShooterResultWidget() {}
	struct Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Widget_ShooterResultWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Widget_ShooterResultWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShooterResultWidget, UShooterResultWidget::StaticClass, TEXT("UShooterResultWidget"), &Z_Registration_Info_UClass_UShooterResultWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterResultWidget), 1596564692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Widget_ShooterResultWidget_h_3193315826(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Widget_ShooterResultWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Widget_ShooterResultWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
