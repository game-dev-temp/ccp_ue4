#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
class USkeletalMeshComponent;
class UAnimSequenceBase;
#include "BP_Mei_InteractionNotify__pf3363415645.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/AnimNotifies/BP_Mei_InteractionNotify.BP_Mei_InteractionNotify_C", OverrideNativeName="BP_Mei_InteractionNotify_C"))
class UBP_Mei_InteractionNotify_C__pf3363415645 : public UAnimNotifyState
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Interaction Notify Name", Category="Default", OverrideNativeName="InteractionNotifyName"))
	FName bpv__InteractionNotifyName__pf;
	UBP_Mei_InteractionNotify_C__pf3363415645(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Received_NotifyBegin"))
	virtual bool  bpf__Received_NotifyBegin__pf(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf, float bpp__TotalDuration__pf);
	bool  bpf__Received_NotifyBegin__pf_Inner_0(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf, float bpp__TotalDuration__pf);
public:
};
