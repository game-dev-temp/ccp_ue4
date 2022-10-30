#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "GroundedEntryState__pf116373702.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
class USkeletalMeshComponent;
class UAnimSequenceBase;
#include "GroundedEntryState_AnimNotify__pf2709600873.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Blueprints/AnimNotifys/GroundedEntryState_AnimNotify.GroundedEntryState_AnimNotify_C", OverrideNativeName="GroundedEntryState_AnimNotify_C"))
class UGroundedEntryState_AnimNotify_C__pf2709600873 : public UAnimNotify
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Grounded Entry State", Category="Default", MultiLine="true", OverrideNativeName="Grounded Entry State"))
	E__GroundedEntryState__pf bpv__GroundedxEntryxState__pfTT;
	UGroundedEntryState_AnimNotify_C__pf2709600873(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Received_Notify"))
	virtual bool  bpf__Received_Notify__pf(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf);
	bool  bpf__Received_Notify__pf_Inner_0(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf);
	virtual FString  GetNotifyName_Implementation() const override;
	FString  bpf__GetNotifyName__pf_Inner_0();
public:
};
