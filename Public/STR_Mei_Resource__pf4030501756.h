#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "E_Mei_ResourceType__pf424568635.h"
#include "STR_Mei_Resource__pf4030501756.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Structures/STR_Mei_Resource.STR_Mei_Resource", OverrideNativeName="STR_Mei_Resource"))
struct FSTR_Mei_Resource__pf4030501756
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ResourceType", Tooltip, OverrideNativeName="ResourceType_6_D839516245388D23CCB06795553F0FCF"))
	E__E_Mei_ResourceType__pf bpv__ResourceType_6_D839516245388D23CCB06795553F0FCF__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Value", Tooltip, OverrideNativeName="Value_5_D8F48190416B9B24013CA5AE0F13F196"))
	float bpv__Value_5_D8F48190416B9B24013CA5AE0F13F196__pf;
	FSTR_Mei_Resource__pf4030501756();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FSTR_Mei_Resource__pf4030501756& __Other) const
	{
		return FSTR_Mei_Resource__pf4030501756::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FSTR_Mei_Resource__pf4030501756& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FSTR_Mei_Resource__pf4030501756::StaticStruct()); }
};
