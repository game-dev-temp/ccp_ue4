#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "ALS_OverlayState__pf116373702.h"
class UOverlayStateButton_C__pf977207518;
#include "OverlayStateButtonParams__pf977207518.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Blueprints/UI/OverlayStateButtonParams.OverlayStateButtonParams", OverrideNativeName="OverlayStateButtonParams"))
struct FOverlayStateButtonParams__pf977207518
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Widget", Tooltip, OverrideNativeName="Widget_5_4F22C4EE49421E434A46FE9803893231"))
	UOverlayStateButton_C__pf977207518* bpv__Widget_5_4F22C4EE49421E434A46FE9803893231__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="State", Tooltip, OverrideNativeName="State_9_BAF3D4CC4EE0E7CCD650F3B4963A2A65"))
	E__ALS_OverlayState__pf bpv__State_9_BAF3D4CC4EE0E7CCD650F3B4963A2A65__pf;
	FOverlayStateButtonParams__pf977207518();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FOverlayStateButtonParams__pf977207518& __Other) const
	{
		return FOverlayStateButtonParams__pf977207518::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FOverlayStateButtonParams__pf977207518& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FOverlayStateButtonParams__pf977207518::StaticStruct()); }
};
