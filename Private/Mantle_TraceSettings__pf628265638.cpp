#include "NativizedAssets.h"
#include "Mantle_TraceSettings__pf628265638.h"
FMantle_TraceSettings__pf628265638::FMantle_TraceSettings__pf628265638()
{
	bpv__MaxLedgeHeight_15_DC0D8FBF4C01FDE39D0AFDB1B04955A8__pf = 0.000000f;
	bpv__MinLedgeHeight_14_857E2CDE423BEE7929567D8802243370__pf = 0.000000f;
	bpv__ReachDistance_2_B3C154AA46EBFD9C1E67EB8DFBB7010E__pf = 0.000000f;
	bpv__ForwardTraceRadius_9_C1A792084D8AAADBD22D8F8DE31A3A1C__pf = 0.000000f;
	bpv__DownwardTraceRadius_12_7FE8C297416A916F74A892B85131B1BC__pf = 0.000000f;
}
PRAGMA_DISABLE_OPTIMIZATION
void FMantle_TraceSettings__pf628265638::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FMantle_TraceSettings__pf628265638
{
	FRegisterHelper__FMantle_TraceSettings__pf628265638()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/AdvancedLocomotionV4/Data/Structs/Mantle_TraceSettings"), &FMantle_TraceSettings__pf628265638::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FMantle_TraceSettings__pf628265638 Instance;
};
FRegisterHelper__FMantle_TraceSettings__pf628265638 FRegisterHelper__FMantle_TraceSettings__pf628265638::Instance;
