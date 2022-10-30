#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UAnimSequenceBase;
#include "TurnInPlace_Asset__pf628265638.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Structs/TurnInPlace_Asset.TurnInPlace_Asset", OverrideNativeName="TurnInPlace_Asset"))
struct FTurnInPlace_Asset__pf628265638
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Animation", Tooltip, OverrideNativeName="Animation_2_7BA2980D4E85CC9E320EB98B57C73B3A"))
	UAnimSequenceBase* bpv__Animation_2_7BA2980D4E85CC9E320EB98B57C73B3A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="AnimatedAngle", Tooltip, OverrideNativeName="AnimatedAngle_11_0BE5A89E455AEBE851DAA49A1FCA81A5"))
	float bpv__AnimatedAngle_11_0BE5A89E455AEBE851DAA49A1FCA81A5__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SlotName", Tooltip, OverrideNativeName="SlotName_5_73864C9E40AE26D9F294038C7099722B"))
	FName bpv__SlotName_5_73864C9E40AE26D9F294038C7099722B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PlayRate", Tooltip, OverrideNativeName="PlayRate_8_47A596764C9AFE145D75C49448F776A8"))
	float bpv__PlayRate_8_47A596764C9AFE145D75C49448F776A8__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ScaleTurnAngle", Tooltip, OverrideNativeName="ScaleTurnAngle_14_ED8450744340CD92E19052A9E8766866"))
	bool bpv__ScaleTurnAngle_14_ED8450744340CD92E19052A9E8766866__pf;
	FTurnInPlace_Asset__pf628265638();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FTurnInPlace_Asset__pf628265638& __Other) const
	{
		return FTurnInPlace_Asset__pf628265638::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FTurnInPlace_Asset__pf628265638& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FTurnInPlace_Asset__pf628265638::StaticStruct()); }
};
