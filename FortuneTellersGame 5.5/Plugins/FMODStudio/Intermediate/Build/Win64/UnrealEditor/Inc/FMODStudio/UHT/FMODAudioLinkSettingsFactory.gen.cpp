// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODAudioLinkEditor/Private/FMODAudioLinkSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAudioLinkSettingsFactory() {}

// Begin Cross Module References
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioLinkSettingsFactory();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioLinkSettingsFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References

// Begin Class UFMODAudioLinkSettingsFactory
void UFMODAudioLinkSettingsFactory::StaticRegisterNativesUFMODAudioLinkSettingsFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODAudioLinkSettingsFactory);
UClass* Z_Construct_UClass_UFMODAudioLinkSettingsFactory_NoRegister()
{
	return UFMODAudioLinkSettingsFactory::StaticClass();
}
struct Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "" },
		{ "ModuleRelativePath", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAudioLinkSettingsFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics::ClassParams = {
	&UFMODAudioLinkSettingsFactory::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODAudioLinkSettingsFactory()
{
	if (!Z_Registration_Info_UClass_UFMODAudioLinkSettingsFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODAudioLinkSettingsFactory.OuterSingleton, Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODAudioLinkSettingsFactory.OuterSingleton;
}
template<> FMODSTUDIO_API UClass* StaticClass<UFMODAudioLinkSettingsFactory>()
{
	return UFMODAudioLinkSettingsFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAudioLinkSettingsFactory);
UFMODAudioLinkSettingsFactory::~UFMODAudioLinkSettingsFactory() {}
// End Class UFMODAudioLinkSettingsFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODAudioLinkEditor_Private_FMODAudioLinkSettingsFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODAudioLinkSettingsFactory, UFMODAudioLinkSettingsFactory::StaticClass, TEXT("UFMODAudioLinkSettingsFactory"), &Z_Registration_Info_UClass_UFMODAudioLinkSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODAudioLinkSettingsFactory), 2942361175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODAudioLinkEditor_Private_FMODAudioLinkSettingsFactory_h_2392501588(TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODAudioLinkEditor_Private_FMODAudioLinkSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODAudioLinkEditor_Private_FMODAudioLinkSettingsFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
