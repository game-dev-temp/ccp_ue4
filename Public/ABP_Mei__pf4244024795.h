#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_UseCachedPose.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Slot.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SaveCachedPose.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_LayeredBoneBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_StateResult.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByBool.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_SequenceEvaluator.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByInt.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ModifyBone.h"
#include "../Plugins/KawaiiPhysics/Source/KawaiiPhysics/Public/AnimNode_KawaiiPhysics.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeSpaceConversions.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_TwoBoneIK.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "BPI_InteractWithWeapon__pf4204138153.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "INT_MeiAnimBP__pf1977901695.h"
class ABP_Character_Mei_C__pf4244024795;
class USoundBase;
class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
#include "ABP_Mei__pf4244024795.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/Character/ABP_Mei.ABP_Mei_C", OverrideNativeName="ABP_Mei_C"))
class UABP_Mei_C__pf4244024795 : public UAnimInstance, public IINT_MeiAnimBP_C
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_11"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_11__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_10"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_10__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_9"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_9__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Slot_4"))
	FAnimNode_Slot bpv__AnimGraphNode_Slot_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_6"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend_7"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend_7__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_8"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_8__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend_6"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_5"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend_5"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_7"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_7__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_6"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend_4"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_4"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_5"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_3"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_4"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_2"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Slot_3"))
	FAnimNode_Slot bpv__AnimGraphNode_Slot_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_23"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_23__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_22"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_22__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_21"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_21__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_20"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_20__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_19"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_19__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_18"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_18__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_17"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_17__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_16"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_16__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_15"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_15__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_14"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_14__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_13"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_13__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_12"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_12__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_11"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_11__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_10"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_10__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_9"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_9__pf;
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
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend_3"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_16"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_16__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_12"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_12__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByBool_5"))
	FAnimNode_BlendListByBool bpv__AnimGraphNode_BlendListByBool_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_15"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_15__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend_2"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequenceEvaluator_1"))
	FAnimNode_SequenceEvaluator bpv__AnimGraphNode_SequenceEvaluator_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_11"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_11__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_14"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_14__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_10"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_10__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_13"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_13__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_9"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_9__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequenceEvaluator"))
	FAnimNode_SequenceEvaluator bpv__AnimGraphNode_SequenceEvaluator__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_8"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_8__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_12"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_12__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_7"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_7__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_11"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_11__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_6"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_10"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_10__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_5"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_9"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_9__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByBool_4"))
	FAnimNode_BlendListByBool bpv__AnimGraphNode_BlendListByBool_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_8"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_8__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_4"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_7"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_7__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_3"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_6"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_2"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_5"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByBool_3"))
	FAnimNode_BlendListByBool bpv__AnimGraphNode_BlendListByBool_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_4"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend_1"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_3"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByBool_2"))
	FAnimNode_BlendListByBool bpv__AnimGraphNode_BlendListByBool_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_2"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_1"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_1"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByBool_1"))
	FAnimNode_BlendListByBool bpv__AnimGraphNode_BlendListByBool_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByInt"))
	FAnimNode_BlendListByInt bpv__AnimGraphNode_BlendListByInt__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Slot_2"))
	FAnimNode_Slot bpv__AnimGraphNode_Slot_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByBool"))
	FAnimNode_BlendListByBool bpv__AnimGraphNode_BlendListByBool__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_1"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_3"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Slot_1"))
	FAnimNode_Slot bpv__AnimGraphNode_Slot_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_2"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_1"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyBone"))
	FAnimNode_ModifyBone bpv__AnimGraphNode_ModifyBone__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_KawaiiPhysics_4"))
	FAnimNode_KawaiiPhysics bpv__AnimGraphNode_KawaiiPhysics_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LocalToComponentSpace_1"))
	FAnimNode_ConvertLocalToComponentSpace bpv__AnimGraphNode_LocalToComponentSpace_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ComponentToLocalSpace_1"))
	FAnimNode_ConvertComponentToLocalSpace bpv__AnimGraphNode_ComponentToLocalSpace_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_KawaiiPhysics_3"))
	FAnimNode_KawaiiPhysics bpv__AnimGraphNode_KawaiiPhysics_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_KawaiiPhysics_2"))
	FAnimNode_KawaiiPhysics bpv__AnimGraphNode_KawaiiPhysics_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_KawaiiPhysics_1"))
	FAnimNode_KawaiiPhysics bpv__AnimGraphNode_KawaiiPhysics_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_KawaiiPhysics"))
	FAnimNode_KawaiiPhysics bpv__AnimGraphNode_KawaiiPhysics__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Slot"))
	FAnimNode_Slot bpv__AnimGraphNode_Slot__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TwoBoneIK_3"))
	FAnimNode_TwoBoneIK bpv__AnimGraphNode_TwoBoneIK_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TwoBoneIK_2"))
	FAnimNode_TwoBoneIK bpv__AnimGraphNode_TwoBoneIK_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LocalToComponentSpace"))
	FAnimNode_ConvertLocalToComponentSpace bpv__AnimGraphNode_LocalToComponentSpace__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ComponentToLocalSpace"))
	FAnimNode_ConvertComponentToLocalSpace bpv__AnimGraphNode_ComponentToLocalSpace__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TwoBoneIK_1"))
	FAnimNode_TwoBoneIK bpv__AnimGraphNode_TwoBoneIK_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TwoBoneIK"))
	FAnimNode_TwoBoneIK bpv__AnimGraphNode_TwoBoneIK__pf;
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
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Blocking", Category="Default", MultiLine="true", OverrideNativeName="IsBlocking"))
	bool bpv__IsBlocking__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Sprinting", Category="Default", MultiLine="true", OverrideNativeName="IsSprinting"))
	bool bpv__IsSprinting__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Rolling", Category="Default", MultiLine="true", OverrideNativeName="IsRolling"))
	bool bpv__IsRolling__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Full Body", Category="Default", MultiLine="true", OverrideNativeName="IsFullBody"))
	bool bpv__IsFullBody__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Char REF", Category="Default", MultiLine="true", OverrideNativeName="Char REF"))
	ABP_Character_Mei_C__pf4244024795* bpv__CharxREF__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Gliding", Category="Default", MultiLine="true", OverrideNativeName="Gliding"))
	bool bpv__Gliding__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Crouching", Category="Default", MultiLine="true", OverrideNativeName="IsCrouching"))
	bool bpv__IsCrouching__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Hanging", Category="self_hanging", MultiLine="true", OverrideNativeName="Is Hanging"))
	bool bpv__IsxHanging__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Left", Category="self_hanging", MultiLine="true", OverrideNativeName="Left"))
	bool bpv__Left__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right", Category="self_hanging", MultiLine="true", OverrideNativeName="Right"))
	bool bpv__Right__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="IK Left Hand Location", Category="self_hanging", MultiLine="true", OverrideNativeName="IK Left Hand Location"))
	FVector bpv__IKxLeftxHandxLocation__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="IK Right Hand Location", Category="self_hanging", MultiLine="true", OverrideNativeName="IK Right Hand Location"))
	FVector bpv__IKxRightxHandxLocation__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="IK Left Hand Alpha", Category="self_hanging", MultiLine="true", OverrideNativeName="IK Left Hand Alpha"))
	float bpv__IKxLeftxHandxAlpha__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="IK Right Hand Alpha", Category="self_hanging", MultiLine="true", OverrideNativeName="IK Right Hand Alpha"))
	float bpv__IKxRightxHandxAlpha__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="IK Left Foot Location", Category="self_hanging", MultiLine="true", OverrideNativeName="IK Left Foot Location"))
	FVector bpv__IKxLeftxFootxLocation__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="IK Right Foot Location", Category="self_hanging", MultiLine="true", OverrideNativeName="IK Right Foot Location"))
	FVector bpv__IKxRightxFootxLocation__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="IK Left Foot Alpha", Category="self_hanging", MultiLine="true", OverrideNativeName="IK Left Foot Alpha"))
	float bpv__IKxLeftxFootxAlpha__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="IK Right Foot Alpha", Category="self_hanging", MultiLine="true", OverrideNativeName="IK Right Foot Alpha"))
	float bpv__IKxRightxFootxAlpha__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Set IK", Category="self_hanging", MultiLine="true", OverrideNativeName="CanSetIK"))
	bool bpv__CanSetIK__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Bow Mode", Category="self_bow", MultiLine="true", OverrideNativeName="Is Bow Mode"))
	bool bpv__IsxBowxMode__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bow Aim Rot", Category="self_bow", MultiLine="true", OverrideNativeName="BowAimRot"))
	float bpv__BowAimRot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ready to Throw", Category="self_throw", MultiLine="true", OverrideNativeName="ReadyToThrow"))
	bool bpv__ReadyToThrow__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Throw", Category="self_throw", MultiLine="true", OverrideNativeName="Throw"))
	bool bpv__Throw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	USoundBase* b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_1"))
	USoundBase* b0l__Temp_object_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_2"))
	USoundBase* b0l__Temp_object_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_3"))
	USoundBase* b0l__Temp_object_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_4"))
	USoundBase* b0l__Temp_object_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_5"))
	USoundBase* b0l__Temp_object_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EPhysicalSurface> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Character_Mei"))
	ABP_Character_Mei_C__pf4244024795* b0l__K2Node_DynamicCast_AsBP_Character_Mei__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_State_3"))
	bool b0l__K2Node_Event_State_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_State_2"))
	bool b0l__K2Node_Event_State_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_State_1"))
	bool b0l__K2Node_Event_State_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<AActor*> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingle_OutHit"))
	FHitResult b0l__CallFunc_LineTraceSingle_OutHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance"))
	float b0l__CallFunc_BreakHitResult_Distance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_State"))
	bool b0l__K2Node_Event_State__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	USoundBase* b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Character_Mei_1"))
	ABP_Character_Mei_C__pf4244024795* b0l__K2Node_DynamicCast_AsBP_Character_Mei_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsHanging"))
	bool b0l__K2Node_Event_IsHanging__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Left"))
	bool b0l__K2Node_Event_Left__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Right"))
	bool b0l__K2Node_Event_Right__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Set_HandIK_ImpactPoint"))
	FVector b0l__CallFunc_Set_HandIK_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Set_HandIK_Alpha"))
	float b0l__CallFunc_Set_HandIK_Alpha__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Set_HandIK_ImpactPoint_1"))
	FVector b0l__CallFunc_Set_HandIK_ImpactPoint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Set_HandIK_Alpha_1"))
	float b0l__CallFunc_Set_HandIK_Alpha_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Character_Mei_2"))
	ABP_Character_Mei_C__pf4244024795* b0l__K2Node_DynamicCast_AsBP_Character_Mei_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UABP_Mei_C__pf4244024795(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_11();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_10();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_9();
	void __InitAnimNode__AnimGraphNode_Slot_4();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_6();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend_7();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_8();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend_6();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_5();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend_5();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_7();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_6();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend_4();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_4();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_5();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_3();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_4();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_2();
	void __InitAnimNode__AnimGraphNode_Slot_3();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_TransitionResult_23();
	void __InitAnimNode__AnimGraphNode_TransitionResult_22();
	void __InitAnimNode__AnimGraphNode_TransitionResult_21();
	void __InitAnimNode__AnimGraphNode_TransitionResult_20();
	void __InitAnimNode__AnimGraphNode_TransitionResult_19();
	void __InitAnimNode__AnimGraphNode_TransitionResult_18();
	void __InitAnimNode__AnimGraphNode_TransitionResult_17();
	void __InitAnimNode__AnimGraphNode_TransitionResult_16();
	void __InitAnimNode__AnimGraphNode_TransitionResult_15();
	void __InitAnimNode__AnimGraphNode_TransitionResult_14();
	void __InitAnimNode__AnimGraphNode_TransitionResult_13();
	void __InitAnimNode__AnimGraphNode_TransitionResult_12();
	void __InitAnimNode__AnimGraphNode_TransitionResult_11();
	void __InitAnimNode__AnimGraphNode_TransitionResult_10();
	void __InitAnimNode__AnimGraphNode_TransitionResult_9();
	void __InitAnimNode__AnimGraphNode_TransitionResult_8();
	void __InitAnimNode__AnimGraphNode_TransitionResult_7();
	void __InitAnimNode__AnimGraphNode_TransitionResult_6();
	void __InitAnimNode__AnimGraphNode_TransitionResult_5();
	void __InitAnimNode__AnimGraphNode_TransitionResult_4();
	void __InitAnimNode__AnimGraphNode_TransitionResult_3();
	void __InitAnimNode__AnimGraphNode_TransitionResult_2();
	void __InitAnimNode__AnimGraphNode_TransitionResult_1();
	void __InitAnimNode__AnimGraphNode_TransitionResult();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend_3();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_16();
	void __InitAnimNode__AnimGraphNode_StateResult_12();
	void __InitAnimNode__AnimGraphNode_BlendListByBool_5();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_15();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend_2();
	void __InitAnimNode__AnimGraphNode_SequenceEvaluator_1();
	void __InitAnimNode__AnimGraphNode_StateResult_11();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_14();
	void __InitAnimNode__AnimGraphNode_StateResult_10();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_13();
	void __InitAnimNode__AnimGraphNode_StateResult_9();
	void __InitAnimNode__AnimGraphNode_SequenceEvaluator();
	void __InitAnimNode__AnimGraphNode_StateResult_8();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_12();
	void __InitAnimNode__AnimGraphNode_StateResult_7();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_11();
	void __InitAnimNode__AnimGraphNode_StateResult_6();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_10();
	void __InitAnimNode__AnimGraphNode_StateResult_5();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_9();
	void __InitAnimNode__AnimGraphNode_BlendListByBool_4();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_8();
	void __InitAnimNode__AnimGraphNode_StateResult_4();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_7();
	void __InitAnimNode__AnimGraphNode_StateResult_3();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_6();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_5();
	void __InitAnimNode__AnimGraphNode_BlendListByBool_3();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_4();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend_1();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_3();
	void __InitAnimNode__AnimGraphNode_BlendListByBool_2();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_2();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_1();
	void __InitAnimNode__AnimGraphNode_BlendListByBool_1();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	void __InitAnimNode__AnimGraphNode_BlendListByInt();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void __InitAnimNode__AnimGraphNode_Slot_2();
	void __InitAnimNode__AnimGraphNode_BlendListByBool();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_1();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_3();
	void __InitAnimNode__AnimGraphNode_Slot_1();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_2();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_1();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend();
	void __InitAnimNode__AnimGraphNode_UseCachedPose();
	void __InitAnimNode__AnimGraphNode_ModifyBone();
	void __InitAnimNode__AnimGraphNode_KawaiiPhysics_4();
	void __InitAnimNode__AnimGraphNode_LocalToComponentSpace_1();
	void __InitAnimNode__AnimGraphNode_ComponentToLocalSpace_1();
	void __InitAnimNode__AnimGraphNode_KawaiiPhysics_3();
	void __InitAnimNode__AnimGraphNode_KawaiiPhysics_2();
	void __InitAnimNode__AnimGraphNode_KawaiiPhysics_1();
	void __InitAnimNode__AnimGraphNode_KawaiiPhysics();
	void __InitAnimNode__AnimGraphNode_Slot();
	void __InitAnimNode__AnimGraphNode_TwoBoneIK_3();
	void __InitAnimNode__AnimGraphNode_TwoBoneIK_2();
	void __InitAnimNode__AnimGraphNode_LocalToComponentSpace();
	void __InitAnimNode__AnimGraphNode_ComponentToLocalSpace();
	void __InitAnimNode__AnimGraphNode_TwoBoneIK_1();
	void __InitAnimNode__AnimGraphNode_TwoBoneIK();
	void bpf__ExecuteUbergraph_ABP_Mei__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_20(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_21(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_22(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_23(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_24(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_25(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_26(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_27(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_28(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_29(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_30(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_31(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_32(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_33(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_34(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_35(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_36(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_37(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_38(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_39(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_40(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_41(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_42(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_43(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_44(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_45(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Mei__pf_46(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_Throw"))
	virtual void bpf__AnimNotify_Throw__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_EndHanging"))
	virtual void bpf__AnimNotify_EndHanging__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_StartHanging"))
	virtual void bpf__AnimNotify_StartHanging__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="HangingMoveState"))
	virtual void bpf__HangingMoveState__pf(bool bpp__Left__pf, bool bpp__Right__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="HangingState"))
	virtual void bpf__HangingState__pf(bool bpp__IsHanging__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_BBD3CEFC4C7FE821BF3DFCAF656B0120"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_BBD3CEFC4C7FE821BF3DFCAF656B0120__pf();
	UFUNCTION(meta=(Comment="/** Executed when begin play is called on the owning component */", ToolTip="Executed when begin play is called on the owning component", CppFromBpEvent, OverrideNativeName="BlueprintBeginPlay"))
	virtual void bpf__BlueprintBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="BlockingState"))
	virtual void bpf__BlockingState__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_Footstep"))
	virtual void bpf__AnimNotify_Footstep__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="FullBodyState"))
	virtual void bpf__FullBodyState__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="RollingState"))
	virtual void bpf__RollingState__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SprintState"))
	virtual void bpf__SprintState__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_AttackNotReady"))
	virtual void bpf__AnimNotify_AttackNotReady__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_AttackReady"))
	virtual void bpf__AnimNotify_AttackReady__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_5EBE66D54908B65722B086AFBB6C0856"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_5EBE66D54908B65722B086AFBB6C0856__pf();
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_87397EDF43B2D8F29FCB898C04289607"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_87397EDF43B2D8F29FCB898C04289607__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_D75E6B4240F89A5CE9F75CAD9D08B3D6"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_D75E6B4240F89A5CE9F75CAD9D08B3D6__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_357D3D014B3C8F9E8C92738D45143BD0"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_357D3D014B3C8F9E8C92738D45143BD0__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_E858958C43AE690AC9E932B1D24C80B9"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_E858958C43AE690AC9E932B1D24C80B9__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_1D9E1A3846B7882540C90AAECC09A598"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_1D9E1A3846B7882540C90AAECC09A598__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_C87DF48E45B63921CB784493A2DC0A81"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_C87DF48E45B63921CB784493A2DC0A81__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_5C00AF9B4807A3BF5BACFD9FC4FDEDEA"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_5C00AF9B4807A3BF5BACFD9FC4FDEDEA__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_3675EDE54AA53EA204916AA4B72095C9"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_3675EDE54AA53EA204916AA4B72095C9__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_405168CA4B3EF4EE6EAEE7940DE43247"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_405168CA4B3EF4EE6EAEE7940DE43247__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_6C4F172C4DC0F1DC08516C8F1861C8CA"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_6C4F172C4DC0F1DC08516C8F1861C8CA__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_121169B24FA1D3F9220E40943AE5B665"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_121169B24FA1D3F9220E40943AE5B665__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_7AA97E1448A198E1F5BB98B19FACB0D1"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_7AA97E1448A198E1F5BB98B19FACB0D1__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_54EA14FA48CA05A283C1A3BC16D36D2A"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_54EA14FA48CA05A283C1A3BC16D36D2A__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_CA29032940F8E0E35909B6800B3FFC9F"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_CA29032940F8E0E35909B6800B3FFC9F__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_BCA79C304E1FF36094A2B893DABA676A"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_BCA79C304E1FF36094A2B893DABA676A__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_3F3373564FB2E8ED02A12195CD04C1E5"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_3F3373564FB2E8ED02A12195CD04C1E5__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_BlendListByBool_75E728724D6C4EF318567FA34F140E30"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_BlendListByBool_75E728724D6C4EF318567FA34F140E30__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_BlendListByBool_0ADFD40E4FA1BB189CC1E894FE7A1469"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_BlendListByBool_0ADFD40E4FA1BB189CC1E894FE7A1469__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_BlendListByBool_6A2D403245D8A35A974FD4AF8A1AB830"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_BlendListByBool_6A2D403245D8A35A974FD4AF8A1AB830__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_BlendListByBool_DD7A59D644F6A7508D95D784BD62FBB3"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_BlendListByBool_DD7A59D644F6A7508D95D784BD62FBB3__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_BlendListByBool_133A99BA48BA993478259EB4D4F44127"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_BlendListByBool_133A99BA48BA993478259EB4D4F44127__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_BlendListByBool_F54D3E6743ED7B14EE3A75AD76FDB0CE"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_BlendListByBool_F54D3E6743ED7B14EE3A75AD76FDB0CE__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_ModifyBone_21C5F29E4CFFA32F608DF7BE59C489C3"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_ModifyBone_21C5F29E4CFFA32F608DF7BE59C489C3__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TwoBoneIK_725B5DC64D26B42997D49E8F1EF5879A"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TwoBoneIK_725B5DC64D26B42997D49E8F1EF5879A__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TwoBoneIK_07A1B8DD46A252A1471B5AB0C9CED4FB"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TwoBoneIK_07A1B8DD46A252A1471B5AB0C9CED4FB__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TwoBoneIK_BC7ECD7D4043441AD8E5B69E043430FC"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TwoBoneIK_BC7ECD7D4043441AD8E5B69E043430FC__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TwoBoneIK_ABB4C5794A7A4071EDB4AD8DD4E2E538"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TwoBoneIK_ABB4C5794A7A4071EDB4AD8DD4E2E538__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_E69C76B247DF00E24CB27D981C3CF35A"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_E69C76B247DF00E24CB27D981C3CF35A__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_A327FF474B59961B291FF79F5964EC89"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_A327FF474B59961B291FF79F5964EC89__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_C720B5AF4C2212DB850392B66FF562A3"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_C720B5AF4C2212DB850392B66FF562A3__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_B0ABE8934506A2E1481D2DBA1E90663E"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mei_AnimGraphNode_TransitionResult_B0ABE8934506A2E1481D2DBA1E90663E__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set HandIK"))
	virtual void bpf__SetxHandIK__pfT(FName bpp__BoneName__pf, EDrawDebugTrace::Type bpp__DrawDebugType__pf, /*out*/ FVector& bpp__ImpactPoint__pf, /*out*/ float& bpp__Alpha__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
