#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByEnum.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByBool.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SaveCachedPose.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_ModifyCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_UseCachedPose.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_StateResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "E_MovementState__pf2727903198.h"
#include "ALS_MovementAction__pf116373702.h"
#include "ALS_RotationMode__pf116373702.h"
#include "ALS_Gait__pf116373702.h"
#include "ALS_Stance__pf116373702.h"
#include "ALS_ViewMode__pf116373702.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
class APlayerController;
class APawn;
#include "ABP_ALS_Mei_PlayerCameraBehavior__pf2678393923.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/CameraSystem/ABP_ALS_Mei_PlayerCameraBehavior.ABP_ALS_Mei_PlayerCameraBehavior_C", OverrideNativeName="ABP_ALS_Mei_PlayerCameraBehavior_C"))
class UABP_ALS_Mei_PlayerCameraBehavior_C__pf2678393923 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByEnum_11"))
	FAnimNode_BlendListByEnum bpv__AnimGraphNode_BlendListByEnum_11__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByBool_1"))
	FAnimNode_BlendListByBool bpv__AnimGraphNode_BlendListByBool_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_4"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_35"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_35__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_34"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_34__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_33"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_33__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_32"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_32__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByEnum_10"))
	FAnimNode_BlendListByEnum bpv__AnimGraphNode_BlendListByEnum_10__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_3"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_10"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_10__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_31"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_31__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_9"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_9__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_2"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_1"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_30"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_30__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_29"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_29__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_28"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_28__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_27"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_27__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_26"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_26__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByEnum_9"))
	FAnimNode_BlendListByEnum bpv__AnimGraphNode_BlendListByEnum_9__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_25"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_25__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_24"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_24__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_23"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_23__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByEnum_8"))
	FAnimNode_BlendListByEnum bpv__AnimGraphNode_BlendListByEnum_8__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByEnum_7"))
	FAnimNode_BlendListByEnum bpv__AnimGraphNode_BlendListByEnum_7__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_22"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_22__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_2"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_21"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_21__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_20"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_20__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_19"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_19__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_18"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_18__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_17"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_17__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByEnum_6"))
	FAnimNode_BlendListByEnum bpv__AnimGraphNode_BlendListByEnum_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_16"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_16__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_15"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_15__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_14"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_14__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByEnum_5"))
	FAnimNode_BlendListByEnum bpv__AnimGraphNode_BlendListByEnum_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByEnum_4"))
	FAnimNode_BlendListByEnum bpv__AnimGraphNode_BlendListByEnum_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_13"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_13__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_1"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_12"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_12__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_11"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_11__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_10"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_10__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_9"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_9__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_8"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_8__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByEnum_3"))
	FAnimNode_BlendListByEnum bpv__AnimGraphNode_BlendListByEnum_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_7"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_7__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_6"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_5"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByEnum_2"))
	FAnimNode_BlendListByEnum bpv__AnimGraphNode_BlendListByEnum_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByEnum_1"))
	FAnimNode_BlendListByEnum bpv__AnimGraphNode_BlendListByEnum_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_4"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_2"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_3"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_8"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_8__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose_1"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_7"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_7__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_6"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_2"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve_1"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByBool"))
	FAnimNode_BlendListByBool bpv__AnimGraphNode_BlendListByBool__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_5"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_4"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendListByEnum"))
	FAnimNode_BlendListByEnum bpv__AnimGraphNode_BlendListByEnum__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_3"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_2"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyCurve"))
	FAnimNode_ModifyCurve bpv__AnimGraphNode_ModifyCurve__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_1"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Controller", Category="References", MultiLine="true", OverrideNativeName="PlayerController"))
	APlayerController* bpv__PlayerController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Controlled Pawn", Category="References", MultiLine="true", OverrideNativeName="ControlledPawn"))
	APawn* bpv__ControlledPawn__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Movement State", Category="Character Info", MultiLine="true", OverrideNativeName="MovementState"))
	E__E_MovementState__pf bpv__MovementState__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Movement Action", Category="Character Info", MultiLine="true", OverrideNativeName="MovementAction"))
	E__ALS_MovementAction__pf bpv__MovementAction__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation Mode", Category="Character Info", MultiLine="true", OverrideNativeName="RotationMode"))
	E__ALS_RotationMode__pf bpv__RotationMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Gait", Category="Character Info", MultiLine="true", OverrideNativeName="Gait"))
	E__ALS_Gait__pf bpv__Gait__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Stance", Category="Character Info", MultiLine="true", OverrideNativeName="Stance"))
	E__ALS_Stance__pf bpv__Stance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="View Mode", Category="Character Info", MultiLine="true", OverrideNativeName="ViewMode"))
	E__ALS_ViewMode__pf bpv__ViewMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Shoulder", Category="Character Info", MultiLine="true", OverrideNativeName="RightShoulder"))
	bool bpv__RightShoulder__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Debug View", Category="Character Info", MultiLine="true", OverrideNativeName="DebugView"))
	bool bpv__DebugView__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UABP_ALS_Mei_PlayerCameraBehavior_C__pf2678393923(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_BlendListByEnum_11();
	void __InitAnimNode__AnimGraphNode_BlendListByBool_1();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_4();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_35();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_34();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_33();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_32();
	void __InitAnimNode__AnimGraphNode_BlendListByEnum_10();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_3();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_10();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_31();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_9();
	void __InitAnimNode__AnimGraphNode_TransitionResult_2();
	void __InitAnimNode__AnimGraphNode_TransitionResult_1();
	void __InitAnimNode__AnimGraphNode_TransitionResult();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_30();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_29();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_28();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_27();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_26();
	void __InitAnimNode__AnimGraphNode_BlendListByEnum_9();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_25();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_24();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_23();
	void __InitAnimNode__AnimGraphNode_BlendListByEnum_8();
	void __InitAnimNode__AnimGraphNode_BlendListByEnum_7();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_22();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_21();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_20();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_19();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_18();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_17();
	void __InitAnimNode__AnimGraphNode_BlendListByEnum_6();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_16();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_15();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_14();
	void __InitAnimNode__AnimGraphNode_BlendListByEnum_5();
	void __InitAnimNode__AnimGraphNode_BlendListByEnum_4();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_13();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_12();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_11();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_10();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_9();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_8();
	void __InitAnimNode__AnimGraphNode_BlendListByEnum_3();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_7();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_6();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_5();
	void __InitAnimNode__AnimGraphNode_BlendListByEnum_2();
	void __InitAnimNode__AnimGraphNode_BlendListByEnum_1();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_4();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_2();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_3();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_8();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose_1();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_7();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_6();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_2();
	void __InitAnimNode__AnimGraphNode_ModifyCurve_1();
	void __InitAnimNode__AnimGraphNode_BlendListByBool();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_5();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_4();
	void __InitAnimNode__AnimGraphNode_BlendListByEnum();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_3();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_2();
	void __InitAnimNode__AnimGraphNode_ModifyCurve();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_1();
	void __InitAnimNode__AnimGraphNode_UseCachedPose();
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior__pf_17(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_TransitionResult_50356EC6486E390BFD99A58B66278198"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_TransitionResult_50356EC6486E390BFD99A58B66278198__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_TransitionResult_43CA25A647BF22818B02619C1CA0665C"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_TransitionResult_43CA25A647BF22818B02619C1CA0665C__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_TransitionResult_CFD3E7DF48E4F7AA2DDD12BAD7B4BA52"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_TransitionResult_CFD3E7DF48E4F7AA2DDD12BAD7B4BA52__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_8C7242F743CF747F9F1160996318C191"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_8C7242F743CF747F9F1160996318C191__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_82039D4C435CCCECD7241D96E9E2AF6E"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_82039D4C435CCCECD7241D96E9E2AF6E__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_3DE928874A6CC3BE2517E3BCF488CEFB"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_3DE928874A6CC3BE2517E3BCF488CEFB__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_E28A052B464EDE71333FE5BC5D6A1CC2"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_E28A052B464EDE71333FE5BC5D6A1CC2__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_6FBCB5614C77B8AA0ADF4C98A2168B00"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_6FBCB5614C77B8AA0ADF4C98A2168B00__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_9DDA7B1A484993EDD81431806FF02442"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_9DDA7B1A484993EDD81431806FF02442__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_60A469A048B7D67623BB1D80E1FF13C1"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_60A469A048B7D67623BB1D80E1FF13C1__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_8BBDD16B401381417CFD25BF8C0F7963"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_8BBDD16B401381417CFD25BF8C0F7963__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_74FAFDD048F9486DC2309C9178C7D148"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_74FAFDD048F9486DC2309C9178C7D148__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_895D960A42E1B89114B832A9DCF23DE9"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_895D960A42E1B89114B832A9DCF23DE9__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByBool_70A8D5EF4F8B16C0DD1031897E22CE61"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByBool_70A8D5EF4F8B16C0DD1031897E22CE61__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_DC54FCC248F22E24C254CE99C2BADA06"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_DC54FCC248F22E24C254CE99C2BADA06__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByBool_444C415E41B5DF0BEC3196BC82CA104C"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByBool_444C415E41B5DF0BEC3196BC82CA104C__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_623AB66A40B61BD8C7004E951BDC3642"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ALS_Mei_PlayerCameraBehavior_AnimGraphNode_BlendListByEnum_623AB66A40B61BD8C7004E951BDC3642__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateCharacterInfo"))
	virtual void bpf__UpdateCharacterInfo__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
