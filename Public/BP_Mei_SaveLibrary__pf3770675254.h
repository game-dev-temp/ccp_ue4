#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
class UObject;
#include "BP_Mei_SaveLibrary__pf3770675254.generated.h"
UCLASS(config=Engine, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Game/BP_Mei_SaveLibrary.BP_Mei_SaveLibrary_C", OverrideNativeName="BP_Mei_SaveLibrary_C"))
class UBP_Mei_SaveLibrary_C__pf3770675254 : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()
	UBP_Mei_SaveLibrary_C__pf3770675254(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Save Library|Other", Tooltip="Returns formated delimeter for formating variables in save / load system.", WorldContext="__WorldContext", OverrideNativeName="GetFormatedDelimiter"))
	static void bpf__GetFormatedDelimiter__pf(UObject* bpp____WorldContext__pf, /*out*/ FString& bpp__Delimiter__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Save Library|Conversions|Boolean", Tooltip="Returns formated string of boolean variable.", WorldContext="__WorldContext", OverrideNativeName="FormatBooleanVariableToString"))
	static void bpf__FormatBooleanVariableToString__pf(const FString& bpp__VariableName__pf__const, bool bpp__Value__pf, UObject* bpp____WorldContext__pf, /*out*/ FString& bpp__FormatedVariable__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Save Library|Conversions|Boolean", Tooltip="Returns boolean variable value from formated string array.", WorldContext="__WorldContext", OverrideNativeName="GetFormatedVariableBooleanValue"))
	static void bpf__GetFormatedVariableBooleanValue__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf, const FString& bpp__VariableName__pf__const, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Success__pf, /*out*/ bool& bpp__Value__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Save Library|Conversions|Byte", Tooltip="Returns formated string of byte variable.", WorldContext="__WorldContext", OverrideNativeName="FormatByteVariableToString"))
	static void bpf__FormatByteVariableToString__pf(const FString& bpp__VariableName__pf__const, uint8 bpp__Value__pf, UObject* bpp____WorldContext__pf, /*out*/ FString& bpp__FormatedVariable__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Save Library|Conversions|Integer", Tooltip="Returns formated string of integer variable.", WorldContext="__WorldContext", OverrideNativeName="FormatIntegerVariableToString"))
	static void bpf__FormatIntegerVariableToString__pf(const FString& bpp__VariableName__pf__const, int32 bpp__Value__pf, UObject* bpp____WorldContext__pf, /*out*/ FString& bpp__FormatedVariable__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Save Library|Conversions|Float", Tooltip="Returns formated string of float variable.", WorldContext="__WorldContext", OverrideNativeName="FormatFloatVariableToString"))
	static void bpf__FormatFloatVariableToString__pf(const FString& bpp__VariableName__pf__const, float bpp__Value__pf, UObject* bpp____WorldContext__pf, /*out*/ FString& bpp__FormatedVariable__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Save Library|Conversions|Name", Tooltip="Returns formated string of name variable.", WorldContext="__WorldContext", OverrideNativeName="FormatNameVariableToString"))
	static void bpf__FormatNameVariableToString__pf(const FString& bpp__VariableName__pf__const, FName bpp__Value__pf, UObject* bpp____WorldContext__pf, /*out*/ FString& bpp__FormatedVariable__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Save Library|Conversions|String", Tooltip="Returns formated string of string variable.", WorldContext="__WorldContext", OverrideNativeName="FormatStringVariableToString"))
	static void bpf__FormatStringVariableToString__pf(const FString& bpp__VariableName__pf__const, const FString& bpp__Value__pf__const, UObject* bpp____WorldContext__pf, /*out*/ FString& bpp__FormatedVariable__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Save Library|Conversions|Text", Tooltip="Returns formated string of text variable.", WorldContext="__WorldContext", OverrideNativeName="FormatTextVariableToString"))
	static void bpf__FormatTextVariableToString__pf(const FString& bpp__VariableName__pf__const, const FText& bpp__Value__pf__const, UObject* bpp____WorldContext__pf, /*out*/ FString& bpp__FormatedVariable__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Save Library|Conversions|Vector", Tooltip="Returns formated string of vector variable.", WorldContext="__WorldContext", OverrideNativeName="FormatVectorVariableToString"))
	static void bpf__FormatVectorVariableToString__pf(const FString& bpp__VariableName__pf__const, FVector bpp__Value__pf, UObject* bpp____WorldContext__pf, /*out*/ FString& bpp__FormatedVariable__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Save Library|Conversions|Rotator", Tooltip="Returns formated string of rotator variable.", WorldContext="__WorldContext", OverrideNativeName="FormatRotatorVariableToString"))
	static void bpf__FormatRotatorVariableToString__pf(const FString& bpp__VariableName__pf__const, FRotator bpp__Value__pf, UObject* bpp____WorldContext__pf, /*out*/ FString& bpp__FormatedVariable__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Save Library|Conversions|Transform", Tooltip="Returns formated string of transform variable.", WorldContext="__WorldContext", OverrideNativeName="FormatTransformVariableToString"))
	static void bpf__FormatTransformVariableToString__pf(const FString& bpp__VariableName__pf__const, FTransform bpp__Value__pf, UObject* bpp____WorldContext__pf, /*out*/ FString& bpp__FormatedVariable__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Save Library|Conversions|Byte", Tooltip="Returns byte variable value from formated string array.", WorldContext="__WorldContext", OverrideNativeName="GetFormatedVariableByteValue"))
	static void bpf__GetFormatedVariableByteValue__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf, const FString& bpp__VariableName__pf__const, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Success__pf, /*out*/ uint8& bpp__Value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Save Library|Conversions|Integer", Tooltip="Returns integer variable value from formated string array.", WorldContext="__WorldContext", OverrideNativeName="GetFormatedVariableIntegerValue"))
	static void bpf__GetFormatedVariableIntegerValue__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf, const FString& bpp__VariableName__pf__const, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Success__pf, /*out*/ int32& bpp__Value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Save Library|Conversions|Float", Tooltip="Returns float variable value from formated string array.", WorldContext="__WorldContext", OverrideNativeName="GetFormatedVariableFloatValue"))
	static void bpf__GetFormatedVariableFloatValue__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf, const FString& bpp__VariableName__pf__const, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Success__pf, /*out*/ float& bpp__Value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Save Library|Conversions|Name", Tooltip="Returns name variable value from formated string array.", WorldContext="__WorldContext", OverrideNativeName="GetFormatedVariableNameValue"))
	static void bpf__GetFormatedVariableNameValue__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf, const FString& bpp__VariableName__pf__const, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Success__pf, /*out*/ FName& bpp__Value__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Save Library|Conversions|String", Tooltip="Returns formated string of string array variable.", WorldContext="__WorldContext", OverrideNativeName="FormatStringArrayVariableToString"))
	static void bpf__FormatStringArrayVariableToString__pf(const FString& bpp__VariableName__pf__const, /*out*/ TArray<FString>& bpp__Value__pf, UObject* bpp____WorldContext__pf, /*out*/ FString& bpp__FormatedVariable__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Save Library|Conversions|String", Tooltip="Returns string variable value from formated string array.", WorldContext="__WorldContext", OverrideNativeName="GetFormatedVariableStringValue"))
	static void bpf__GetFormatedVariableStringValue__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf, const FString& bpp__VariableName__pf__const, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Success__pf, /*out*/ FString& bpp__Value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Save Library|Conversions|Text", Tooltip="Returns text variable from formated string array.", WorldContext="__WorldContext", OverrideNativeName="GetFormatedVariableTextValue"))
	static void bpf__GetFormatedVariableTextValue__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf, const FString& bpp__VariableName__pf__const, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Success__pf, /*out*/ FText& bpp__Value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Save Library|Conversions|Vector", Tooltip="Returns vector variable from formated string array.", WorldContext="__WorldContext", OverrideNativeName="GetFormatedVariableVectorValue"))
	static void bpf__GetFormatedVariableVectorValue__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf, const FString& bpp__VariableName__pf__const, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Success__pf, /*out*/ FVector& bpp__Value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Save Library|Conversions|Rotator", Tooltip="Returns rotator variable from formated string array.", WorldContext="__WorldContext", OverrideNativeName="GetFormatedVariableRotatorValue"))
	static void bpf__GetFormatedVariableRotatorValue__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf, const FString& bpp__VariableName__pf__const, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Success__pf, /*out*/ FRotator& bpp__Value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Save Library|Conversions|Transform", Tooltip="Returns transform variable from formated string array.", WorldContext="__WorldContext", OverrideNativeName="GetFormatedVariableTransformValue"))
	static void bpf__GetFormatedVariableTransformValue__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf, const FString& bpp__VariableName__pf__const, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Success__pf, /*out*/ FTransform& bpp__Value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Save Library|Conversions|String", Tooltip="Returns string array variable from formated string array.", WorldContext="__WorldContext", OverrideNativeName="GetFormatedVariableStringArray"))
	static void bpf__GetFormatedVariableStringArray__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf, const FString& bpp__VariableName__pf__const, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Success__pf, /*out*/ TArray<FString>& bpp__Value__pf);
public:
};
