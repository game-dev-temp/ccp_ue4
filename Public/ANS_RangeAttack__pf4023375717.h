#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
class USkeletalMeshComponent;
class UAnimSequenceBase;
#include "ANS_RangeAttack__pf4023375717.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/AI/Enemy/ANS_RangeAttack.ANS_RangeAttack_C", OverrideNativeName="ANS_RangeAttack_C"))
class UANS_RangeAttack_C__pf4023375717 : public UAnimNotifyState
{
public:
	GENERATED_BODY()
	UANS_RangeAttack_C__pf4023375717(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual FString  GetNotifyName_Implementation() const override;
	FString  bpf__GetNotifyName__pf_Inner_0();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Received_NotifyBegin"))
	virtual bool  bpf__Received_NotifyBegin__pf(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf, float bpp__TotalDuration__pf);
	bool  bpf__Received_NotifyBegin__pf_Inner_0(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf, float bpp__TotalDuration__pf);
public:
};
