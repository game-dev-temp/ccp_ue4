#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
class UMatineeCameraShake;
class UClass;
class USkeletalMeshComponent;
class UAnimSequenceBase;
#include "CameraShake_Notify__pf2709600873.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Blueprints/AnimNotifys/CameraShake_Notify.CameraShake_Notify_C", OverrideNativeName="CameraShake_Notify_C"))
class UCameraShake_Notify_C__pf2709600873 : public UAnimNotify
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Shake Class", Category="Default", OverrideNativeName="ShakeClass"))
	UClass* bpv__ShakeClass__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Scale", Category="Default", OverrideNativeName="Scale"))
	float bpv__Scale__pf;
	UCameraShake_Notify_C__pf2709600873(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Received_Notify"))
	virtual bool  bpf__Received_Notify__pf(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf);
	bool  bpf__Received_Notify__pf_Inner_0(USkeletalMeshComponent* bpp__MeshComp__pf, UAnimSequenceBase* bpp__Animation__pf);
public:
};
