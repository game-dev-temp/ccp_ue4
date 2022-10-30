#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_InteractType__pf2151050371.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "INT_Interactable__pf336516450.h"
class UStaticMeshComponent;
#include "BP_Interactable__pf2151050371.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BaseClasses/BP_Interactable.BP_Interactable_C", OverrideNativeName="BP_Interactable_C"))
class ABP_Interactable_C__pf2151050371 : public AActor, public IINT_Interactable_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Interact Type", Category="Default", MultiLine="true", OverrideNativeName="InteractType"))
	E__E_InteractType__pf bpv__InteractType__pf;
	ABP_Interactable_C__pf2151050371(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="GetInteractType"))
	virtual void bpf__GetInteractType__pf(/*out*/ E__E_InteractType__pf& bpp__InteractType__pf);
public:
};
