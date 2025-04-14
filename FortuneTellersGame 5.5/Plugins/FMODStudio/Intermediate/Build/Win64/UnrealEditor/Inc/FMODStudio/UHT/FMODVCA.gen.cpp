// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Classes/FMODVCA.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODVCA() {}

// Begin Cross Module References
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODVCA();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODVCA_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References

// Begin Class UFMODVCA
void UFMODVCA::StaticRegisterNativesUFMODVCA()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODVCA);
UClass* Z_Construct_UClass_UFMODVCA_NoRegister()
{
	return UFMODVCA::StaticClass();
}
struct Z_Construct_UClass_UFMODVCA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * FMOD VCA Asset.\n */" },
		{ "IncludePath", "FMODVCA.h" },
		{ "ModuleRelativePath", "Classes/FMODVCA.h" },
		{ "ToolTip", "FMOD VCA Asset." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODVCA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFMODVCA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFMODAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODVCA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODVCA_Statics::ClassParams = {
	&UFMODVCA::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODVCA_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODVCA_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODVCA()
{
	if (!Z_Registration_Info_UClass_UFMODVCA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODVCA.OuterSingleton, Z_Construct_UClass_UFMODVCA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODVCA.OuterSingleton;
}
template<> FMODSTUDIO_API UClass* StaticClass<UFMODVCA>()
{
	return UFMODVCA::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODVCA);
UFMODVCA::~UFMODVCA() {}
// End Class UFMODVCA

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODVCA_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODVCA, UFMODVCA::StaticClass, TEXT("UFMODVCA"), &Z_Registration_Info_UClass_UFMODVCA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODVCA), 3541087757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODVCA_h_3327026014(TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODVCA_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODVCA_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
