#include "NativizedAssets.h"
#include "MovementSettings__pf628265638.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
FMovementSettings__pf628265638::FMovementSettings__pf628265638()
{
	bpv__WalkSpeed_40_9AD737B14B8BC378F924E890E018B5B0__pf = 0.000000f;
	bpv__RunSpeed_39_7397773A4A46B563F765429BD6A2DDE8__pf = 0.000000f;
	bpv__SprintSpeed_38_6123675A40931BD70D4CF18D9A2A1C4C__pf = 0.000000f;
	bpv__MovementCurve_51_FDDCE64149CA0F8A553745BEA0FEE53E__pf = nullptr;
	bpv__RotationRateCurve_52_73FA146B4B31FF205DE8E1BBFA8800F6__pf = nullptr;
}
PRAGMA_DISABLE_OPTIMIZATION
void FMovementSettings__pf628265638::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{95, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CurveVector 
		{96, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CurveFloat 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FMovementSettings__pf628265638
{
	FRegisterHelper__FMovementSettings__pf628265638()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/AdvancedLocomotionV4/Data/Structs/MovementSettings"), &FMovementSettings__pf628265638::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FMovementSettings__pf628265638 Instance;
};
FRegisterHelper__FMovementSettings__pf628265638 FRegisterHelper__FMovementSettings__pf628265638::Instance;
