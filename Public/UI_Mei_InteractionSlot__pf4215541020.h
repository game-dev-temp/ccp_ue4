#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
class UTextBlock;
class UTexture2D;
#include "UI_Mei_InteractionSlot__pf4215541020.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/UI/BuildingSystem/UI_Mei_InteractionSlot.UI_Mei_InteractionSlot_C", OverrideNativeName="UI_Mei_InteractionSlot_C"))
class UUI_Mei_InteractionSlot_C__pf4215541020 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BtnSelect", Category="UI_Mei_InteractionSlot", OverrideNativeName="BtnSelect"))
	UButton* bpv__BtnSelect__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Icon", Category="UI_Mei_InteractionSlot", OverrideNativeName="Icon"))
	UImage* bpv__Icon__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="InteractionSlotText", Category="UI_Mei_InteractionSlot", OverrideNativeName="InteractionSlotText"))
	UTextBlock* bpv__InteractionSlotText__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Selected", Category="State", OverrideNativeName="IsSelected"))
	bool bpv__IsSelected__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Texture", Category="Settings", OverrideNativeName="IconTexture"))
	UTexture2D* bpv__IconTexture__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Default Color", Category="Settings", OverrideNativeName="IconDefaultColor"))
	FLinearColor bpv__IconDefaultColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Selected Color", Category="Settings", OverrideNativeName="IconSelectedColor"))
	FLinearColor bpv__IconSelectedColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Slot Text", Category="Settings", OverrideNativeName="SlotText"))
	FText bpv__SlotText__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_UpdateWidget_Success"))
	bool b0l__CallFunc_UpdateWidget_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsDesignTime"))
	bool b0l__K2Node_Event_IsDesignTime__pf;
	UUI_Mei_InteractionSlot_C__pf4215541020(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_UI_Mei_InteractionSlot__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\t * the setup in the designer and since generally that same setup code is required at runtime, it\'s called there\t * as well.\t *\t * **WARNING**\t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\t * state, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.\t *\t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\t * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\t */", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	virtual void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update building object button widget.", Category, OverrideNativeName="UpdateWidget"))
	virtual void bpf__UpdateWidget__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Set selection state and icon color.", Category, OverrideNativeName="SetSelection"))
	virtual void bpf__SetSelection__pf(bool bpp__IsSelected__pf, /*out*/ bool& bpp__Success__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
