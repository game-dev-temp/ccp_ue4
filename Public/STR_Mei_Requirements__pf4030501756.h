#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "STR_Mei_Resource__pf4030501756.h"
#include "STR_Mei_Requirements__pf4030501756.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Structures/STR_Mei_Requirements.STR_Mei_Requirements", OverrideNativeName="STR_Mei_Requirements"))
struct FSTR_Mei_Requirements__pf4030501756
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Handle", Tooltip, OverrideNativeName="Handle_11_8070EB494C7668028EB7F38BF9981F0F"))
	FDataTableRowHandle bpv__Handle_11_8070EB494C7668028EB7F38BF9981F0F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Resources", Tooltip, OverrideNativeName="Resources_16_3A0355734D3515248A58DE8C48E19955"))
	TArray<FSTR_Mei_Resource__pf4030501756> bpv__Resources_16_3A0355734D3515248A58DE8C48E19955__pf;
	FSTR_Mei_Requirements__pf4030501756();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FSTR_Mei_Requirements__pf4030501756& __Other) const
	{
		return FSTR_Mei_Requirements__pf4030501756::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
