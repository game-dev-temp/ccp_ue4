#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class UTimelineComponent;
#include "BP_Door_Parent__pf2939348713.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/test/Doors/BP_Door_Parent.BP_Door_Parent_C", OverrideNativeName="BP_Door_Parent_C"))
class ABP_Door_Parent_C__pf2939348713 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Door"))
	UStaticMeshComponent* bpv__Door__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DoorFrame"))
	UStaticMeshComponent* bpv__DoorFrame__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(meta=(OverrideNativeName="DoorAnimation_Door_alpha_FA19B5EE45BC0644EA6BB2A0C8507DCE"))
	float bpv__DoorAnimation_Door_alpha_FA19B5EE45BC0644EA6BB2A0C8507DCE__pf;
	UPROPERTY(meta=(OverrideNativeName="DoorAnimation__Direction_FA19B5EE45BC0644EA6BB2A0C8507DCE"))
	TEnumAsByte<ETimelineDirection::Type> bpv__DoorAnimation__Direction_FA19B5EE45BC0644EA6BB2A0C8507DCE__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BP_Door_Parent", OverrideNativeName="DoorAnimation"))
	UTimelineComponent* bpv__DoorAnimation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
	ABP_Door_Parent_C__pf2939348713(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Door_Parent__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Door_Parent__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Door_Parent__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Door_Parent__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CloseDoor"))
	virtual void bpf__CloseDoor__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OpenDoor"))
	virtual void bpf__OpenDoor__pf();
	UFUNCTION(meta=(OverrideNativeName="DoorAnimation__UpdateFunc"))
	virtual void bpf__DoorAnimation__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="DoorAnimation__FinishedFunc"))
	virtual void bpf__DoorAnimation__FinishedFunc__pf();
public:
};
