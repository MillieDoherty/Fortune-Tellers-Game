// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Classes/FMODBank.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODBank() {}

// Begin Cross Module References
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBank();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBank_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References

// Begin Class UFMODBank
void UFMODBank::StaticRegisterNativesUFMODBank()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODBank);
UClass* Z_Construct_UClass_UFMODBank_NoRegister()
{
	return UFMODBank::StaticClass();
}
struct Z_Construct_UClass_UFMODBank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * FMOD Bank Asset.\n */" },
		{ "IncludePath", "FMODBank.h" },
		{ "ModuleRelativePath", "Classes/FMODBank.h" },
		{ "ToolTip", "FMOD Bank Asset." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODBank>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFMODBank_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFMODAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBank_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODBank_Statics::ClassParams = {
	&UFMODBank::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBank_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODBank_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODBank()
{
	if (!Z_Registration_Info_UClass_UFMODBank.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODBank.OuterSingleton, Z_Construct_UClass_UFMODBank_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODBank.OuterSingleton;
}
template<> FMODSTUDIO_API UClass* StaticClass<UFMODBank>()
{
	return UFMODBank::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODBank);
UFMODBank::~UFMODBank() {}
// End Class UFMODBank

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBank_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODBank, UFMODBank::StaticClass, TEXT("UFMODBank"), &Z_Registration_Info_UClass_UFMODBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODBank), 3077809225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBank_h_2137983361(TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBank_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
