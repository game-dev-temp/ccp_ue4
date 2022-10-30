#include "NativizedAssets.h"
#include "MovementSettings_State__pf628265638.h"
#include "MovementSettings__pf628265638.h"
FMovementSettings_State__pf628265638::FMovementSettings_State__pf628265638()
{
}
PRAGMA_DISABLE_OPTIMIZATION
void FMovementSettings_State__pf628265638::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{95, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CurveVector 
		{96, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CurveFloat 
		{98, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/AdvancedLocomotionV4/Data/Structs/MovementSettings_Stance.MovementSettings_Stance 
		{97, FBlueprintDependencyType(false, true, false, false)},  //  UserDefinedStruct /Game/AdvancedLocomotionV4/Data/Structs/MovementSettings.MovementSettings 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FMovementSettings_State__pf628265638
{
	FRegisterHelper__FMovementSettings_State__pf628265638()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/AdvancedLocomotionV4/Data/Structs/MovementSettings_State"), &FMovementSettings_State__pf628265638::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FMovementSettings_State__pf628265638 Instance;
};
FRegisterHelper__FMovementSettings_State__pf628265638 FRegisterHelper__FMovementSettings_State__pf628265638::Instance;
