#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Services/BTService_BlueprintBase.h"
class AAIController;
class APawn;
#include "IsPlayerInRange__pf1402625666.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/NPC/IsPlayerInRange.IsPlayerInRange_C", OverrideNativeName="IsPlayerInRange_C"))
class UIsPlayerInRange_C__pf1402625666 : public UBTService_BlueprintBase
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Range", Category="Default", MultiLine="true", OverrideNativeName="Range"))
	float bpv__Range__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBRef", Category="Default", MultiLine="true", OverrideNativeName="BBRef"))
	FBlackboardKeySelector bpv__BBRef__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OwnerController"))
	AAIController* b0l__K2Node_Event_OwnerController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ControlledPawn"))
	APawn* b0l__K2Node_Event_ControlledPawn__pf;
	UIsPlayerInRange_C__pf1402625666(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_IsPlayerInRange__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Category="AI", Comment="/** Alternative AI version of ReceiveActivation function.\t *\t@see ReceiveActivation for more details\t *\t@Note that if both generic and AI event versions are implemented only the more\t *\tsuitable one will be called, meaning the AI version if called for AI, generic one otherwise */", ToolTip="Alternative AI version of ReceiveActivation function.    @see ReceiveActivation for more details    @Note that if both generic and AI event versions are implemented only the more    suitable one will be called, meaning the AI version if called for AI, generic one otherwise", CppFromBpEvent, OverrideNativeName="ReceiveActivationAI"))
	virtual void bpf__ReceiveActivationAI__pf(AAIController* bpp__OwnerController__pf, APawn* bpp__ControlledPawn__pf);
public:
};
