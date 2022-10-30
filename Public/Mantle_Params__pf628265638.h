#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class UAnimMontage;
class UCurveVector;
#include "Mantle_Params__pf628265638.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Structs/Mantle_Params.Mantle_Params", OverrideNativeName="Mantle_Params"))
struct FMantle_Params__pf628265638
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="AnimMontage", Tooltip, OverrideNativeName="AnimMontage_24_3C1AEF894F90C77357FC01B1216DD889"))
	UAnimMontage* bpv__AnimMontage_24_3C1AEF894F90C77357FC01B1216DD889__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Position/Correction Curve", Tooltip, OverrideNativeName="PositionCorrectionCurve_25_716DDA5E44F540C50DA005B54E95AB0F"))
	UCurveVector* bpv__PositionCorrectionCurve_25_716DDA5E44F540C50DA005B54E95AB0F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="StartingPosition", Tooltip, OverrideNativeName="StartingPosition_15_6F68E2244B632497DCA448A29CBDA0C8"))
	float bpv__StartingPosition_15_6F68E2244B632497DCA448A29CBDA0C8__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PlayRate", Tooltip, OverrideNativeName="PlayRate_13_BBABD3264A1E44D275287FAE4C6D5556"))
	float bpv__PlayRate_13_BBABD3264A1E44D275287FAE4C6D5556__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="StartingOffset", Tooltip, OverrideNativeName="StartingOffset_10_381585D949B08D9A56D088A73A78B31B"))
	FVector bpv__StartingOffset_10_381585D949B08D9A56D088A73A78B31B__pf;
	FMantle_Params__pf628265638();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FMantle_Params__pf628265638& __Other) const
	{
		return FMantle_Params__pf628265638::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FMantle_Params__pf628265638& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FMantle_Params__pf628265638::StaticStruct()); }
};
