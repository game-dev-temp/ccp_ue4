#include "NativizedAssets.h"
#include "STR_Mei_SaveData_BuildingObject__pf2864127960.h"
#include "BP_Mei_Building_BaseObject__pf2826203124.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
FSTR_Mei_SaveData_BuildingObject__pf2864127960::FSTR_Mei_SaveData_BuildingObject__pf2864127960()
{
	bpv__Class_20_BD365C9A46D9D73813A1B5A1BD782B3F__pf = nullptr;
	bpv__Transform_5_C9D83ABA45C3317FD7AC2DB6BEC331F5__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
	bpv__Durability_13_083EC06740AEF51CF93DAA9686259FE7__pf = 0.000000f;
	bpv__MaxDurability_15_672C88DE4354B61B3CE2A1A04D950415__pf = 0.000000f;
	bpv__FloorNumber_19_F46541684806CE9038F4F3A185FA967E__pf = 0;
}
PRAGMA_DISABLE_OPTIMIZATION
void FSTR_Mei_SaveData_BuildingObject__pf2864127960::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(true, false, false, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{5, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SceneComponent 
		{6, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{7, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/Mei/Mesh/BuildingSystem/Structures/Dummy/SM_Dummy_Foundation.SM_Dummy_Foundation 
		{8, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Dummy_Structures_Base.MI_Dummy_Structures_Base 
		{9, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Actor 
		{10, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{11, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.DamageType 
		{12, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Controller 
		{13, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{14, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{15, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{16, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{17, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{18, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{19, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SoundBase 
		{20, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SaveGame 
		{3, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Texture2D 
		{4, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.StaticMesh 
		{21, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.DataTable 
		{22, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{23, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PlayerController 
		{24, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{25, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{26, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{27, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{28, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.ActorComponent 
		{29, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.ECollisionResponse 
		{30, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{31, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{32, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{33, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{34, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{36, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{37, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PlayerState 
		{38, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Landscape.Landscape 
		{39, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.UserWidget 
		{40, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{41, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.EFormatArgumentType 
		{42, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.ETextGender 
		{43, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{44, FBlueprintDependencyType(false, true, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{45, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{46, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{47, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{48, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{49, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.MeshComponent 
		{50, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{51, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{52, FBlueprintDependencyType(false, true, false, false)},  //  NiagaraSystem /Game/Mei/VFX/BuildingSystem/Dummy/Dummy.Dummy 
		{53, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.EDrawDebugTrace 
		{54, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Pawn 
		{55, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.HUD 
		{56, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Character 
		{57, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Can_Build.MI_Can_Build 
		{58, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_CanNot_Build.MI_CanNot_Build 
		{59, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Image 
		{60, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.VerticalBox 
		{61, FBlueprintDependencyType(false, true, false, false)},  //  DataTable /Game/Mei/BP/BuildingSystem/DataTables/DT_Mei_BuildingObjects.DT_Mei_BuildingObjects 
		{62, FBlueprintDependencyType(false, true, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{63, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.TextBlock 
		{64, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{65, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Border 
		{66, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{67, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{68, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Widget 
		{69, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{70, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{71, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{72, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.ProgressBar 
		{73, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.AnimMontage 
		{74, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{75, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{76, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{77, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Button 
		{78, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WrapBox 
		{79, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Overlay 
		{80, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{81, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{82, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{83, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WrapBoxSlot 
		{84, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.BoxComponent 
		{85, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{86, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/ApexDestruction.DestructibleComponent 
		{87, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/ApexDestruction.DestructibleActor 
		{88, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/ApexDestruction.DestructibleMesh 
		{89, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/BuildingObject/Base/BP_Mei_Building_BaseObject.BP_Mei_Building_BaseObject_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FSTR_Mei_SaveData_BuildingObject__pf2864127960
{
	FRegisterHelper__FSTR_Mei_SaveData_BuildingObject__pf2864127960()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/BP/BuildingSystem/Structures/SaveData/STR_Mei_SaveData_BuildingObject"), &FSTR_Mei_SaveData_BuildingObject__pf2864127960::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FSTR_Mei_SaveData_BuildingObject__pf2864127960 Instance;
};
FRegisterHelper__FSTR_Mei_SaveData_BuildingObject__pf2864127960 FRegisterHelper__FSTR_Mei_SaveData_BuildingObject__pf2864127960::Instance;
