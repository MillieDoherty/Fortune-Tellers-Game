// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Private/Sequencer/FMODEventControlTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventControlTrack() {}

// Begin Cross Module References
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlTrack();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References

// Begin Class UFMODEventControlTrack
void UFMODEventControlTrack::StaticRegisterNativesUFMODEventControlTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODEventControlTrack);
UClass* Z_Construct_UClass_UFMODEventControlTrack_NoRegister()
{
	return UFMODEventControlTrack::StaticClass();
}
struct Z_Construct_UClass_UFMODEventControlTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Handles control of an FMOD Event */" },
		{ "IncludePath", "Sequencer/FMODEventControlTrack.h" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlTrack.h" },
		{ "ToolTip", "Handles control of an FMOD Event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlSections_MetaData[] = {
		{ "Comment", "/** List of all event control sections. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlTrack.h" },
		{ "ToolTip", "List of all event control sections." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlSections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODEventControlTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections_Inner = { "ControlSections", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections = { "ControlSections", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODEventControlTrack, ControlSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlSections_MetaData), NewProp_ControlSections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODEventControlTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFMODEventControlTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFMODEventControlTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UFMODEventControlTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODEventControlTrack_Statics::ClassParams = {
	&UFMODEventControlTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFMODEventControlTrack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlTrack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODEventControlTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODEventControlTrack()
{
	if (!Z_Registration_Info_UClass_UFMODEventControlTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODEventControlTrack.OuterSingleton, Z_Construct_UClass_UFMODEventControlTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODEventControlTrack.OuterSingleton;
}
template<> FMODSTUDIO_API UClass* StaticClass<UFMODEventControlTrack>()
{
	return UFMODEventControlTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODEventControlTrack);
UFMODEventControlTrack::~UFMODEventControlTrack() {}
// End Class UFMODEventControlTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODEventControlTrack, UFMODEventControlTrack::StaticClass, TEXT("UFMODEventControlTrack"), &Z_Registration_Info_UClass_UFMODEventControlTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODEventControlTrack), 1066518847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlTrack_h_3634361192(TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
