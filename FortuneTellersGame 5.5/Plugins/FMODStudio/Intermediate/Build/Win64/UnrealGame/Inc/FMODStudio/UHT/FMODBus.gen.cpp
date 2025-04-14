// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Classes/FMODBus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODBus() {}

// Begin Cross Module References
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBus();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBus_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References

// Begin Class UFMODBus
void UFMODBus::StaticRegisterNativesUFMODBus()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODBus);
UClass* Z_Construct_UClass_UFMODBus_NoRegister()
{
	return UFMODBus::StaticClass();
}
struct Z_Construct_UClass_UFMODBus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * FMOD Bus Asset.\n */" },
		{ "IncludePath", "FMODBus.h" },
		{ "ModuleRelativePath", "Classes/FMODBus.h" },
		{ "ToolTip", "FMOD Bus Asset." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODBus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFMODBus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFMODAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODBus_Statics::ClassParams = {
	&UFMODBus::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBus_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODBus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODBus()
{
	if (!Z_Registration_Info_UClass_UFMODBus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODBus.OuterSingleton, Z_Construct_UClass_UFMODBus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODBus.OuterSingleton;
}
template<> FMODSTUDIO_API UClass* StaticClass<UFMODBus>()
{
	return UFMODBus::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODBus);
UFMODBus::~UFMODBus() {}
// End Class UFMODBus

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBus_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODBus, UFMODBus::StaticClass, TEXT("UFMODBus"), &Z_Registration_Info_UClass_UFMODBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODBus), 1576447293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBus_h_2820843032(TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBus_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
