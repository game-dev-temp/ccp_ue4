#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
class USkeletalMeshComponent;
class APawn;
class UABP_ALS_Mei_PlayerCameraBehavior_C__pf2678393923;
class AActor;
#include "BP_ALS_Mei_PlayerCameraManager__pf2678393923.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/CameraSystem/BP_ALS_Mei_PlayerCameraManager.BP_ALS_Mei_PlayerCameraManager_C", OverrideNativeName="BP_ALS_Mei_PlayerCameraManager_C"))
class ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923 : public APlayerCameraManager
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="CameraBehavior"))
	USkeletalMeshComponent* bpv__CameraBehavior__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Controlled Pawn", Category="Default", MultiLine="true", OverrideNativeName="ControlledPawn"))
	APawn* bpv__ControlledPawn__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Debug View Offset", Category="Default", MultiLine="true", OverrideNativeName="DebugViewOffset"))
	FVector bpv__DebugViewOffset__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Debug View Rotation", Category="Default", MultiLine="true", OverrideNativeName="DebugViewRotation"))
	FRotator bpv__DebugViewRotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Root Location", Category="Default", MultiLine="true", OverrideNativeName="RootLocation"))
	FVector bpv__RootLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Smoothed Pivot Target", Category="Default", MultiLine="true", OverrideNativeName="SmoothedPivotTarget"))
	FTransform bpv__SmoothedPivotTarget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pivot Location", Category="Default", MultiLine="true", OverrideNativeName="PivotLocation"))
	FVector bpv__PivotLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Camera Location", Category="Default", MultiLine="true", OverrideNativeName="TargetCameraLocation"))
	FVector bpv__TargetCameraLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Camera Rotation", Category="Default", MultiLine="true", OverrideNativeName="TargetCameraRotation"))
	FRotator bpv__TargetCameraRotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NewPawn"))
	APawn* b0l__K2Node_CustomEvent_NewPawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsABP_ALS_Mei_Player_Camera_Behavior"))
	UABP_ALS_Mei_PlayerCameraBehavior_C__pf2678393923* b0l__K2Node_DynamicCast_AsABP_ALS_Mei_Player_Camera_Behavior__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_ALS_Mei_PlayerCameraManager__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnPossess"))
	virtual void bpf__OnPossess__pf(APawn* bpp__NewPawn__pf);
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(Comment="/** \t * Blueprint hook to allow blueprints to override existing camera behavior or implement custom cameras.\t * If this function returns true, we will use the given returned values and skip further calculations to determine\t * final camera POV. \t */", ToolTip="Blueprint hook to allow blueprints to override existing camera behavior or implement custom cameras.If this function returns true, we will use the given returned values and skip further calculations to determinefinal camera POV.", Category, CppFromBpEvent, OverrideNativeName="BlueprintUpdateCamera"))
	virtual bool  bpf__BlueprintUpdateCamera__pf(AActor* bpp__CameraTarget__pf, /*out*/ FVector& bpp__NewCameraLocation__pf, /*out*/ FRotator& bpp__NewCameraRotation__pf, /*out*/ float& bpp__NewCameraFOV__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="CustomCameraBehavior"))
	virtual void bpf__CustomCameraBehavior__pf(/*out*/ FVector& bpp__Location__pf, /*out*/ FRotator& bpp__Rotation__pf, /*out*/ float& bpp__FOV__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Default", OverrideNativeName="CalculateAxisIndependentLag"))
	virtual FVector  bpf__CalculateAxisIndependentLag__pf(FVector bpp__CurrentLocation__pf, FVector bpp__TargetLocation__pf, FRotator bpp__CameraRotation__pf, FVector bpp__LagSpeeds__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_CameraBehaviorParam"))
	virtual float  bpf__Get_CameraBehaviorParam__pf(FName bpp__CurveName__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetDebugTraceType"))
	virtual void bpf__GetDebugTraceType__pf(EDrawDebugTrace::Type bpp__ShowTraceType__pf, /*out*/ TEnumAsByte<EDrawDebugTrace::Type>& bpp__DebugTypu__pf);
public:
};
