#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BP_Mei_Building_BaseObject__pf2826203124.h"
class UBoxComponent;
class USceneComponent;
#include "BP_Mei_Building_Foundation__pf3022723389.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/BuildingObject/Modular/BP_Mei_Building_Foundation.BP_Mei_Building_Foundation_C", OverrideNativeName="BP_Mei_Building_Foundation_C"))
class ABP_Mei_Building_Foundation_C__pf3022723389 : public ABP_Mei_Building_BaseObject_C__pf2826203124
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="SupportChecker4"))
	UBoxComponent* bpv__SupportChecker4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="SupportChecker3"))
	UBoxComponent* bpv__SupportChecker3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="SupportChecker2"))
	UBoxComponent* bpv__SupportChecker2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="SupportChecker1"))
	UBoxComponent* bpv__SupportChecker1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="BuildComponents"))
	USceneComponent* bpv__BuildComponents__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="SupportCheckers"))
	USceneComponent* bpv__SupportCheckers__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="RoofSocket"))
	USceneComponent* bpv__RoofSocket__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="FloorSocket"))
	USceneComponent* bpv__FloorSocket__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="StairsSocket"))
	USceneComponent* bpv__StairsSocket__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="RampSockets"))
	USceneComponent* bpv__RampSockets__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="WallSockets"))
	USceneComponent* bpv__WallSockets__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="TriangleFoundationSockets"))
	USceneComponent* bpv__TriangleFoundationSockets__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="FoundationSockets"))
	USceneComponent* bpv__FoundationSockets__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="BuildCollision"))
	UBoxComponent* bpv__BuildCollision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="RampSocket4"))
	USceneComponent* bpv__RampSocket4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="RampSocket3"))
	USceneComponent* bpv__RampSocket3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="RampSocket2"))
	USceneComponent* bpv__RampSocket2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="RampSocket1"))
	USceneComponent* bpv__RampSocket1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="TriangleFoundationSocket4"))
	USceneComponent* bpv__TriangleFoundationSocket4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="TriangleFoundationSocket3"))
	USceneComponent* bpv__TriangleFoundationSocket3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="TriangleFoundationSocket2"))
	USceneComponent* bpv__TriangleFoundationSocket2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="TriangleFoundationSocket1"))
	USceneComponent* bpv__TriangleFoundationSocket1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="WallSocket4"))
	USceneComponent* bpv__WallSocket4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="WallSocket3"))
	USceneComponent* bpv__WallSocket3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="WallSocket2"))
	USceneComponent* bpv__WallSocket2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="WallSocket1"))
	USceneComponent* bpv__WallSocket1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="FoundationSocket4"))
	USceneComponent* bpv__FoundationSocket4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="FoundationSocket3"))
	USceneComponent* bpv__FoundationSocket3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="FoundationSocket2"))
	USceneComponent* bpv__FoundationSocket2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="FoundationSocket1"))
	USceneComponent* bpv__FoundationSocket1__pf;
	ABP_Mei_Building_Foundation_C__pf3022723389(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
