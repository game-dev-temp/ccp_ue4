#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "AnimCurveCreationData__pf841805812.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Blueprints/AnimModifiers/AnimCurveCreationData.AnimCurveCreationData", OverrideNativeName="AnimCurveCreationData"))
struct FAnimCurveCreationData__pf841805812
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Frame Number", Tooltip, OverrideNativeName="FrameNumber_2_BD15521446ADA77ADFD3CE88F52494A7"))
	int32 bpv__FrameNumber_2_BD15521446ADA77ADFD3CE88F52494A7__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Curve Value", Tooltip, OverrideNativeName="CurveValue_5_993AE0BE448F0E6CAD79769196535161"))
	float bpv__CurveValue_5_993AE0BE448F0E6CAD79769196535161__pf;
	FAnimCurveCreationData__pf841805812();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FAnimCurveCreationData__pf841805812& __Other) const
	{
		return FAnimCurveCreationData__pf841805812::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FAnimCurveCreationData__pf841805812& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FAnimCurveCreationData__pf841805812::StaticStruct()); }
};
