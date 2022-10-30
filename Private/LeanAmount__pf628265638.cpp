#include "NativizedAssets.h"
#include "LeanAmount__pf628265638.h"
FLeanAmount__pf628265638::FLeanAmount__pf628265638()
{
	bpv__LR_17_ADF99333493B27F5B49BA89100DC4C05__pf = 0.000000f;
	bpv__FB_15_297866804FB14F4B81FB4A976A7F57D1__pf = 0.000000f;
}
PRAGMA_DISABLE_OPTIMIZATION
void FLeanAmount__pf628265638::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FLeanAmount__pf628265638
{
	FRegisterHelper__FLeanAmount__pf628265638()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/AdvancedLocomotionV4/Data/Structs/LeanAmount"), &FLeanAmount__pf628265638::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FLeanAmount__pf628265638 Instance;
};
FRegisterHelper__FLeanAmount__pf628265638 FRegisterHelper__FLeanAmount__pf628265638::Instance;
