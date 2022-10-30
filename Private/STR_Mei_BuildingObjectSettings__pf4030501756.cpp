#include "NativizedAssets.h"
#include "STR_Mei_BuildingObjectSettings__pf4030501756.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "BP_Mei_Building_BaseObject__pf2826203124.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
FSTR_Mei_BuildingObjectSettings__pf4030501756::FSTR_Mei_BuildingObjectSettings__pf4030501756()
{
	bpv__Class_50_C92DE2774BF265E4423C7580CA026280__pf = ABP_Mei_Building_BaseObject_C__pf2826203124::StaticClass();
	bpv__Icon_11_01DC2F16402C4D0E696B7BA66826D771__pf = nullptr;
	bpv__StaticMesh_17_86E561D94DB8DEB8F857AA8347690B7C__pf = nullptr;
	bpv__DestructibleMesh_20_5CD446F34364D199814719A934E84961__pf = nullptr;
	bpv__MaxDurability_23_DDC221224D1587C830829C834AE458BF__pf = 0.000000f;
	bpv__CanBeDamaged_26_0C6B61794AA45C3393316D9A6007AEFD__pf = true;
	bpv__UseMeshSockets_28_97655AF54B13D649379DF3B885F3F635__pf = false;
	bpv__CorrectMeshTransform_31_80BA9B8C4687377A1AF79884C6766444__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
	bpv__RepairFactor_44_A75C7EFB49F6CD391E97A297090522F3__pf = 1.000000f;
}
PRAGMA_DISABLE_OPTIMIZATION
void FSTR_Mei_BuildingObjectSettings__pf4030501756::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(true, false, false, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{3, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Texture2D 
		{4, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.StaticMesh 
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
struct FRegisterHelper__FSTR_Mei_BuildingObjectSettings__pf4030501756
{
	FRegisterHelper__FSTR_Mei_BuildingObjectSettings__pf4030501756()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/BP/BuildingSystem/Structures/STR_Mei_BuildingObjectSettings"), &FSTR_Mei_BuildingObjectSettings__pf4030501756::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FSTR_Mei_BuildingObjectSettings__pf4030501756 Instance;
};
FRegisterHelper__FSTR_Mei_BuildingObjectSettings__pf4030501756 FRegisterHelper__FSTR_Mei_BuildingObjectSettings__pf4030501756::Instance;
