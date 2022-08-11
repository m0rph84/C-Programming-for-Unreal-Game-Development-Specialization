// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstUnrealScript/FirstUnrealScriptGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstUnrealScriptGameModeBase() {}
// Cross Module References
	FIRSTUNREALSCRIPT_API UClass* Z_Construct_UClass_AFirstUnrealScriptGameModeBase_NoRegister();
	FIRSTUNREALSCRIPT_API UClass* Z_Construct_UClass_AFirstUnrealScriptGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstUnrealScript();
// End Cross Module References
	void AFirstUnrealScriptGameModeBase::StaticRegisterNativesAFirstUnrealScriptGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstUnrealScriptGameModeBase);
	UClass* Z_Construct_UClass_AFirstUnrealScriptGameModeBase_NoRegister()
	{
		return AFirstUnrealScriptGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFirstUnrealScriptGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstUnrealScriptGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstUnrealScript,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstUnrealScriptGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FirstUnrealScriptGameModeBase.h" },
		{ "ModuleRelativePath", "FirstUnrealScriptGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstUnrealScriptGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstUnrealScriptGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstUnrealScriptGameModeBase_Statics::ClassParams = {
		&AFirstUnrealScriptGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstUnrealScriptGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstUnrealScriptGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstUnrealScriptGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFirstUnrealScriptGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstUnrealScriptGameModeBase.OuterSingleton, Z_Construct_UClass_AFirstUnrealScriptGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstUnrealScriptGameModeBase.OuterSingleton;
	}
	template<> FIRSTUNREALSCRIPT_API UClass* StaticClass<AFirstUnrealScriptGameModeBase>()
	{
		return AFirstUnrealScriptGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstUnrealScriptGameModeBase);
	struct Z_CompiledInDeferFile_FID_FirstUnrealScript_Source_FirstUnrealScript_FirstUnrealScriptGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstUnrealScript_Source_FirstUnrealScript_FirstUnrealScriptGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstUnrealScriptGameModeBase, AFirstUnrealScriptGameModeBase::StaticClass, TEXT("AFirstUnrealScriptGameModeBase"), &Z_Registration_Info_UClass_AFirstUnrealScriptGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstUnrealScriptGameModeBase), 4290916146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstUnrealScript_Source_FirstUnrealScript_FirstUnrealScriptGameModeBase_h_1247583631(TEXT("/Script/FirstUnrealScript"),
		Z_CompiledInDeferFile_FID_FirstUnrealScript_Source_FirstUnrealScript_FirstUnrealScriptGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstUnrealScript_Source_FirstUnrealScript_FirstUnrealScriptGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
