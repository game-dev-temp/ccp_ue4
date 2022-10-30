#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SaveCachedPose.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_UseCachedPose.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_LayeredBoneBlend.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Slot.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByBool.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_StateResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "BPI_InteractWithWeapon__pf4204138153.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "INT_MeiAnimBP__pf1977901695.h"
class AThirdPersonCharacter_C__pf2222656877;
#include "ABP_Mei_v2__pf3826917018.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/Character/old/ABP_Mei_v2.ABP_Mei_v2_C", OverrideNativeName="ABP_Mei_v2_C"))
class UABP_Mei_v2_C__pf3826917018 : public UAnimInstance, public IINT_MeiAnimBP_C
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_4"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_7"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_7__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_3"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend_4"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_6"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_5"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_4"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Slot_2"))
	FAnimNode_Slot bpv__AnimGraphNode_Slot_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_2"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend_3"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_3"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Slot_1"))
	FAnimNode_Slot bpv__AnimGraphNode_Slot_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_1"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend_2"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_2"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_1"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend_1"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Slot"))
	FAnimNode_Slot bpv__AnimGraphNode_Slot__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByBool"))
	FAnimNode_BlendListByBool bpv__AnimGraphNode_BlendListByBool__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_8"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_8__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_7"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_7__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_6"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_5"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_4"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_3"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_2"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_1"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer_2"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_6"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_4"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer_1"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_5"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_3"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_4"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_2"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_3"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_1"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_2"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_1"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine_1"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", MultiLine="true", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Air", Category="Default", MultiLine="true", OverrideNativeName="Is_Air"))
	bool bpv__Is_Air__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Direction", Category="Default", MultiLine="true", OverrideNativeName="Direction"))
	float bpv__Direction__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Locked", Category="Default", MultiLine="true", OverrideNativeName="Target Locked"))
	bool bpv__TargetxLocked__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Weapon Drawn", Category="Default", MultiLine="true", OverrideNativeName="WeaponDrawn"))
	bool bpv__WeaponDrawn__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Accelerating?", Category="Default", MultiLine="true", OverrideNativeName="IsAccelerating?"))
	bool bpv__IsAcceleratingx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Blocking", Category="Default", MultiLine="true", OverrideNativeName="Blocking"))
	bool bpv__Blocking__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Left"))
	bool b0l__K2Node_Event_Left__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Right"))
	bool b0l__K2Node_Event_Right__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsHanging"))
	bool b0l__K2Node_Event_IsHanging__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_State_3"))
	bool b0l__K2Node_Event_State_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsThird_Person_Character"))
	AThirdPersonCharacter_C__pf2222656877* b0l__K2Node_DynamicCast_AsThird_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Interact_with_Weapon"))
	TScriptInterface<IBPI_InteractWithWeapon_C> b0l__K2Node_DynamicCast_AsBPI_Interact_with_Weapon__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Interact_with_Weapon_1"))
	TScriptInterface<IBPI_InteractWithWeapon_C> b0l__K2Node_DynamicCast_AsBPI_Interact_with_Weapon_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_State_2"))
	bool b0l__K2Node_Event_State_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_State_1"))
	bool b0l__K2Node_Event_State_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_State"))
	bool b0l__K2Node_Event_State__pf;
	UABP_Mei_v2_C__pf3826917018(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_4();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_7();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_3();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend_4();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_6();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_5();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_4();
	void __InitAnimNode__AnimGraphNode_Slot_2();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_2();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend_3();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_3();
	void __InitAnimNode__AnimGraphNode_Slot_1();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_1();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend_2();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_2();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_1();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend_1();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose();
	void __InitAnimNode__AnimGraphNode_UseCachedPose();
	void __InitAnimNode__AnimGraphNode_Slot();
	void __InitAnimNode__AnimGraphNode_BlendListByBool();
	void __InitAnimNode__AnimGraphNode_TransitionResult_8();
	void __InitAnimNode__AnimGraphNode_TransitionResult_7();
	void __InitAnimNode__AnimGraphNode_TransitionResult_6();
	void __InitAnimNode__AnimGraphNode_TransitionResult_5();
	void __InitAnimNode__AnimGraphNode_TransitionResult_4();
	void __InitAnimNode__AnimGraphNode_TransitionResult_3();
	void __InitAnimNode__AnimGraphNode_TransitionResult_2();
	void __InitAnimNode__AnimGraphNode_TransitionResult_1();
	void __InitAnimNode__AnimGraphNode_TransitionResult();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer_2();
	void __InitAnimNode__AnimGraphNode_StateResult_6();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_4();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_5();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_3();
	void __InitAnimNode__AnimGraphNode_StateResult_4();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_2();
	void __InitAnimNode__AnimGraphNode_StateResult_3();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_StateMachine_1();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_20(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_21(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei_v2__pf_22(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SprintState"))
	virtual void bpf__SprintState__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_AttackNotReady"))
	virtual void bpf__AnimNotify_AttackNotReady__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_AttackReady"))
	virtual void bpf__AnimNotify_AttackReady__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_ThrustComboNext"))
	virtual void bpf__AnimNotify_ThrustComboNext__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_SheatheWeapon"))
	virtual void bpf__AnimNotify_SheatheWeapon__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_DrawWeapon"))
	virtual void bpf__AnimNotify_DrawWeapon__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="RollingState"))
	virtual void bpf__RollingState__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="FullBodyState"))
	virtual void bpf__FullBodyState__pf(bool bpp__State__pf);
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_2BB255994939B80A6F269698356EE239"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_2BB255994939B80A6F269698356EE239__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_EE6003D54A95FE0AE768C59A5BAEA2F9"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_EE6003D54A95FE0AE768C59A5BAEA2F9__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_F68261974F0563D023DBF78FA0D0511A"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_F68261974F0563D023DBF78FA0D0511A__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_E677EB5A48E8AF111B064BA10EE7D034"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_E677EB5A48E8AF111B064BA10EE7D034__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_DBBA84E946BF643A048CBEA797BECFD4"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_DBBA84E946BF643A048CBEA797BECFD4__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_3AE4252E4755345D8B6CD4B5DD3DFDCA"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_3AE4252E4755345D8B6CD4B5DD3DFDCA__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_B19165104A6106BE410AB09063E867CA"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_TransitionResult_B19165104A6106BE410AB09063E867CA__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_BlendSpacePlayer_4B3183724A0DB10FB947949812CD8747"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_BlendSpacePlayer_4B3183724A0DB10FB947949812CD8747__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_BlendSpacePlayer_CAABFE2E45CB97FC5603B09223DD932F"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_BlendSpacePlayer_CAABFE2E45CB97FC5603B09223DD932F__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_BlendSpacePlayer_AEE0B4F6416CF826EF4A3E98AA0FA7FF"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_BlendSpacePlayer_AEE0B4F6416CF826EF4A3E98AA0FA7FF__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_BlendListByBool_D33946644B8454465E2F249CA1475167"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_v2_AnimGraphNode_BlendListByBool_D33946644B8454465E2F249CA1475167__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="BlockingState"))
	virtual void bpf__BlockingState__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="HangingState"))
	virtual void bpf__HangingState__pf(bool bpp__IsHanging__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="HangingMoveState"))
	virtual void bpf__HangingMoveState__pf(bool bpp__Left__pf, bool bpp__Right__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
