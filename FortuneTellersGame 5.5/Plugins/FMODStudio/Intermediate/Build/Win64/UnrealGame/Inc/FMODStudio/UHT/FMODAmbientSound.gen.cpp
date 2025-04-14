// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Classes/FMODAmbientSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAmbientSound() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FMODSTUDIO_API UClass* Z_Construct_UClass_AFMODAmbientSound();
FMODSTUDIO_API UClass* Z_Construct_UClass_AFMODAmbientSound_NoRegister();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References

// Begin Class AFMODAmbientSound
void AFMODAmbientSound::StaticRegisterNativesAFMODAmbientSound()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFMODAmbientSound);
UClass* Z_Construct_UClass_AFMODAmbientSound_NoRegister()
{
	return AFMODAmbientSound::StaticClass();
}
struct Z_Construct_UClass_AFMODAmbientSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Audio" },
		{ "ClassGroupNames", "Sounds" },
		{ "Comment", "/** FMOD Ambient Sound.\n*/" },
		{ "HideCategories", "Collision Input" },
		{ "IncludePath", "FMODAmbientSound.h" },
		{ "ModuleRelativePath", "Classes/FMODAmbientSound.h" },
		{ "ToolTip", "FMOD Ambient Sound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** The Audio component for this actor */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sound" },
		{ "ModuleRelativePath", "Classes/FMODAmbientSound.h" },
		{ "ToolTip", "The Audio component for this actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFMODAmbientSound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFMODAmbientSound_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFMODAmbientSound, AudioComponent), Z_Construct_UClass_UFMODAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFMODAmbientSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFMODAmbientSound_Statics::NewProp_AudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFMODAmbientSound_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFMODAmbientSound_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFMODAmbientSound_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFMODAmbientSound_Statics::ClassParams = {
	&AFMODAmbientSound::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFMODAmbientSound_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFMODAmbientSound_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFMODAmbientSound_Statics::Class_MetaDataParams), Z_Construct_UClass_AFMODAmbientSound_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFMODAmbientSound()
{
	if (!Z_Registration_Info_UClass_AFMODAmbientSound.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFMODAmbientSound.OuterSingleton, Z_Construct_UClass_AFMODAmbientSound_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFMODAmbientSound.OuterSingleton;
}
template<> FMODSTUDIO_API UClass* StaticClass<AFMODAmbientSound>()
{
	return AFMODAmbientSound::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFMODAmbientSound);
AFMODAmbientSound::~AFMODAmbientSound() {}
// End Class AFMODAmbientSound

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAmbientSound_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFMODAmbientSound, AFMODAmbientSound::StaticClass, TEXT("AFMODAmbientSound"), &Z_Registration_Info_UClass_AFMODAmbientSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFMODAmbientSound), 2895931835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAmbientSound_h_561441731(TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAmbientSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAmbientSound_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
