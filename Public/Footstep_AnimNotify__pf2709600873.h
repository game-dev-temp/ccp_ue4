#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "FootstepType__pf116373702.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
class USoundBase;
class USkeletalMeshComponent;
class UAnimSequenceBase;
#include "Footstep_AnimNotify__pf2709600873.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Blueprints/AnimNotifys/Footstep_AnimNotify.Footstep_AnimNotify_C", OverrideNativeName="Footstep_AnimNotify_C"))
class UFootstep_AnimNotify_C__pf2709600873 : public UAnimNotify
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sound", Category="Default", OverrideNativeName="Sound"))
	USoundBase* bpv__Sound__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Attach Point Name", Category="Default", MultiLine="true", OverrideNativeName="AttachPointName"))
	FName bpv__AttachPointName__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Footstep Type", Category="Default", OverrideNativeName="FootstepType"))
	E__FootstepType__pf bpv__FootstepType__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Volume Multiplier", Category="Default", OverrideNativeName="VolumeMultiplier"))
	float bpv__VolumeMultiplier__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Pitch Multiplier", Category="Default", OverrideNativeName="PitchMultiplier"))
	float bpv__PitchMultiplier__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Override Mask Curve", Category="Default", MultiLine="true", OverrideNativeName="OverrideMaskCurve"))
	bool bpv__OverrideMaskCurve__pf;
	UFootstep_AnimNotify_C__pf2709600873(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Received_Notify"))
	virtual bool  bpf__Received_Notify__pf(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf);
	bool  bpf__Received_Notify__pf_Inner_0(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf);
public:
};
