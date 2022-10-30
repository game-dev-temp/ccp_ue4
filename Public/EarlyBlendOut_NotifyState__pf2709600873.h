#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "ALS_MovementState__pf116373702.h"
#include "ALS_Stance__pf116373702.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
class UAnimMontage;
class USkeletalMeshComponent;
class UAnimSequenceBase;
#include "EarlyBlendOut_NotifyState__pf2709600873.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Blueprints/AnimNotifys/EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C", OverrideNativeName="EarlyBlendOut_NotifyState_C"))
class UEarlyBlendOut_NotifyState_C__pf2709600873 : public UAnimNotifyState
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="This Montage", Category="Default", MultiLine="true", OverrideNativeName="ThisMontage"))
	UAnimMontage* bpv__ThisMontage__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Out Time", Category="Default", MultiLine="true", OverrideNativeName="BlendOutTime"))
	float bpv__BlendOutTime__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Check Movement State", Category="Default", MultiLine="true", OverrideNativeName="CheckMovementState"))
	bool bpv__CheckMovementState__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Movement State Equals", Category="Default", MultiLine="true", OverrideNativeName="MovementStateEquals"))
	E__ALS_MovementState__pf bpv__MovementStateEquals__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Check Stance", Category="Default", MultiLine="true", OverrideNativeName="CheckStance"))
	bool bpv__CheckStance__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Stance Equals", Category="Default", MultiLine="true", OverrideNativeName="StanceEquals"))
	E__ALS_Stance__pf bpv__StanceEquals__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Check Movement Input", Category="Default", MultiLine="true", OverrideNativeName="CheckMovementInput"))
	bool bpv__CheckMovementInput__pf;
	UEarlyBlendOut_NotifyState_C__pf2709600873(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Received_NotifyTick"))
	virtual bool  bpf__Received_NotifyTick__pf(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf, float bpp__FrameDeltaTime__pf);
	bool  bpf__Received_NotifyTick__pf_Inner_0(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf, float bpp__FrameDeltaTime__pf);
	virtual FString  GetNotifyName_Implementation() const override;
	FString  bpf__GetNotifyName__pf_Inner_0();
public:
};
