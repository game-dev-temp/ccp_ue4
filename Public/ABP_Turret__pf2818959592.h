#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_RefPose.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ModifyBone.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeSpaceConversions.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "ABP_Turret__pf2818959592.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/AI/Enemy/Turret/ABP_Turret.ABP_Turret_C", OverrideNativeName="ABP_Turret_C"))
class UABP_Turret_C__pf2818959592 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_MeshRefPose"))
	FAnimNode_MeshSpaceRefPose bpv__AnimGraphNode_MeshRefPose__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyBone_1"))
	FAnimNode_ModifyBone bpv__AnimGraphNode_ModifyBone_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ComponentToLocalSpace"))
	FAnimNode_ConvertComponentToLocalSpace bpv__AnimGraphNode_ComponentToLocalSpace__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyBone"))
	FAnimNode_ModifyBone bpv__AnimGraphNode_ModifyBone__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Look at Rotation", Category="Default", MultiLine="true", OverrideNativeName="LookAtRotation"))
	FRotator bpv__LookAtRotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UABP_Turret_C__pf2818959592(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_MeshRefPose();
	void __InitAnimNode__AnimGraphNode_ModifyBone_1();
	void __InitAnimNode__AnimGraphNode_ComponentToLocalSpace();
	void __InitAnimNode__AnimGraphNode_ModifyBone();
	void bpf__ExecuteUbergraph_ABP_Turret__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Turret__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Turret_AnimGraphNode_ModifyBone_E6DA50AF49AEB7E10F7867B2178CCA0F"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Turret_AnimGraphNode_ModifyBone_E6DA50AF49AEB7E10F7867B2178CCA0F__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Turret_AnimGraphNode_ModifyBone_AE2C360840B13F7902403C85F30235C8"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Turret_AnimGraphNode_ModifyBone_AE2C360840B13F7902403C85F30235C8__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
