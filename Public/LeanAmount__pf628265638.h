#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "LeanAmount__pf628265638.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Structs/LeanAmount.LeanAmount", OverrideNativeName="LeanAmount"))
struct FLeanAmount__pf628265638
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="LR", Tooltip, OverrideNativeName="LR_17_ADF99333493B27F5B49BA89100DC4C05"))
	float bpv__LR_17_ADF99333493B27F5B49BA89100DC4C05__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FB", Tooltip, OverrideNativeName="FB_15_297866804FB14F4B81FB4A976A7F57D1"))
	float bpv__FB_15_297866804FB14F4B81FB4A976A7F57D1__pf;
	FLeanAmount__pf628265638();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FLeanAmount__pf628265638& __Other) const
	{
		return FLeanAmount__pf628265638::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FLeanAmount__pf628265638& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FLeanAmount__pf628265638::StaticStruct()); }
};
