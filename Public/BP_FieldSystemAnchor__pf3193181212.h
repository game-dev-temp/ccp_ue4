#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/GeometryCollectionSimulationTypes.h"
#include "Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemActor.h"
class UCullingField;
class UUniformInteger;
class UBoxFalloff;
class UStaticMeshComponent;
#include "BP_FieldSystemAnchor__pf3193181212.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/Level/Destructible/BP_FieldSystemAnchor.BP_FieldSystemAnchor_C", OverrideNativeName="BP_FieldSystemAnchor_C"))
class ABP_FieldSystemAnchor_C__pf3193181212 : public AFieldSystemActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="CullingField"))
	UCullingField* bpv__CullingField__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UniformInteger"))
	UUniformInteger* bpv__UniformInteger__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BoxFalloff"))
	UBoxFalloff* bpv__BoxFalloff__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cube"))
	UStaticMeshComponent* bpv__Cube__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Static State", Category="Default", MultiLine="true", OverrideNativeName="StaticState"))
	EObjectStateTypeEnum bpv__StaticState__pf;
	ABP_FieldSystemAnchor_C__pf3193181212(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
