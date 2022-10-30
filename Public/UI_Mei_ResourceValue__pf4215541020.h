#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "STR_Mei_Resource__pf4030501756.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
#include "UI_Mei_ResourceValue__pf4215541020.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/UI/BuildingSystem/UI_Mei_ResourceValue.UI_Mei_ResourceValue_C", OverrideNativeName="UI_Mei_ResourceValue_C"))
class UUI_Mei_ResourceValue_C__pf4215541020 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ResourceText", Category="UI_Mei_ResourceValue", OverrideNativeName="ResourceText"))
	UTextBlock* bpv__ResourceText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ValueText", Category="UI_Mei_ResourceValue", OverrideNativeName="ValueText"))
	UTextBlock* bpv__ValueText__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Font", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Font"))
	FSlateFontInfo bpv__Font__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Resource", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Resource"))
	FSTR_Mei_Resource__pf4030501756 bpv__Resource__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsDesignTime"))
	bool b0l__K2Node_Event_IsDesignTime__pf;
	UUI_Mei_ResourceValue_C__pf4215541020(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_UI_Mei_ResourceValue__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\t * the setup in the designer and since generally that same setup code is required at runtime, it\'s called there\t * as well.\t *\t * **WARNING**\t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\t * state, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.\t *\t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\t * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\t */", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	virtual void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update resource information.", Category, OverrideNativeName="UpdateWidget"))
	virtual void bpf__UpdateWidget__pf();
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Ser resource and update widget.", Category, OverrideNativeName="SetResource"))
	virtual void bpf__SetResource__pf(FSTR_Mei_Resource__pf4030501756 bpp__Resource__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Set resource value and update widget.", Category, OverrideNativeName="SetResourceValue"))
	virtual void bpf__SetResourceValue__pf(float bpp__ResourceValue__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
