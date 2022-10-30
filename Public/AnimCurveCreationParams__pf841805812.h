#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "AnimCurveCreationData__pf841805812.h"
#include "AnimCurveCreationParams__pf841805812.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Blueprints/AnimModifiers/AnimCurveCreationParams.AnimCurveCreationParams", OverrideNativeName="AnimCurveCreationParams"))
struct FAnimCurveCreationParams__pf841805812
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CurveName", Tooltip, OverrideNativeName="CurveName_2_2BF8697245BD9A3A0827EDA874ECC1EC"))
	FName bpv__CurveName_2_2BF8697245BD9A3A0827EDA874ECC1EC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="KeyEachFrame", Tooltip, OverrideNativeName="KeyEachFrame_14_33D77EF046856C9C56BD8285457F89C8"))
	bool bpv__KeyEachFrame_14_33D77EF046856C9C56BD8285457F89C8__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Keys", Tooltip="X=Percentage, Y=Value", OverrideNativeName="Keys_12_82CD3EEB4393EF861DB5BBB5CD020AD2"))
	TArray<FAnimCurveCreationData__pf841805812> bpv__Keys_12_82CD3EEB4393EF861DB5BBB5CD020AD2__pf;
	FAnimCurveCreationParams__pf841805812();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FAnimCurveCreationParams__pf841805812& __Other) const
	{
		return FAnimCurveCreationParams__pf841805812::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
