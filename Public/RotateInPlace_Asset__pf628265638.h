#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UAnimSequenceBase;
#include "RotateInPlace_Asset__pf628265638.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Structs/RotateInPlace_Asset.RotateInPlace_Asset", OverrideNativeName="RotateInPlace_Asset"))
struct FRotateInPlace_Asset__pf628265638
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Animation", Tooltip, OverrideNativeName="Animation_2_7BA2980D4E85CC9E320EB98B57C73B3A"))
	UAnimSequenceBase* bpv__Animation_2_7BA2980D4E85CC9E320EB98B57C73B3A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SlotName", Tooltip, OverrideNativeName="SlotName_5_73864C9E40AE26D9F294038C7099722B"))
	FName bpv__SlotName_5_73864C9E40AE26D9F294038C7099722B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SlowTurnRate", Tooltip, OverrideNativeName="SlowTurnRate_9_47A596764C9AFE145D75C49448F776A8"))
	float bpv__SlowTurnRate_9_47A596764C9AFE145D75C49448F776A8__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FastTurnRate", Tooltip, OverrideNativeName="FastTurnRate_17_566E906643D9AD8B150F87B98BBF88BB"))
	float bpv__FastTurnRate_17_566E906643D9AD8B150F87B98BBF88BB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SlowPlayRate", Tooltip, OverrideNativeName="SlowPlayRate_16_1F78888146721190E66721BAA545F229"))
	float bpv__SlowPlayRate_16_1F78888146721190E66721BAA545F229__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FastPlayRate", Tooltip, OverrideNativeName="FastPlayRate_18_730EF8A04D92C6D5D014CFBF34A93F2A"))
	float bpv__FastPlayRate_18_730EF8A04D92C6D5D014CFBF34A93F2A__pf;
	FRotateInPlace_Asset__pf628265638();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FRotateInPlace_Asset__pf628265638& __Other) const
	{
		return FRotateInPlace_Asset__pf628265638::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FRotateInPlace_Asset__pf628265638& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FRotateInPlace_Asset__pf628265638::StaticStruct()); }
};
