#include "NativizedAssets.h"
#include "AnimCurveCreationParams__pf841805812.h"
FAnimCurveCreationParams__pf841805812::FAnimCurveCreationParams__pf841805812()
{
	bpv__CurveName_2_2BF8697245BD9A3A0827EDA874ECC1EC__pf = FName();
	bpv__KeyEachFrame_14_33D77EF046856C9C56BD8285457F89C8__pf = false;
}
PRAGMA_DISABLE_OPTIMIZATION
void FAnimCurveCreationParams__pf841805812::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{99, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/AdvancedLocomotionV4/Blueprints/AnimModifiers/AnimCurveCreationData.AnimCurveCreationData 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FAnimCurveCreationParams__pf841805812
{
	FRegisterHelper__FAnimCurveCreationParams__pf841805812()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/AdvancedLocomotionV4/Blueprints/AnimModifiers/AnimCurveCreationParams"), &FAnimCurveCreationParams__pf841805812::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FAnimCurveCreationParams__pf841805812 Instance;
};
FRegisterHelper__FAnimCurveCreationParams__pf841805812 FRegisterHelper__FAnimCurveCreationParams__pf841805812::Instance;
