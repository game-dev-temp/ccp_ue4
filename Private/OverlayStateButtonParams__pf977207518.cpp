#include "NativizedAssets.h"
#include "OverlayStateButtonParams__pf977207518.h"
#include "OverlayStateButton__pf977207518.h"
FOverlayStateButtonParams__pf977207518::FOverlayStateButtonParams__pf977207518()
{
	bpv__Widget_5_4F22C4EE49421E434A46FE9803893231__pf = nullptr;
	bpv__State_9_BAF3D4CC4EE0E7CCD650F3B4963A2A65__pf = E__ALS_OverlayState__pf::NewEnumerator0;
}
PRAGMA_DISABLE_OPTIMIZATION
void FOverlayStateButtonParams__pf977207518::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{62, FBlueprintDependencyType(false, true, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{39, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.UserWidget 
		{59, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Image 
		{63, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.TextBlock 
		{75, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{100, FBlueprintDependencyType(false, true, false, false)},  //  WidgetBlueprintGeneratedClass /Game/AdvancedLocomotionV4/Blueprints/UI/OverlayStateButton.OverlayStateButton_C 
		{101, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedEnum /Game/AdvancedLocomotionV4/Data/Enums/ALS_OverlayState.ALS_OverlayState 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FOverlayStateButtonParams__pf977207518
{
	FRegisterHelper__FOverlayStateButtonParams__pf977207518()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/AdvancedLocomotionV4/Blueprints/UI/OverlayStateButtonParams"), &FOverlayStateButtonParams__pf977207518::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FOverlayStateButtonParams__pf977207518 Instance;
};
FRegisterHelper__FOverlayStateButtonParams__pf977207518 FRegisterHelper__FOverlayStateButtonParams__pf977207518::Instance;
