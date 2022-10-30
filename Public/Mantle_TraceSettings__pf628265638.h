#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Mantle_TraceSettings__pf628265638.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Structs/Mantle_TraceSettings.Mantle_TraceSettings", OverrideNativeName="Mantle_TraceSettings"))
struct FMantle_TraceSettings__pf628265638
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max Ledge Height ", Tooltip, OverrideNativeName="MaxLedgeHeight_15_DC0D8FBF4C01FDE39D0AFDB1B04955A8"))
	float bpv__MaxLedgeHeight_15_DC0D8FBF4C01FDE39D0AFDB1B04955A8__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Min Ledge Height", Tooltip, OverrideNativeName="MinLedgeHeight_14_857E2CDE423BEE7929567D8802243370"))
	float bpv__MinLedgeHeight_14_857E2CDE423BEE7929567D8802243370__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Reach Distance", Tooltip, OverrideNativeName="ReachDistance_2_B3C154AA46EBFD9C1E67EB8DFBB7010E"))
	float bpv__ReachDistance_2_B3C154AA46EBFD9C1E67EB8DFBB7010E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Forward Trace Radius", Tooltip, OverrideNativeName="ForwardTraceRadius_9_C1A792084D8AAADBD22D8F8DE31A3A1C"))
	float bpv__ForwardTraceRadius_9_C1A792084D8AAADBD22D8F8DE31A3A1C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Downward Trace Radius", Tooltip, OverrideNativeName="DownwardTraceRadius_12_7FE8C297416A916F74A892B85131B1BC"))
	float bpv__DownwardTraceRadius_12_7FE8C297416A916F74A892B85131B1BC__pf;
	FMantle_TraceSettings__pf628265638();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FMantle_TraceSettings__pf628265638& __Other) const
	{
		return FMantle_TraceSettings__pf628265638::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FMantle_TraceSettings__pf628265638& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FMantle_TraceSettings__pf628265638::StaticStruct()); }
};
