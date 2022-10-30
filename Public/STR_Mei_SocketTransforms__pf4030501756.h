#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "STR_Mei_SocketTransforms__pf4030501756.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Structures/STR_Mei_SocketTransforms.STR_Mei_SocketTransforms", OverrideNativeName="STR_Mei_SocketTransforms"))
struct FSTR_Mei_SocketTransforms__pf4030501756
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Transforms", Tooltip, OverrideNativeName="Transforms_3_8C53582842F59C9713636D889EDFF9D7"))
	TArray<FTransform> bpv__Transforms_3_8C53582842F59C9713636D889EDFF9D7__pf;
	FSTR_Mei_SocketTransforms__pf4030501756();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FSTR_Mei_SocketTransforms__pf4030501756& __Other) const
	{
		return FSTR_Mei_SocketTransforms__pf4030501756::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
