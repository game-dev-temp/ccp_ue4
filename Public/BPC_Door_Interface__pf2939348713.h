#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BP_Door_Parent__pf2939348713.h"
#include "BPI_Interaction__pf2939348713.h"
#include "BPC_Door_Interface__pf2939348713.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/test/Doors/BPC_Door_Interface.BPC_Door_Interface_C", OverrideNativeName="BPC_Door_Interface_C"))
class ABPC_Door_Interface_C__pf2939348713 : public ABP_Door_Parent_C__pf2939348713, public IBPI_Interaction_C
{
public:
	GENERATED_BODY()
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b1l__Temp_bool_Variable__pf;
	ABPC_Door_Interface_C__pf2939348713(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BPC_Door_Interface__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Interact"))
	virtual void bpf__Interact__pf();
public:
};
