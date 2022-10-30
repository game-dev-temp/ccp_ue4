#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "STR_Mei_SnapSettings__pf4030501756.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Structures/STR_Mei_SnapSettings.STR_Mei_SnapSettings", OverrideNativeName="STR_Mei_SnapSettings"))
struct FSTR_Mei_SnapSettings__pf4030501756
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SocketName", Tooltip, OverrideNativeName="SocketName_3_F1E0515947A2F307F2E20CB77D631178"))
	FName bpv__SocketName_3_F1E0515947A2F307F2E20CB77D631178__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PrimitiveAmount", Tooltip, OverrideNativeName="PrimitiveAmount_11_F98BFD594FCB7610BEEC37A8553513DE"))
	int32 bpv__PrimitiveAmount_11_F98BFD594FCB7610BEEC37A8553513DE__pf;
	FSTR_Mei_SnapSettings__pf4030501756();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FSTR_Mei_SnapSettings__pf4030501756& __Other) const
	{
		return FSTR_Mei_SnapSettings__pf4030501756::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FSTR_Mei_SnapSettings__pf4030501756& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FSTR_Mei_SnapSettings__pf4030501756::StaticStruct()); }
};
