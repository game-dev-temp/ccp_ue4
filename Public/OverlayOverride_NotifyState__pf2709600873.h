#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
class USkeletalMeshComponent;
class UAnimSequenceBase;
#include "OverlayOverride_NotifyState__pf2709600873.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Blueprints/AnimNotifys/OverlayOverride_NotifyState.OverlayOverride_NotifyState_C", OverrideNativeName="OverlayOverride_NotifyState_C"))
class UOverlayOverride_NotifyState_C__pf2709600873 : public UAnimNotifyState
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Overlay Override State", Category="Default", MultiLine="true", OverrideNativeName="OverlayOverrideState"))
	int32 bpv__OverlayOverrideState__pf;
	UOverlayOverride_NotifyState_C__pf2709600873(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
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
