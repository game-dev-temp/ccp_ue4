#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_SequenceEvaluator.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Bow_AnimBP__pf661777107.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Props/Meshes/Bow_AnimBP.Bow_AnimBP_C", OverrideNativeName="Bow_AnimBP_C"))
class UBow_AnimBP_C__pf661777107 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequenceEvaluator"))
	FAnimNode_SequenceEvaluator bpv__AnimGraphNode_SequenceEvaluator__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Draw", Category="Default", MultiLine="true", OverrideNativeName="Draw"))
	float bpv__Draw__pf;
	UBow_AnimBP_C__pf661777107(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_SequenceEvaluator();
	void bpf__ExecuteUbergraph_Bow_AnimBP__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Bow_AnimBP_AnimGraphNode_SequenceEvaluator_125D6BDB4F97A34B63D37991E148BCAB"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Bow_AnimBP_AnimGraphNode_SequenceEvaluator_125D6BDB4F97A34B63D37991E148BCAB__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
