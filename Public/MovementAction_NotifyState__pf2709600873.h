#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "ALS_MovementAction__pf116373702.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
class USkeletalMeshComponent;
class UAnimSequenceBase;
#include "MovementAction_NotifyState__pf2709600873.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Blueprints/AnimNotifys/MovementAction_NotifyState.MovementAction_NotifyState_C", OverrideNativeName="MovementAction_NotifyState_C"))
class UMovementAction_NotifyState_C__pf2709600873 : public UAnimNotifyState
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Movement Action", Category="Default", MultiLine="true", OverrideNativeName="MovementAction"))
	E__ALS_MovementAction__pf bpv__MovementAction__pf;
	UMovementAction_NotifyState_C__pf2709600873(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Received_NotifyBegin"))
	virtual bool  bpf__Received_NotifyBegin__pf(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf, float bpp__TotalDuration__pf);
	bool  bpf__Received_NotifyBegin__pf_Inner_0(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf, float bpp__TotalDuration__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Received_NotifyEnd"))
	virtual bool  bpf__Received_NotifyEnd__pf(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf);
	bool  bpf__Received_NotifyEnd__pf_Inner_0(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf);
	virtual FString  GetNotifyName_Implementation() const override;
	FString  bpf__GetNotifyName__pf_Inner_0();
public:
};
