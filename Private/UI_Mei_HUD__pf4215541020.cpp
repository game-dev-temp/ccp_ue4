#include "NativizedAssets.h"
#include "UI_Mei_HUD__pf4215541020.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "UI_Mei_BuildingMenu__pf4215541020.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "UI_Mei_MalletMenu__pf4215541020.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "UI_Mei_ResourceValue__pf4215541020.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "UI_Mei_InteractionSlot__pf4215541020.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
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
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
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
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
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
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneByteTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneByteSection.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "UI_Mei_MenuSegment__pf4215541020.h"
#include "BP_Mei_InteractionComponent__pf1731449071.h"
#include "BP_Mei_BuildingComponent__pf1731449071.h"
#include "BP_Mei_Building_BaseObject__pf2826203124.h"
#include "UI_Mei_BuildingMenuSegment__pf4215541020.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#include "Runtime/UMG/Public/Components/WrapBoxSlot.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/ScrollBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SafeZoneSlot.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "E_Mei_InteractionType__pf424568635.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "BP_Mei_ResourcesComponent__pf1731449071.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "BPI_Mei_InteractionObject__pf685842786.h"
#include "STR_Mei_BuildingObjectSettings__pf4030501756.h"
#include "BPI_Mei_Durability__pf685842786.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "E_Mei_ResourceType__pf424568635.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UUI_Mei_HUD_C__pf4215541020::UUI_Mei_HUD_C__pf4215541020(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__BuildingMenu__pf = nullptr;
	bpv__CrosshairImage__pf = nullptr;
	bpv__DurabilityProgressBar__pf = nullptr;
	bpv__DurabilityText__pf = nullptr;
	bpv__ErrorMessageText__pf = nullptr;
	bpv__InteractionBox__pf = nullptr;
	bpv__InteractionKeyText__pf = nullptr;
	bpv__InteractionObjectNameText__pf = nullptr;
	bpv__InteractionSlotHachet__pf = nullptr;
	bpv__InteractionslotMallet__pf = nullptr;
	bpv__InteractionSlotPickaxe__pf = nullptr;
	bpv__InteractionText__pf = nullptr;
	bpv__MalletMenu__pf = nullptr;
	bpv__Metalvalue__pf = nullptr;
	bpv__StoneValue__pf = nullptr;
	bpv__WoodValue__pf = nullptr;
	bpv__BuildingComponent__pf = nullptr;
	bpv__InteractionComponent__pf = nullptr;
	bpv__ResourceComponent__pf = nullptr;
	bpv__ShowMenuSound__pf = nullptr;
	bpv__HideMenuSound__pf = nullptr;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UUI_Mei_HUD_C__pf4215541020::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UUI_Mei_HUD_C__pf4215541020::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_InteractionType.E_Mei_InteractionType")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_BuildingMode.E_Mei_BuildingMode")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UUI_Mei_MenuSegment_C__pf4215541020::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_Mei_Player_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_Player_C());
	InDynamicClass->ReferencedConvertedFields.Add(UBP_Mei_InteractionComponent_C__pf1731449071::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UBP_Mei_BuildingComponent_C__pf1731449071::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Mei_Building_BaseObject_C__pf2826203124::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UUI_Mei_BuildingMenuSegment_C__pf4215541020::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UUI_Mei_MalletMenu_C__pf4215541020::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UUI_Mei_BuildingMenu_C__pf4215541020::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UUI_Mei_InteractionSlot_C__pf4215541020::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UBP_Mei_ResourcesComponent_C__pf1731449071::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UUI_Mei_ResourceValue_C__pf4215541020::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_Mei_InteractionObject_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_InteractionObject_C());
	extern UClass* Z_Construct_UClass_UBPI_Mei_Durability_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_Durability_C());
	extern UClass* Z_Construct_UClass_UBPI_Mei_BuildingWidget_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_BuildingWidget_C());
	extern UClass* Z_Construct_UClass_UBPI_Mei_InteractionWidget_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_InteractionWidget_C());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_BuildingObjectSettings__pf4030501756();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_BuildingObjectSettings__pf4030501756());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("ShowErrorMessageAnimation_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeBorderAnimation_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[0];
	__Local__4.ComponentPropertyName = FName(TEXT("MalletMenu"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnMenuSegmentClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__UI_Mei_HUD_MalletMenu_K2Node_ComponentBoundEvent_2_OnMenuSegmentClicked__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[1];
	__Local__5.ComponentPropertyName = FName(TEXT("BuildingMenu"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnBuildingSegmentClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__UI_Mei_HUD_BuildingMenu_K2Node_ComponentBoundEvent_1_OnBuildingSegmentClicked__DelegateSignature"));
	auto __Local__6 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__7 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__6), UPanelWidget::__PPO__Slots() )));
	__Local__7 = TArray<UPanelSlot*> ();
	__Local__7.Reserve(12);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_6"), (EObjectFlags)0x00280008);
	__Local__8->LayoutData.Offsets.Right = 0.000000f;
	__Local__8->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__8->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__8->ZOrder = -1;
	__Local__8->Parent = __Local__6;
	auto __Local__9 = NewObject<UBorder>(__Local__1, TEXT("FadeBorder"), (EObjectFlags)0x00280008);
	__Local__9->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 0.000000);
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__7.Add(__Local__8);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_7"), (EObjectFlags)0x00280008);
	__Local__10->LayoutData.Offsets.Right = 0.000000f;
	__Local__10->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__10->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__10->ZOrder = 1;
	__Local__10->Parent = __Local__6;
	auto __Local__11 = NewObject<UUI_Mei_BuildingMenu_C__pf4215541020>(__Local__1, TEXT("BuildingMenu"), (EObjectFlags)0x00280008);
	__Local__11->bpv__MaxSegmentCount__pf = 16;
	__Local__11->Slot = __Local__10;
	__Local__11->Visibility = ESlateVisibility::Hidden;
	__Local__10->Content = __Local__11;
	__Local__7.Add(__Local__10);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_8"), (EObjectFlags)0x00280008);
	__Local__12->LayoutData.Offsets.Right = 0.000000f;
	__Local__12->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__12->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__12->ZOrder = 1;
	__Local__12->Parent = __Local__6;
	auto __Local__13 = NewObject<UUI_Mei_MalletMenu_C__pf4215541020>(__Local__1, TEXT("MalletMenu"), (EObjectFlags)0x00280008);
	__Local__13->Slot = __Local__12;
	__Local__13->Visibility = ESlateVisibility::Hidden;
	__Local__12->Content = __Local__13;
	__Local__7.Add(__Local__12);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__14->LayoutData.Offsets.Left = 160.000000f;
	__Local__14->LayoutData.Offsets.Top = -450.000000f;
	__Local__14->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__14->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__14->bAutoSize = true;
	__Local__14->Parent = __Local__6;
	auto __Local__15 = NewObject<UTextBlock>(__Local__1, TEXT("ErrorMessageText"), (EObjectFlags)0x00280008);
	__Local__15->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"575FF45047FD3A6933A16E9CD6CB4263\", \"Error Message\")")	);
	auto& __Local__16 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__15->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__16 = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	__Local__15->Slot = __Local__14;
	__Local__15->bIsVariable = true;
	__Local__15->Visibility = ESlateVisibility::Hidden;
	__Local__14->Content = __Local__15;
	__Local__7.Add(__Local__14);
	auto __Local__17 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__17->LayoutData.Offsets.Left = 100.000000f;
	__Local__17->LayoutData.Offsets.Top = -400.000000f;
	__Local__17->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__17->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__17->bAutoSize = true;
	__Local__17->Parent = __Local__6;
	auto __Local__18 = NewObject<UVerticalBox>(__Local__1, TEXT("InteractionBox"), (EObjectFlags)0x00280008);
	auto& __Local__19 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__18), UPanelWidget::__PPO__Slots() )));
	__Local__19 = TArray<UPanelSlot*> ();
	__Local__19.Reserve(3);
	auto __Local__20 = NewObject<UVerticalBoxSlot>(__Local__18, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__20->Parent = __Local__18;
	auto __Local__21 = NewObject<UTextBlock>(__Local__1, TEXT("InteractionObjectNameText"), (EObjectFlags)0x00280008);
	__Local__21->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"DBA115C44754F1ADB052E4B768400E41\", \"Target object name\")")	);
	__Local__21->Slot = __Local__20;
	__Local__21->bIsVariable = true;
	__Local__20->Content = __Local__21;
	__Local__19.Add(__Local__20);
	auto __Local__22 = NewObject<UVerticalBoxSlot>(__Local__18, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__22->Padding.Left = 5.000000f;
	__Local__22->Padding.Top = 5.000000f;
	__Local__22->Padding.Right = 5.000000f;
	__Local__22->Padding.Bottom = 5.000000f;
	__Local__22->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__22->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__22->Parent = __Local__18;
	auto __Local__23 = NewObject<USizeBox>(__Local__1, TEXT("SizeBox_0"), (EObjectFlags)0x00280008);
	__Local__23->WidthOverride = 200.000000f;
	__Local__23->HeightOverride = 25.000000f;
	__Local__23->bOverride_WidthOverride = true;
	__Local__23->bOverride_HeightOverride = true;
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__23), UPanelWidget::__PPO__Slots() )));
	__Local__24 = TArray<UPanelSlot*> ();
	__Local__24.Reserve(1);
	auto __Local__25 = NewObject<USizeBoxSlot>(__Local__23, TEXT("SizeBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__25->Parent = __Local__23;
	auto __Local__26 = NewObject<UOverlay>(__Local__1, TEXT("Overlay_0"), (EObjectFlags)0x00280008);
	auto& __Local__27 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__26), UPanelWidget::__PPO__Slots() )));
	__Local__27 = TArray<UPanelSlot*> ();
	__Local__27.Reserve(2);
	auto __Local__28 = NewObject<UOverlaySlot>(__Local__26, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__28->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__28->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__28->Parent = __Local__26;
	auto __Local__29 = NewObject<UProgressBar>(__Local__1, TEXT("DurabilityProgressBar"), (EObjectFlags)0x00280008);
	__Local__29->Percent = 1.000000f;
	__Local__29->FillColorAndOpacity = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__29->Slot = __Local__28;
	__Local__28->Content = __Local__29;
	__Local__27.Add(__Local__28);
	auto __Local__30 = NewObject<UOverlaySlot>(__Local__26, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__30->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__30->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__30->Parent = __Local__26;
	auto __Local__31 = NewObject<UTextBlock>(__Local__1, TEXT("DurabilityText"), (EObjectFlags)0x00280008);
	__Local__31->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"4031892D415578562C732A80329C559C\", \"100 / 100\")")	);
	__Local__31->Font.Size = 16;
	__Local__31->Slot = __Local__30;
	__Local__31->bIsVariable = true;
	__Local__30->Content = __Local__31;
	__Local__27.Add(__Local__30);
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__24.Add(__Local__25);
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__19.Add(__Local__22);
	auto __Local__32 = NewObject<UVerticalBoxSlot>(__Local__18, TEXT("VerticalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__32->Parent = __Local__18;
	auto __Local__33 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_5"), (EObjectFlags)0x00280008);
	auto& __Local__34 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__33), UPanelWidget::__PPO__Slots() )));
	__Local__34 = TArray<UPanelSlot*> ();
	__Local__34.Reserve(3);
	auto __Local__35 = NewObject<UHorizontalBoxSlot>(__Local__33, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__35->Parent = __Local__33;
	auto __Local__36 = NewObject<UTextBlock>(__Local__1, TEXT("InteractionKeyText"), (EObjectFlags)0x00280008);
	__Local__36->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"67CCA8B340A89CBF56AB91A86BD1B7F0\", \"[ E ]\")")	);
	auto& __Local__37 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__36->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__37 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__36->Slot = __Local__35;
	__Local__36->bIsVariable = true;
	__Local__35->Content = __Local__36;
	__Local__34.Add(__Local__35);
	auto __Local__38 = NewObject<UHorizontalBoxSlot>(__Local__33, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__38->Parent = __Local__33;
	auto __Local__39 = NewObject<USpacer>(__Local__1, TEXT("Spacer_5"), (EObjectFlags)0x00280008);
	__Local__39->Size = FVector2D(5.000000, 1.000000);
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__34.Add(__Local__38);
	auto __Local__40 = NewObject<UHorizontalBoxSlot>(__Local__33, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__40->Parent = __Local__33;
	auto __Local__41 = NewObject<UTextBlock>(__Local__1, TEXT("InteractionText"), (EObjectFlags)0x00280008);
	__Local__41->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"C1EDE5C54F170972CEB48FB111166A1A\", \"Interaction text\")")	);
	__Local__41->Slot = __Local__40;
	__Local__41->bIsVariable = true;
	__Local__40->Content = __Local__41;
	__Local__34.Add(__Local__40);
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__19.Add(__Local__32);
	__Local__18->Slot = __Local__17;
	__Local__18->bIsVariable = true;
	__Local__17->Content = __Local__18;
	__Local__7.Add(__Local__17);
	auto __Local__42 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__42->LayoutData.Offsets.Left = -500.000000f;
	__Local__42->LayoutData.Offsets.Top = 50.000000f;
	__Local__42->LayoutData.Offsets.Right = 400.000000f;
	__Local__42->LayoutData.Offsets.Bottom = 600.000000f;
	__Local__42->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__42->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__42->Parent = __Local__6;
	auto __Local__43 = NewObject<UVerticalBox>(__Local__1, TEXT("HotkeysInformation"), (EObjectFlags)0x00280008);
	auto& __Local__44 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__43), UPanelWidget::__PPO__Slots() )));
	__Local__44 = TArray<UPanelSlot*> ();
	__Local__44.Reserve(6);
	auto __Local__45 = NewObject<UVerticalBoxSlot>(__Local__43, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__45->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__45->Parent = __Local__43;
	auto __Local__46 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_6"), (EObjectFlags)0x00280008);
	__Local__46->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"E4F4F3884F1E32FBD08AD49175DB7580\", \"Movement Hotkeys\")")	);
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__46->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__46->Font.Size = 18;
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__44.Add(__Local__45);
	auto __Local__48 = NewObject<UVerticalBoxSlot>(__Local__43, TEXT("VerticalBoxSlot_31"), (EObjectFlags)0x00280008);
	__Local__48->Parent = __Local__43;
	auto __Local__49 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_1"), (EObjectFlags)0x00280008);
	auto& __Local__50 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__49), UPanelWidget::__PPO__Slots() )));
	__Local__50 = TArray<UPanelSlot*> ();
	__Local__50.Reserve(2);
	auto __Local__51 = NewObject<UVerticalBoxSlot>(__Local__49, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__51->Parent = __Local__49;
	auto __Local__52 = NewObject<UHorizontalBox>(__Local__1, TEXT("MovementHotkeys"), (EObjectFlags)0x00280008);
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__52), UPanelWidget::__PPO__Slots() )));
	__Local__53 = TArray<UPanelSlot*> ();
	__Local__53.Reserve(3);
	auto __Local__54 = NewObject<UHorizontalBoxSlot>(__Local__52, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__54->Parent = __Local__52;
	auto __Local__55 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_13"), (EObjectFlags)0x00280008);
	__Local__55->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"02935B4743666982973F4C8DDF497F90\", \"[ WASD ]\")")	);
	auto& __Local__56 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__55->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__56 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__55->Font.Size = 16;
	__Local__55->Slot = __Local__54;
	__Local__54->Content = __Local__55;
	__Local__53.Add(__Local__54);
	auto __Local__57 = NewObject<UHorizontalBoxSlot>(__Local__52, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__57->Parent = __Local__52;
	auto __Local__58 = NewObject<USpacer>(__Local__1, TEXT("Spacer_8"), (EObjectFlags)0x00280008);
	__Local__58->Size = FVector2D(5.000000, 1.000000);
	__Local__58->Slot = __Local__57;
	__Local__57->Content = __Local__58;
	__Local__53.Add(__Local__57);
	auto __Local__59 = NewObject<UHorizontalBoxSlot>(__Local__52, TEXT("HorizontalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__59->Parent = __Local__52;
	auto __Local__60 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_14"), (EObjectFlags)0x00280008);
	__Local__60->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"75181FA04D86F623CD9F68928A5FA5F2\", \"Movement\")")	);
	__Local__60->Font.Size = 16;
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__53.Add(__Local__59);
	__Local__52->Slot = __Local__51;
	__Local__52->Visibility = ESlateVisibility::Visible;
	__Local__51->Content = __Local__52;
	__Local__50.Add(__Local__51);
	auto __Local__61 = NewObject<UVerticalBoxSlot>(__Local__49, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__61->Parent = __Local__49;
	auto __Local__62 = NewObject<UHorizontalBox>(__Local__1, TEXT("JumpHotkey"), (EObjectFlags)0x00280008);
	auto& __Local__63 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__62), UPanelWidget::__PPO__Slots() )));
	__Local__63 = TArray<UPanelSlot*> ();
	__Local__63.Reserve(3);
	auto __Local__64 = NewObject<UHorizontalBoxSlot>(__Local__62, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__64->Parent = __Local__62;
	auto __Local__65 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_15"), (EObjectFlags)0x00280008);
	__Local__65->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"0838E0A341BF81AF01D0B08BAD8265AE\", \"[ Space ]\")")	);
	auto& __Local__66 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__65->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__66 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__65->Font.Size = 16;
	__Local__65->Slot = __Local__64;
	__Local__64->Content = __Local__65;
	__Local__63.Add(__Local__64);
	auto __Local__67 = NewObject<UHorizontalBoxSlot>(__Local__62, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__67->Parent = __Local__62;
	auto __Local__68 = NewObject<USpacer>(__Local__1, TEXT("Spacer_9"), (EObjectFlags)0x00280008);
	__Local__68->Size = FVector2D(5.000000, 1.000000);
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__63.Add(__Local__67);
	auto __Local__69 = NewObject<UHorizontalBoxSlot>(__Local__62, TEXT("HorizontalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__69->Parent = __Local__62;
	auto __Local__70 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_16"), (EObjectFlags)0x00280008);
	__Local__70->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"93B2B6694CBA86BB7D0A789A6CB86401\", \"Jump\")")	);
	__Local__70->Font.Size = 16;
	__Local__70->Slot = __Local__69;
	__Local__69->Content = __Local__70;
	__Local__63.Add(__Local__69);
	__Local__62->Slot = __Local__61;
	__Local__62->Visibility = ESlateVisibility::Visible;
	__Local__61->Content = __Local__62;
	__Local__50.Add(__Local__61);
	__Local__49->Slot = __Local__48;
	__Local__48->Content = __Local__49;
	__Local__44.Add(__Local__48);
	auto __Local__71 = NewObject<UVerticalBoxSlot>(__Local__43, TEXT("VerticalBoxSlot_17"), (EObjectFlags)0x00280008);
	__Local__71->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__71->Parent = __Local__43;
	auto __Local__72 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_17"), (EObjectFlags)0x00280008);
	__Local__72->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"A785BEA84F78D22CD019FDB001F4097C\", \"Building Hotkeys\")")	);
	auto& __Local__73 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__72->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__73 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__72->Font.Size = 18;
	__Local__72->Slot = __Local__71;
	__Local__71->Content = __Local__72;
	__Local__44.Add(__Local__71);
	auto __Local__74 = NewObject<UVerticalBoxSlot>(__Local__43, TEXT("VerticalBoxSlot_32"), (EObjectFlags)0x00280008);
	__Local__74->Parent = __Local__43;
	auto __Local__75 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_2"), (EObjectFlags)0x00280008);
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__75), UPanelWidget::__PPO__Slots() )));
	__Local__76 = TArray<UPanelSlot*> ();
	__Local__76.Reserve(9);
	auto __Local__77 = NewObject<UVerticalBoxSlot>(__Local__75, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__77->Parent = __Local__75;
	auto __Local__78 = NewObject<UHorizontalBox>(__Local__1, TEXT("BuildingMenuHotkey"), (EObjectFlags)0x00280008);
	auto& __Local__79 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__78), UPanelWidget::__PPO__Slots() )));
	__Local__79 = TArray<UPanelSlot*> ();
	__Local__79.Reserve(3);
	auto __Local__80 = NewObject<UHorizontalBoxSlot>(__Local__78, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__80->Parent = __Local__78;
	auto __Local__81 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_7"), (EObjectFlags)0x00280008);
	__Local__81->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"4CD37B9543696FFD51CCB6AA867E39B0\", \"[ Q ]\")")	);
	auto& __Local__82 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__81->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__82 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__81->Font.Size = 16;
	__Local__81->Slot = __Local__80;
	__Local__80->Content = __Local__81;
	__Local__79.Add(__Local__80);
	auto __Local__83 = NewObject<UHorizontalBoxSlot>(__Local__78, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__83->Parent = __Local__78;
	auto __Local__84 = NewObject<USpacer>(__Local__1, TEXT("Spacer_4"), (EObjectFlags)0x00280008);
	__Local__84->Size = FVector2D(5.000000, 1.000000);
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__79.Add(__Local__83);
	auto __Local__85 = NewObject<UHorizontalBoxSlot>(__Local__78, TEXT("HorizontalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__85->Parent = __Local__78;
	auto __Local__86 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_218"), (EObjectFlags)0x00280008);
	__Local__86->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"1BE3A4F54BE9C5F22531C1B8BDB91F8F\", \"Building menu\")")	);
	__Local__86->Font.Size = 16;
	__Local__86->Slot = __Local__85;
	__Local__85->Content = __Local__86;
	__Local__79.Add(__Local__85);
	__Local__78->Slot = __Local__77;
	__Local__78->Visibility = ESlateVisibility::Visible;
	__Local__77->Content = __Local__78;
	__Local__76.Add(__Local__77);
	auto __Local__87 = NewObject<UVerticalBoxSlot>(__Local__75, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__87->Parent = __Local__75;
	auto __Local__88 = NewObject<UHorizontalBox>(__Local__1, TEXT("SwitchMenu"), (EObjectFlags)0x00280008);
	auto& __Local__89 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__88), UPanelWidget::__PPO__Slots() )));
	__Local__89 = TArray<UPanelSlot*> ();
	__Local__89.Reserve(3);
	auto __Local__90 = NewObject<UHorizontalBoxSlot>(__Local__88, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__90->Parent = __Local__88;
	auto __Local__91 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_10"), (EObjectFlags)0x00280008);
	__Local__91->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"D4127FAE4941B1781FDA309F5795325A\", \"[ T ]\")")	);
	auto& __Local__92 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__91->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__92 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__91->Font.Size = 16;
	__Local__91->Slot = __Local__90;
	__Local__90->Content = __Local__91;
	__Local__89.Add(__Local__90);
	auto __Local__93 = NewObject<UHorizontalBoxSlot>(__Local__88, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__93->Parent = __Local__88;
	auto __Local__94 = NewObject<USpacer>(__Local__1, TEXT("Spacer_6"), (EObjectFlags)0x00280008);
	__Local__94->Size = FVector2D(5.000000, 1.000000);
	__Local__94->Slot = __Local__93;
	__Local__93->Content = __Local__94;
	__Local__89.Add(__Local__93);
	auto __Local__95 = NewObject<UHorizontalBoxSlot>(__Local__88, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__95->Parent = __Local__88;
	auto __Local__96 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_11"), (EObjectFlags)0x00280008);
	__Local__96->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"D391B1424EB8F5ABFF8930AEB54B2682\", \"Switch to square menu\")")	);
	__Local__96->Font.Size = 16;
	__Local__96->Slot = __Local__95;
	__Local__95->Content = __Local__96;
	__Local__89.Add(__Local__95);
	__Local__88->Slot = __Local__87;
	__Local__88->Visibility = ESlateVisibility::Visible;
	__Local__87->Content = __Local__88;
	__Local__76.Add(__Local__87);
	auto __Local__97 = NewObject<UVerticalBoxSlot>(__Local__75, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__97->Parent = __Local__75;
	auto __Local__98 = NewObject<UHorizontalBox>(__Local__1, TEXT("SnappingMode"), (EObjectFlags)0x00280008);
	auto& __Local__99 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__98), UPanelWidget::__PPO__Slots() )));
	__Local__99 = TArray<UPanelSlot*> ();
	__Local__99.Reserve(3);
	auto __Local__100 = NewObject<UHorizontalBoxSlot>(__Local__98, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__100->Parent = __Local__98;
	auto __Local__101 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_0"), (EObjectFlags)0x00280008);
	__Local__101->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"2867976F4C494BBDCF3EA1885E1F9FA7\", \"[ C ]\")")	);
	auto& __Local__102 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__101->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__102 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__101->Font.Size = 16;
	__Local__101->Slot = __Local__100;
	__Local__100->Content = __Local__101;
	__Local__99.Add(__Local__100);
	auto __Local__103 = NewObject<UHorizontalBoxSlot>(__Local__98, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__103->Parent = __Local__98;
	auto __Local__104 = NewObject<USpacer>(__Local__1, TEXT("Spacer_1"), (EObjectFlags)0x00280008);
	__Local__104->Size = FVector2D(5.000000, 1.000000);
	__Local__104->Slot = __Local__103;
	__Local__103->Content = __Local__104;
	__Local__99.Add(__Local__103);
	auto __Local__105 = NewObject<UHorizontalBoxSlot>(__Local__98, TEXT("HorizontalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__105->Parent = __Local__98;
	auto __Local__106 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_215"), (EObjectFlags)0x00280008);
	__Local__106->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"A34C1DA6497D7E5DA372DFAC2D991547\", \"Switch snapping mode\")")	);
	__Local__106->Font.Size = 16;
	__Local__106->Slot = __Local__105;
	__Local__105->Content = __Local__106;
	__Local__99.Add(__Local__105);
	__Local__98->Slot = __Local__97;
	__Local__98->Visibility = ESlateVisibility::Visible;
	__Local__97->Content = __Local__98;
	__Local__76.Add(__Local__97);
	auto __Local__107 = NewObject<UVerticalBoxSlot>(__Local__75, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__107->Parent = __Local__75;
	auto __Local__108 = NewObject<UHorizontalBox>(__Local__1, TEXT("GridMode"), (EObjectFlags)0x00280008);
	auto& __Local__109 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__108), UPanelWidget::__PPO__Slots() )));
	__Local__109 = TArray<UPanelSlot*> ();
	__Local__109.Reserve(3);
	auto __Local__110 = NewObject<UHorizontalBoxSlot>(__Local__108, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__110->Parent = __Local__108;
	auto __Local__111 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__111->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"3CD8FBC5461BD0903CAD19A4FD991875\", \"[ G ]\")")	);
	auto& __Local__112 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__111->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__112 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__111->Font.Size = 16;
	__Local__111->Slot = __Local__110;
	__Local__110->Content = __Local__111;
	__Local__109.Add(__Local__110);
	auto __Local__113 = NewObject<UHorizontalBoxSlot>(__Local__108, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__113->Parent = __Local__108;
	auto __Local__114 = NewObject<USpacer>(__Local__1, TEXT("Spacer_2"), (EObjectFlags)0x00280008);
	__Local__114->Size = FVector2D(5.000000, 1.000000);
	__Local__114->Slot = __Local__113;
	__Local__113->Content = __Local__114;
	__Local__109.Add(__Local__113);
	auto __Local__115 = NewObject<UHorizontalBoxSlot>(__Local__108, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__115->Parent = __Local__108;
	auto __Local__116 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_216"), (EObjectFlags)0x00280008);
	__Local__116->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"3451B2D644002D1F3404D7AAB6A0D40C\", \"Switch grid mode\")")	);
	__Local__116->Font.Size = 16;
	__Local__116->Slot = __Local__115;
	__Local__115->Content = __Local__116;
	__Local__109.Add(__Local__115);
	__Local__108->Slot = __Local__107;
	__Local__108->Visibility = ESlateVisibility::Visible;
	__Local__107->Content = __Local__108;
	__Local__76.Add(__Local__107);
	auto __Local__117 = NewObject<UVerticalBoxSlot>(__Local__75, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__117->Parent = __Local__75;
	auto __Local__118 = NewObject<UHorizontalBox>(__Local__1, TEXT("ViewMode"), (EObjectFlags)0x00280008);
	auto& __Local__119 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__118), UPanelWidget::__PPO__Slots() )));
	__Local__119 = TArray<UPanelSlot*> ();
	__Local__119.Reserve(3);
	auto __Local__120 = NewObject<UHorizontalBoxSlot>(__Local__118, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__120->Parent = __Local__118;
	auto __Local__121 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_5"), (EObjectFlags)0x00280008);
	__Local__121->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"14AF2E0C4BDE2EFAD445F2A5247E7266\", \"[ V ]\")")	);
	auto& __Local__122 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__121->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__122 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__121->Font.Size = 16;
	__Local__121->Slot = __Local__120;
	__Local__120->Content = __Local__121;
	__Local__119.Add(__Local__120);
	auto __Local__123 = NewObject<UHorizontalBoxSlot>(__Local__118, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__123->Parent = __Local__118;
	auto __Local__124 = NewObject<USpacer>(__Local__1, TEXT("Spacer_0"), (EObjectFlags)0x00280008);
	__Local__124->Size = FVector2D(5.000000, 1.000000);
	__Local__124->Slot = __Local__123;
	__Local__123->Content = __Local__124;
	__Local__119.Add(__Local__123);
	auto __Local__125 = NewObject<UHorizontalBoxSlot>(__Local__118, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__125->Parent = __Local__118;
	auto __Local__126 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_8"), (EObjectFlags)0x00280008);
	__Local__126->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"0BFE39184F3A1528FE259D94814C120E\", \"Switch view mode\")")	);
	__Local__126->Font.Size = 16;
	__Local__126->Slot = __Local__125;
	__Local__125->Content = __Local__126;
	__Local__119.Add(__Local__125);
	__Local__118->Slot = __Local__117;
	__Local__118->Visibility = ESlateVisibility::Visible;
	__Local__117->Content = __Local__118;
	__Local__76.Add(__Local__117);
	auto __Local__127 = NewObject<UVerticalBoxSlot>(__Local__75, TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__127->Parent = __Local__75;
	auto __Local__128 = NewObject<UHorizontalBox>(__Local__1, TEXT("BuildingRotation"), (EObjectFlags)0x00280008);
	auto& __Local__129 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__128), UPanelWidget::__PPO__Slots() )));
	__Local__129 = TArray<UPanelSlot*> ();
	__Local__129.Reserve(3);
	auto __Local__130 = NewObject<UHorizontalBoxSlot>(__Local__128, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__130->Parent = __Local__128;
	auto __Local__131 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_19"), (EObjectFlags)0x00280008);
	__Local__131->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"2E9DEAC54046C07A0567B9802926FB8A\", \"[ Wheel ]\")")	);
	auto& __Local__132 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__131->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__132 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__131->Font.Size = 16;
	__Local__131->Slot = __Local__130;
	__Local__130->Content = __Local__131;
	__Local__129.Add(__Local__130);
	auto __Local__133 = NewObject<UHorizontalBoxSlot>(__Local__128, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__133->Parent = __Local__128;
	auto __Local__134 = NewObject<USpacer>(__Local__1, TEXT("Spacer_10"), (EObjectFlags)0x00280008);
	__Local__134->Size = FVector2D(5.000000, 1.000000);
	__Local__134->Slot = __Local__133;
	__Local__133->Content = __Local__134;
	__Local__129.Add(__Local__133);
	auto __Local__135 = NewObject<UHorizontalBoxSlot>(__Local__128, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__135->Parent = __Local__128;
	auto __Local__136 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_20"), (EObjectFlags)0x00280008);
	__Local__136->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"0DD3FDCF41C9A788483CD09D9099A047\", \"Change building rotation\")")	);
	__Local__136->Font.Size = 16;
	__Local__136->Slot = __Local__135;
	__Local__135->Content = __Local__136;
	__Local__129.Add(__Local__135);
	__Local__128->Slot = __Local__127;
	__Local__128->Visibility = ESlateVisibility::Visible;
	__Local__127->Content = __Local__128;
	__Local__76.Add(__Local__127);
	auto __Local__137 = NewObject<UVerticalBoxSlot>(__Local__75, TEXT("VerticalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__137->Parent = __Local__75;
	auto __Local__138 = NewObject<UHorizontalBox>(__Local__1, TEXT("BuildingHeight"), (EObjectFlags)0x00280008);
	auto& __Local__139 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__138), UPanelWidget::__PPO__Slots() )));
	__Local__139 = TArray<UPanelSlot*> ();
	__Local__139.Reserve(3);
	auto __Local__140 = NewObject<UHorizontalBoxSlot>(__Local__138, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__140->Parent = __Local__138;
	auto __Local__141 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_21"), (EObjectFlags)0x00280008);
	__Local__141->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"25CD82D1441C04B5DC59B69C0869D073\", \"[ Shift + Wheel ]\")")	);
	auto& __Local__142 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__141->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__142 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__141->Font.Size = 16;
	__Local__141->Slot = __Local__140;
	__Local__140->Content = __Local__141;
	__Local__139.Add(__Local__140);
	auto __Local__143 = NewObject<UHorizontalBoxSlot>(__Local__138, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__143->Parent = __Local__138;
	auto __Local__144 = NewObject<USpacer>(__Local__1, TEXT("Spacer_11"), (EObjectFlags)0x00280008);
	__Local__144->Size = FVector2D(5.000000, 1.000000);
	__Local__144->Slot = __Local__143;
	__Local__143->Content = __Local__144;
	__Local__139.Add(__Local__143);
	auto __Local__145 = NewObject<UHorizontalBoxSlot>(__Local__138, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__145->Parent = __Local__138;
	auto __Local__146 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_22"), (EObjectFlags)0x00280008);
	__Local__146->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"80C76BBE4F4997A225CEBC97B99139EC\", \"Change building height\")")	);
	__Local__146->Font.Size = 16;
	__Local__146->Slot = __Local__145;
	__Local__145->Content = __Local__146;
	__Local__139.Add(__Local__145);
	__Local__138->Slot = __Local__137;
	__Local__138->Visibility = ESlateVisibility::Visible;
	__Local__137->Content = __Local__138;
	__Local__76.Add(__Local__137);
	auto __Local__147 = NewObject<UVerticalBoxSlot>(__Local__75, TEXT("VerticalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__147->Parent = __Local__75;
	auto __Local__148 = NewObject<UHorizontalBox>(__Local__1, TEXT("IncreaseFloor"), (EObjectFlags)0x00280008);
	auto& __Local__149 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__148), UPanelWidget::__PPO__Slots() )));
	__Local__149 = TArray<UPanelSlot*> ();
	__Local__149.Reserve(3);
	auto __Local__150 = NewObject<UHorizontalBoxSlot>(__Local__148, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__150->Parent = __Local__148;
	auto __Local__151 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_23"), (EObjectFlags)0x00280008);
	__Local__151->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"E312C01C4B95F7CE99FD14A022B41286\", \"[ Page Up ]\")")	);
	auto& __Local__152 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__151->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__152 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__151->Font.Size = 16;
	__Local__151->Slot = __Local__150;
	__Local__150->Content = __Local__151;
	__Local__149.Add(__Local__150);
	auto __Local__153 = NewObject<UHorizontalBoxSlot>(__Local__148, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__153->Parent = __Local__148;
	auto __Local__154 = NewObject<USpacer>(__Local__1, TEXT("Spacer_12"), (EObjectFlags)0x00280008);
	__Local__154->Size = FVector2D(5.000000, 1.000000);
	__Local__154->Slot = __Local__153;
	__Local__153->Content = __Local__154;
	__Local__149.Add(__Local__153);
	auto __Local__155 = NewObject<UHorizontalBoxSlot>(__Local__148, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__155->Parent = __Local__148;
	auto __Local__156 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_24"), (EObjectFlags)0x00280008);
	__Local__156->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"03AE5833411233F22E13DB97350C3249\", \"Increase displayed floor\")")	);
	__Local__156->Font.Size = 16;
	__Local__156->Slot = __Local__155;
	__Local__155->Content = __Local__156;
	__Local__149.Add(__Local__155);
	__Local__148->Slot = __Local__147;
	__Local__148->Visibility = ESlateVisibility::Visible;
	__Local__147->Content = __Local__148;
	__Local__76.Add(__Local__147);
	auto __Local__157 = NewObject<UVerticalBoxSlot>(__Local__75, TEXT("VerticalBoxSlot_8"), (EObjectFlags)0x00280008);
	__Local__157->Parent = __Local__75;
	auto __Local__158 = NewObject<UHorizontalBox>(__Local__1, TEXT("DecreaseFloor"), (EObjectFlags)0x00280008);
	auto& __Local__159 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__158), UPanelWidget::__PPO__Slots() )));
	__Local__159 = TArray<UPanelSlot*> ();
	__Local__159.Reserve(3);
	auto __Local__160 = NewObject<UHorizontalBoxSlot>(__Local__158, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__160->Parent = __Local__158;
	auto __Local__161 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_25"), (EObjectFlags)0x00280008);
	__Local__161->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"03DF2D1F46D7DD0CCB1211BC5F27623E\", \"[ Page Down ]\")")	);
	auto& __Local__162 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__161->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__162 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__161->Font.Size = 16;
	__Local__161->Slot = __Local__160;
	__Local__160->Content = __Local__161;
	__Local__159.Add(__Local__160);
	auto __Local__163 = NewObject<UHorizontalBoxSlot>(__Local__158, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__163->Parent = __Local__158;
	auto __Local__164 = NewObject<USpacer>(__Local__1, TEXT("Spacer_13"), (EObjectFlags)0x00280008);
	__Local__164->Size = FVector2D(5.000000, 1.000000);
	__Local__164->Slot = __Local__163;
	__Local__163->Content = __Local__164;
	__Local__159.Add(__Local__163);
	auto __Local__165 = NewObject<UHorizontalBoxSlot>(__Local__158, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__165->Parent = __Local__158;
	auto __Local__166 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_26"), (EObjectFlags)0x00280008);
	__Local__166->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"2EF57E0A4FE1ECF862F872938B72911A\", \"Decrease displayed floor\")")	);
	__Local__166->Font.Size = 16;
	__Local__166->Slot = __Local__165;
	__Local__165->Content = __Local__166;
	__Local__159.Add(__Local__165);
	__Local__158->Slot = __Local__157;
	__Local__158->Visibility = ESlateVisibility::Visible;
	__Local__157->Content = __Local__158;
	__Local__76.Add(__Local__157);
	__Local__75->Slot = __Local__74;
	__Local__74->Content = __Local__75;
	__Local__44.Add(__Local__74);
	auto __Local__167 = NewObject<UVerticalBoxSlot>(__Local__43, TEXT("VerticalBoxSlot_29"), (EObjectFlags)0x00280008);
	__Local__167->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__167->Parent = __Local__43;
	auto __Local__168 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_27"), (EObjectFlags)0x00280008);
	__Local__168->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"294D26F34A105CFAFB84179D83593CA6\", \"Other Hotkeys\")")	);
	auto& __Local__169 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__168->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__169 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__168->Font.Size = 18;
	__Local__168->Slot = __Local__167;
	__Local__167->Content = __Local__168;
	__Local__44.Add(__Local__167);
	auto __Local__170 = NewObject<UVerticalBoxSlot>(__Local__43, TEXT("VerticalBoxSlot_33"), (EObjectFlags)0x00280008);
	__Local__170->Parent = __Local__43;
	auto __Local__171 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_3"), (EObjectFlags)0x00280008);
	auto& __Local__172 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__171), UPanelWidget::__PPO__Slots() )));
	__Local__172 = TArray<UPanelSlot*> ();
	__Local__172.Reserve(8);
	auto __Local__173 = NewObject<UVerticalBoxSlot>(__Local__171, TEXT("VerticalBoxSlot_13"), (EObjectFlags)0x00280008);
	__Local__173->Parent = __Local__171;
	auto __Local__174 = NewObject<UHorizontalBox>(__Local__1, TEXT("DamageInteraction"), (EObjectFlags)0x00280008);
	auto& __Local__175 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__174), UPanelWidget::__PPO__Slots() )));
	__Local__175 = TArray<UPanelSlot*> ();
	__Local__175.Reserve(3);
	auto __Local__176 = NewObject<UHorizontalBoxSlot>(__Local__174, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__176->Parent = __Local__174;
	auto __Local__177 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_42"), (EObjectFlags)0x00280008);
	__Local__177->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"01A9BA324669E35E7653A6B5CE5F028E\", \"[ LMB ]\")")	);
	auto& __Local__178 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__177->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__178 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__177->Font.Size = 16;
	__Local__177->Slot = __Local__176;
	__Local__176->Content = __Local__177;
	__Local__175.Add(__Local__176);
	auto __Local__179 = NewObject<UHorizontalBoxSlot>(__Local__174, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__179->Parent = __Local__174;
	auto __Local__180 = NewObject<USpacer>(__Local__1, TEXT("Spacer_21"), (EObjectFlags)0x00280008);
	__Local__180->Size = FVector2D(5.000000, 1.000000);
	__Local__180->Slot = __Local__179;
	__Local__179->Content = __Local__180;
	__Local__175.Add(__Local__179);
	auto __Local__181 = NewObject<UHorizontalBoxSlot>(__Local__174, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__181->Parent = __Local__174;
	auto __Local__182 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_43"), (EObjectFlags)0x00280008);
	__Local__182->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"FA9BA38444E5E5E83AC6BDA2BA3F89CC\", \"Damage trace\")")	);
	__Local__182->Font.Size = 16;
	__Local__182->Slot = __Local__181;
	__Local__181->Content = __Local__182;
	__Local__175.Add(__Local__181);
	__Local__174->Slot = __Local__173;
	__Local__174->Visibility = ESlateVisibility::Visible;
	__Local__173->Content = __Local__174;
	__Local__172.Add(__Local__173);
	auto __Local__183 = NewObject<UVerticalBoxSlot>(__Local__171, TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__183->Parent = __Local__171;
	auto __Local__184 = NewObject<UHorizontalBox>(__Local__1, TEXT("SelectHatchet"), (EObjectFlags)0x00280008);
	auto& __Local__185 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__184), UPanelWidget::__PPO__Slots() )));
	__Local__185 = TArray<UPanelSlot*> ();
	__Local__185.Reserve(3);
	auto __Local__186 = NewObject<UHorizontalBoxSlot>(__Local__184, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__186->Parent = __Local__184;
	auto __Local__187 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_36"), (EObjectFlags)0x00280008);
	__Local__187->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"FAF4F6D94AE106296EADEF9A58F594FE\", \"[ 1 ]\")")	);
	auto& __Local__188 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__187->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__188 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__187->Font.Size = 16;
	__Local__187->Slot = __Local__186;
	__Local__186->Content = __Local__187;
	__Local__185.Add(__Local__186);
	auto __Local__189 = NewObject<UHorizontalBoxSlot>(__Local__184, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__189->Parent = __Local__184;
	auto __Local__190 = NewObject<USpacer>(__Local__1, TEXT("Spacer_18"), (EObjectFlags)0x00280008);
	__Local__190->Size = FVector2D(5.000000, 1.000000);
	__Local__190->Slot = __Local__189;
	__Local__189->Content = __Local__190;
	__Local__185.Add(__Local__189);
	auto __Local__191 = NewObject<UHorizontalBoxSlot>(__Local__184, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__191->Parent = __Local__184;
	auto __Local__192 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_37"), (EObjectFlags)0x00280008);
	__Local__192->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"6021806747FBCE3AC369DFA0D27651DA\", \"Select hatchet\")")	);
	__Local__192->Font.Size = 16;
	__Local__192->Slot = __Local__191;
	__Local__191->Content = __Local__192;
	__Local__185.Add(__Local__191);
	__Local__184->Slot = __Local__183;
	__Local__184->Visibility = ESlateVisibility::Visible;
	__Local__183->Content = __Local__184;
	__Local__172.Add(__Local__183);
	auto __Local__193 = NewObject<UVerticalBoxSlot>(__Local__171, TEXT("VerticalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__193->Parent = __Local__171;
	auto __Local__194 = NewObject<UHorizontalBox>(__Local__1, TEXT("SelectPickaxe"), (EObjectFlags)0x00280008);
	auto& __Local__195 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__194), UPanelWidget::__PPO__Slots() )));
	__Local__195 = TArray<UPanelSlot*> ();
	__Local__195.Reserve(3);
	auto __Local__196 = NewObject<UHorizontalBoxSlot>(__Local__194, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__196->Parent = __Local__194;
	auto __Local__197 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_38"), (EObjectFlags)0x00280008);
	__Local__197->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"2245EAE0483D70C0FDA1F9B6BB2C3B72\", \"[ 2 ]\")")	);
	auto& __Local__198 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__197->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__198 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__197->Font.Size = 16;
	__Local__197->Slot = __Local__196;
	__Local__196->Content = __Local__197;
	__Local__195.Add(__Local__196);
	auto __Local__199 = NewObject<UHorizontalBoxSlot>(__Local__194, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__199->Parent = __Local__194;
	auto __Local__200 = NewObject<USpacer>(__Local__1, TEXT("Spacer_19"), (EObjectFlags)0x00280008);
	__Local__200->Size = FVector2D(5.000000, 1.000000);
	__Local__200->Slot = __Local__199;
	__Local__199->Content = __Local__200;
	__Local__195.Add(__Local__199);
	auto __Local__201 = NewObject<UHorizontalBoxSlot>(__Local__194, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__201->Parent = __Local__194;
	auto __Local__202 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_39"), (EObjectFlags)0x00280008);
	__Local__202->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"E0AD64E2447DD51676EF32ABBC41D3FC\", \"Select pickaxe\")")	);
	__Local__202->Font.Size = 16;
	__Local__202->Slot = __Local__201;
	__Local__201->Content = __Local__202;
	__Local__195.Add(__Local__201);
	__Local__194->Slot = __Local__193;
	__Local__194->Visibility = ESlateVisibility::Visible;
	__Local__193->Content = __Local__194;
	__Local__172.Add(__Local__193);
	auto __Local__203 = NewObject<UVerticalBoxSlot>(__Local__171, TEXT("VerticalBoxSlot_9"), (EObjectFlags)0x00280008);
	__Local__203->Parent = __Local__171;
	auto __Local__204 = NewObject<UHorizontalBox>(__Local__1, TEXT("SelectMallet"), (EObjectFlags)0x00280008);
	auto& __Local__205 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__204), UPanelWidget::__PPO__Slots() )));
	__Local__205 = TArray<UPanelSlot*> ();
	__Local__205.Reserve(3);
	auto __Local__206 = NewObject<UHorizontalBoxSlot>(__Local__204, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__206->Parent = __Local__204;
	auto __Local__207 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_40"), (EObjectFlags)0x00280008);
	__Local__207->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"7940C9614972AB0FDF9198B59C3A49EE\", \"[ 3 ]\")")	);
	auto& __Local__208 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__207->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__208 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__207->Font.Size = 16;
	__Local__207->Slot = __Local__206;
	__Local__206->Content = __Local__207;
	__Local__205.Add(__Local__206);
	auto __Local__209 = NewObject<UHorizontalBoxSlot>(__Local__204, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__209->Parent = __Local__204;
	auto __Local__210 = NewObject<USpacer>(__Local__1, TEXT("Spacer_20"), (EObjectFlags)0x00280008);
	__Local__210->Size = FVector2D(5.000000, 1.000000);
	__Local__210->Slot = __Local__209;
	__Local__209->Content = __Local__210;
	__Local__205.Add(__Local__209);
	auto __Local__211 = NewObject<UHorizontalBoxSlot>(__Local__204, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__211->Parent = __Local__204;
	auto __Local__212 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_41"), (EObjectFlags)0x00280008);
	__Local__212->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"0946358D4F1810C29DDB139D818BE247\", \"Select mallet\")")	);
	__Local__212->Font.Size = 16;
	__Local__212->Slot = __Local__211;
	__Local__211->Content = __Local__212;
	__Local__205.Add(__Local__211);
	__Local__204->Slot = __Local__203;
	__Local__204->Visibility = ESlateVisibility::Visible;
	__Local__203->Content = __Local__204;
	__Local__172.Add(__Local__203);
	auto __Local__213 = NewObject<UVerticalBoxSlot>(__Local__171, TEXT("VerticalBoxSlot_10"), (EObjectFlags)0x00280008);
	__Local__213->Parent = __Local__171;
	auto __Local__214 = NewObject<UHorizontalBox>(__Local__1, TEXT("MalletInteraction"), (EObjectFlags)0x00280008);
	auto& __Local__215 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__214), UPanelWidget::__PPO__Slots() )));
	__Local__215 = TArray<UPanelSlot*> ();
	__Local__215.Reserve(3);
	auto __Local__216 = NewObject<UHorizontalBoxSlot>(__Local__214, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__216->Parent = __Local__214;
	auto __Local__217 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_34"), (EObjectFlags)0x00280008);
	__Local__217->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"E0C4795E44A5D3D20C4D6B947BCF71D5\", \"[ RMB ]\")")	);
	auto& __Local__218 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__217->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__218 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__217->Font.Size = 16;
	__Local__217->Slot = __Local__216;
	__Local__216->Content = __Local__217;
	__Local__215.Add(__Local__216);
	auto __Local__219 = NewObject<UHorizontalBoxSlot>(__Local__214, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__219->Parent = __Local__214;
	auto __Local__220 = NewObject<USpacer>(__Local__1, TEXT("Spacer_17"), (EObjectFlags)0x00280008);
	__Local__220->Size = FVector2D(5.000000, 1.000000);
	__Local__220->Slot = __Local__219;
	__Local__219->Content = __Local__220;
	__Local__215.Add(__Local__219);
	auto __Local__221 = NewObject<UHorizontalBoxSlot>(__Local__214, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__221->Parent = __Local__214;
	auto __Local__222 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_35"), (EObjectFlags)0x00280008);
	__Local__222->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"636A40EF482B3468C9DC959EB7F33DE6\", \"Mallet interaction\")")	);
	__Local__222->Font.Size = 16;
	__Local__222->Slot = __Local__221;
	__Local__221->Content = __Local__222;
	__Local__215.Add(__Local__221);
	__Local__214->Slot = __Local__213;
	__Local__214->Visibility = ESlateVisibility::Visible;
	__Local__213->Content = __Local__214;
	__Local__172.Add(__Local__213);
	auto __Local__223 = NewObject<UVerticalBoxSlot>(__Local__171, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__223->Parent = __Local__171;
	auto __Local__224 = NewObject<UHorizontalBox>(__Local__1, TEXT("SaveGame"), (EObjectFlags)0x00280008);
	auto& __Local__225 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__224), UPanelWidget::__PPO__Slots() )));
	__Local__225 = TArray<UPanelSlot*> ();
	__Local__225.Reserve(3);
	auto __Local__226 = NewObject<UHorizontalBoxSlot>(__Local__224, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__226->Parent = __Local__224;
	auto __Local__227 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_28"), (EObjectFlags)0x00280008);
	__Local__227->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"BE1BE09B4F6CA2CF6C0F3984C6A796F0\", \"[ Num1 ]\")")	);
	auto& __Local__228 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__227->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__228 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__227->Font.Size = 16;
	__Local__227->Slot = __Local__226;
	__Local__226->Content = __Local__227;
	__Local__225.Add(__Local__226);
	auto __Local__229 = NewObject<UHorizontalBoxSlot>(__Local__224, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__229->Parent = __Local__224;
	auto __Local__230 = NewObject<USpacer>(__Local__1, TEXT("Spacer_14"), (EObjectFlags)0x00280008);
	__Local__230->Size = FVector2D(5.000000, 1.000000);
	__Local__230->Slot = __Local__229;
	__Local__229->Content = __Local__230;
	__Local__225.Add(__Local__229);
	auto __Local__231 = NewObject<UHorizontalBoxSlot>(__Local__224, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__231->Parent = __Local__224;
	auto __Local__232 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_29"), (EObjectFlags)0x00280008);
	__Local__232->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"B3582EB14979E0DB930D74B5057CC26D\", \"Save building objects\")")	);
	__Local__232->Font.Size = 16;
	__Local__232->Slot = __Local__231;
	__Local__231->Content = __Local__232;
	__Local__225.Add(__Local__231);
	__Local__224->Slot = __Local__223;
	__Local__224->Visibility = ESlateVisibility::Visible;
	__Local__223->Content = __Local__224;
	__Local__172.Add(__Local__223);
	auto __Local__233 = NewObject<UVerticalBoxSlot>(__Local__171, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__233->Parent = __Local__171;
	auto __Local__234 = NewObject<UHorizontalBox>(__Local__1, TEXT("LoadGame"), (EObjectFlags)0x00280008);
	auto& __Local__235 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__234), UPanelWidget::__PPO__Slots() )));
	__Local__235 = TArray<UPanelSlot*> ();
	__Local__235.Reserve(3);
	auto __Local__236 = NewObject<UHorizontalBoxSlot>(__Local__234, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__236->Parent = __Local__234;
	auto __Local__237 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_30"), (EObjectFlags)0x00280008);
	__Local__237->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"F57ED881470C592F15F230AB1AC2FCAE\", \"[ Num3 ]\")")	);
	auto& __Local__238 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__237->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__238 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__237->Font.Size = 16;
	__Local__237->Slot = __Local__236;
	__Local__236->Content = __Local__237;
	__Local__235.Add(__Local__236);
	auto __Local__239 = NewObject<UHorizontalBoxSlot>(__Local__234, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__239->Parent = __Local__234;
	auto __Local__240 = NewObject<USpacer>(__Local__1, TEXT("Spacer_15"), (EObjectFlags)0x00280008);
	__Local__240->Size = FVector2D(5.000000, 1.000000);
	__Local__240->Slot = __Local__239;
	__Local__239->Content = __Local__240;
	__Local__235.Add(__Local__239);
	auto __Local__241 = NewObject<UHorizontalBoxSlot>(__Local__234, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__241->Parent = __Local__234;
	auto __Local__242 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_31"), (EObjectFlags)0x00280008);
	__Local__242->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"3D8B0F0C484605FC3A5DA78E18036083\", \"Load building objects\")")	);
	__Local__242->Font.Size = 16;
	__Local__242->Slot = __Local__241;
	__Local__241->Content = __Local__242;
	__Local__235.Add(__Local__241);
	__Local__234->Slot = __Local__233;
	__Local__234->Visibility = ESlateVisibility::Visible;
	__Local__233->Content = __Local__234;
	__Local__172.Add(__Local__233);
	auto __Local__243 = NewObject<UVerticalBoxSlot>(__Local__171, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__243->Parent = __Local__171;
	auto __Local__244 = NewObject<UHorizontalBox>(__Local__1, TEXT("DebugMode"), (EObjectFlags)0x00280008);
	auto& __Local__245 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__244), UPanelWidget::__PPO__Slots() )));
	__Local__245 = TArray<UPanelSlot*> ();
	__Local__245.Reserve(3);
	auto __Local__246 = NewObject<UHorizontalBoxSlot>(__Local__244, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__246->Parent = __Local__244;
	auto __Local__247 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_4"), (EObjectFlags)0x00280008);
	__Local__247->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"29391B764440D7D507B92799BF35FE81\", \"[ Z ]\")")	);
	auto& __Local__248 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__247->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__248 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__247->Font.Size = 16;
	__Local__247->Slot = __Local__246;
	__Local__246->Content = __Local__247;
	__Local__245.Add(__Local__246);
	auto __Local__249 = NewObject<UHorizontalBoxSlot>(__Local__244, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__249->Parent = __Local__244;
	auto __Local__250 = NewObject<USpacer>(__Local__1, TEXT("Spacer_3"), (EObjectFlags)0x00280008);
	__Local__250->Size = FVector2D(5.000000, 1.000000);
	__Local__250->Slot = __Local__249;
	__Local__249->Content = __Local__250;
	__Local__245.Add(__Local__249);
	auto __Local__251 = NewObject<UHorizontalBoxSlot>(__Local__244, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__251->Parent = __Local__244;
	auto __Local__252 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_217"), (EObjectFlags)0x00280008);
	__Local__252->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"FE98F18443A28CEDD2AA2484CD6B8AEA\", \"Switch debug mode\")")	);
	__Local__252->Font.Size = 16;
	__Local__252->Slot = __Local__251;
	__Local__251->Content = __Local__252;
	__Local__245.Add(__Local__251);
	__Local__244->Slot = __Local__243;
	__Local__244->Visibility = ESlateVisibility::Visible;
	__Local__243->Content = __Local__244;
	__Local__172.Add(__Local__243);
	__Local__171->Slot = __Local__170;
	__Local__170->Content = __Local__171;
	__Local__44.Add(__Local__170);
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__7.Add(__Local__42);
	auto __Local__253 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_13"), (EObjectFlags)0x00280008);
	__Local__253->LayoutData.Offsets.Left = -500.000000f;
	__Local__253->LayoutData.Offsets.Top = 10.000000f;
	__Local__253->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__253->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__253->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__253->bAutoSize = true;
	__Local__253->Parent = __Local__6;
	auto __Local__254 = NewObject<UUI_Mei_ResourceValue_C__pf4215541020>(__Local__1, TEXT("WoodValue"), (EObjectFlags)0x00280008);
	__Local__254->bpv__Font__pf.Size = 18;
	__Local__254->Slot = __Local__253;
	__Local__253->Content = __Local__254;
	__Local__7.Add(__Local__253);
	auto __Local__255 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__255->LayoutData.Offsets.Left = -350.000000f;
	__Local__255->LayoutData.Offsets.Top = 10.000000f;
	__Local__255->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__255->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__255->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__255->bAutoSize = true;
	__Local__255->Parent = __Local__6;
	auto __Local__256 = NewObject<UUI_Mei_ResourceValue_C__pf4215541020>(__Local__1, TEXT("StoneValue"), (EObjectFlags)0x00280008);
	__Local__256->bpv__Font__pf.Size = 18;
	__Local__256->bpv__Resource__pf.bpv__ResourceType_6_D839516245388D23CCB06795553F0FCF__pf = E__E_Mei_ResourceType__pf::NewEnumerator1;
	__Local__256->Slot = __Local__255;
	__Local__255->Content = __Local__256;
	__Local__7.Add(__Local__255);
	auto __Local__257 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_5"), (EObjectFlags)0x00280008);
	__Local__257->LayoutData.Offsets.Left = -200.000000f;
	__Local__257->LayoutData.Offsets.Top = 10.000000f;
	__Local__257->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__257->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__257->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__257->bAutoSize = true;
	__Local__257->Parent = __Local__6;
	auto __Local__258 = NewObject<UUI_Mei_ResourceValue_C__pf4215541020>(__Local__1, TEXT("Metalvalue"), (EObjectFlags)0x00280008);
	__Local__258->bpv__Font__pf.Size = 18;
	__Local__258->bpv__Resource__pf.bpv__ResourceType_6_D839516245388D23CCB06795553F0FCF__pf = E__E_Mei_ResourceType__pf::NewEnumerator2;
	__Local__258->Slot = __Local__257;
	__Local__257->Content = __Local__258;
	__Local__7.Add(__Local__257);
	auto __Local__259 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_4"), (EObjectFlags)0x00280008);
	__Local__259->LayoutData.Offsets.Left = -50.000000f;
	__Local__259->LayoutData.Offsets.Top = 50.000000f;
	__Local__259->LayoutData.Offsets.Right = 300.000000f;
	__Local__259->LayoutData.Offsets.Bottom = 70.000000f;
	__Local__259->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__259->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__259->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__259->Parent = __Local__6;
	auto __Local__260 = NewObject<UBorder>(__Local__1, TEXT("Border_0"), (EObjectFlags)0x00280008);
	__Local__260->Padding.Left = 0.000000f;
	__Local__260->Padding.Top = 0.000000f;
	__Local__260->Padding.Right = 0.000000f;
	__Local__260->Padding.Bottom = 0.000000f;
	__Local__260->BrushColor = FLinearColor(0.062228, 0.067708, 0.019366, 1.000000);
	auto& __Local__261 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__260), UPanelWidget::__PPO__Slots() )));
	__Local__261 = TArray<UPanelSlot*> ();
	__Local__261.Reserve(1);
	auto __Local__262 = NewObject<UBorderSlot>(__Local__260, TEXT("BorderSlot_1"), (EObjectFlags)0x00280008);
	auto& __Local__263 = (*(AccessPrivateProperty<FMargin >((__Local__262), UBorderSlot::__PPO__Padding() )));
	__Local__263.Left = 0.000000f;
	__Local__263.Top = 0.000000f;
	__Local__263.Right = 0.000000f;
	__Local__263.Bottom = 0.000000f;
	__Local__262->Parent = __Local__260;
	auto __Local__264 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_0"), (EObjectFlags)0x00280008);
	auto& __Local__265 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__264), UPanelWidget::__PPO__Slots() )));
	__Local__265 = TArray<UPanelSlot*> ();
	__Local__265.Reserve(2);
	auto __Local__266 = NewObject<UVerticalBoxSlot>(__Local__264, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__266->Padding.Left = 4.000000f;
	__Local__266->Padding.Top = 2.000000f;
	__Local__266->Padding.Right = 4.000000f;
	__Local__266->Padding.Bottom = 2.000000f;
	__Local__266->Parent = __Local__264;
	auto __Local__267 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__267->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"8200BE634E04EF2DC2188C9B61129B4B\", \"EBS\")")	);
	auto& __Local__268 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__267->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__268 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	auto& __Local__269 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__267), UTextLayoutWidget::__PPO__Justification() )));
	__Local__269 = ETextJustify::Type::Center;
	__Local__267->Slot = __Local__266;
	__Local__266->Content = __Local__267;
	__Local__265.Add(__Local__266);
	auto __Local__270 = NewObject<UVerticalBoxSlot>(__Local__264, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__270->Parent = __Local__264;
	auto __Local__271 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_3"), (EObjectFlags)0x00280008);
	__Local__271->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"40A734DB4FF0D168A298F88D7A8CB7A9\", \"version 10.0\")")	);
	__Local__271->Font.Size = 16;
	auto& __Local__272 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__271), UTextLayoutWidget::__PPO__Justification() )));
	__Local__272 = ETextJustify::Type::Center;
	__Local__271->Slot = __Local__270;
	__Local__270->Content = __Local__271;
	__Local__265.Add(__Local__270);
	__Local__264->Slot = __Local__262;
	__Local__262->Content = __Local__264;
	__Local__261.Add(__Local__262);
	__Local__260->Slot = __Local__259;
	__Local__260->RenderTransform.Angle = 45.000000f;
	__Local__259->Content = __Local__260;
	__Local__7.Add(__Local__259);
	auto __Local__273 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__273->LayoutData.Offsets.Top = -20.000000f;
	__Local__273->LayoutData.Anchors.Minimum = FVector2D(0.500000, 1.000000);
	__Local__273->LayoutData.Anchors.Maximum = FVector2D(0.500000, 1.000000);
	__Local__273->LayoutData.Alignment = FVector2D(0.500000, 1.000000);
	__Local__273->bAutoSize = true;
	__Local__273->Parent = __Local__6;
	auto __Local__274 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_0"), (EObjectFlags)0x00280008);
	auto& __Local__275 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__274), UPanelWidget::__PPO__Slots() )));
	__Local__275 = TArray<UPanelSlot*> ();
	__Local__275.Reserve(3);
	auto __Local__276 = NewObject<UHorizontalBoxSlot>(__Local__274, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__276->Parent = __Local__274;
	auto __Local__277 = NewObject<UUI_Mei_InteractionSlot_C__pf4215541020>(__Local__1, TEXT("InteractionSlotHachet"), (EObjectFlags)0x00280008);
	__Local__277->Slot = __Local__276;
	__Local__276->Content = __Local__277;
	__Local__275.Add(__Local__276);
	auto __Local__278 = NewObject<UHorizontalBoxSlot>(__Local__274, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__278->Parent = __Local__274;
	auto __Local__279 = NewObject<UUI_Mei_InteractionSlot_C__pf4215541020>(__Local__1, TEXT("InteractionSlotPickaxe"), (EObjectFlags)0x00280008);
	__Local__279->bpv__SlotText__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"99A13E2044F1CA54BD94F69B9D3D1BA8\", \"2\")")	);
	__Local__279->Slot = __Local__278;
	__Local__278->Content = __Local__279;
	__Local__275.Add(__Local__278);
	auto __Local__280 = NewObject<UHorizontalBoxSlot>(__Local__274, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__280->Parent = __Local__274;
	auto __Local__281 = NewObject<UUI_Mei_InteractionSlot_C__pf4215541020>(__Local__1, TEXT("InteractionslotMallet"), (EObjectFlags)0x00280008);
	__Local__281->bpv__SlotText__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"E8E0585646576B7EC3C85DB7E55DE5EB\", \"3\")")	);
	__Local__281->Slot = __Local__280;
	__Local__280->Content = __Local__281;
	__Local__275.Add(__Local__280);
	__Local__274->Slot = __Local__273;
	__Local__273->Content = __Local__274;
	__Local__7.Add(__Local__273);
	auto __Local__282 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_10"), (EObjectFlags)0x00280008);
	__Local__282->LayoutData.Offsets.Right = 0.000000f;
	__Local__282->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__282->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__282->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__282->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__282->bAutoSize = true;
	__Local__282->Parent = __Local__6;
	auto __Local__283 = NewObject<UImage>(__Local__1, TEXT("CrosshairImage"), (EObjectFlags)0x00280008);
	__Local__283->Brush.ImageSize = FVector2D(16.000000, 16.000000);
	__Local__283->Slot = __Local__282;
	__Local__283->bIsVariable = false;
	__Local__282->Content = __Local__283;
	__Local__7.Add(__Local__282);
	__Local__1->RootWidget = __Local__6;
	auto __Local__284 = NewObject<UMovieScene>(__Local__2, TEXT("ShowErrorMessageAnimation"), (EObjectFlags)0x00280008);
	auto& __Local__285 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__284), UMovieScene::__PPO__Possessables() )));
	__Local__285 = TArray<FMovieScenePossessable> ();
	__Local__285.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__285.GetData(), 1);
	auto& __Local__286 = __Local__285[0];
	auto& __Local__287 = (*(AccessPrivateProperty<FGuid >(&(__Local__286), FMovieScenePossessable::__PPO__Guid() )));
	__Local__287 = FGuid(0x67C0BE7A, 0x4986092B, 0x27925384, 0x8DD60ADD);
	auto& __Local__288 = (*(AccessPrivateProperty<FString >(&(__Local__286), FMovieScenePossessable::__PPO__Name() )));
	__Local__288 = FString(TEXT("ErrorMessageText"));
	auto& __Local__289 = (*(AccessPrivateProperty<UClass* >(&(__Local__286), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__289 = UTextBlock::StaticClass();
	auto& __Local__290 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__284), UMovieScene::__PPO__ObjectBindings() )));
	__Local__290 = TArray<FMovieSceneBinding> ();
	__Local__290.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__290.GetData(), 1);
	auto& __Local__291 = __Local__290[0];
	auto& __Local__292 = (*(AccessPrivateProperty<FGuid >(&(__Local__291), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__292 = FGuid(0x67C0BE7A, 0x4986092B, 0x27925384, 0x8DD60ADD);
	auto& __Local__293 = (*(AccessPrivateProperty<FString >(&(__Local__291), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__293 = FString(TEXT("ErrorMessageText"));
	auto& __Local__294 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__291), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__294 = TArray<UMovieSceneTrack*> ();
	__Local__294.Reserve(3);
	auto __Local__295 = NewObject<UMovieSceneByteTrack>(__Local__284, TEXT("MovieSceneByteTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__296 = (*(AccessPrivateProperty<UEnum* >((__Local__295), UMovieSceneByteTrack::__PPO__Enum() )));
	__Local__296 = CastChecked<UEnum>(CastChecked<UDynamicClass>(UUI_Mei_HUD_C__pf4215541020::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__297 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__295), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__297.PropertyName = FName(TEXT("Visibility"));
	__Local__297.PropertyPath = FName(TEXT("Visibility"));
	__Local__297.bCanUseClassLookup = true;
	auto& __Local__298 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__295), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__298 = TArray<UMovieSceneSection*> ();
	__Local__298.Reserve(1);
	auto __Local__299 = NewObject<UMovieSceneByteSection>(__Local__295, TEXT("MovieSceneByteSection_0"), (EObjectFlags)0x00280008);
	auto __Local__300 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__299->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__301 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__299->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__300)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__301)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__302 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__299->ByteCurve), FMovieSceneByteChannel::__PPO__Times() )));
	__Local__302 = TArray<FFrameNumber> ();
	__Local__302.Reserve(2);
	__Local__302.Add(FFrameNumber{});
	__Local__302.Add(FFrameNumber{});
	__Local__302[1].Value = 120000;
	auto& __Local__303 = (*(AccessPrivateProperty<TArray<uint8> >(&(__Local__299->ByteCurve), FMovieSceneByteChannel::__PPO__Values() )));
	__Local__303 = TArray<uint8> ();
	__Local__303.Reserve(2);
	__Local__303.Add(0);
	__Local__303.Add(2);
	auto& __Local__304 = (*(AccessPrivateProperty<UEnum* >(&(__Local__299->ByteCurve), FMovieSceneByteChannel::__PPO__Enum() )));
	__Local__304 = CastChecked<UEnum>(CastChecked<UDynamicClass>(UUI_Mei_HUD_C__pf4215541020::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__299->Easing.EaseIn = __Local__300;
	__Local__299->Easing.EaseOut = __Local__301;
	__Local__299->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(120000)));
	auto& __Local__305 = (*(AccessPrivateProperty<FGuid >((__Local__299), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__305 = FGuid(0x6079CD0F, 0x44798D63, 0x3F2000B0, 0xAAD4BC91);
	__Local__298.Add(__Local__299);
	auto& __Local__306 = (*(AccessPrivateProperty<FGuid >((__Local__295), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__306 = FGuid(0xE7EE5B3C, 0x49B705D1, 0xDB415299, 0x099A1751);
	auto& __Local__307 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__295), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__307.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__307.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__307.Entries.GetData(), 1);
	auto& __Local__308 = __Local__307.Entries[0];
	__Local__308.Section = __Local__299;
	static TWeakFieldPtr<FProperty> __Local__310{};
	const FProperty* __Local__309 = __Local__310.Get();
	if (nullptr == __Local__309)
	{
		__Local__309 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__309);
		__Local__310 = __Local__309;
	}
	auto& __Local__311 = (*(__Local__309->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__308.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__313{};
	const FProperty* __Local__312 = __Local__313.Get();
	if (nullptr == __Local__312)
	{
		__Local__312 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__312);
		__Local__313 = __Local__312;
	}
	auto& __Local__314 = (*(__Local__312->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__311), 0)));
	__Local__314 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__316{};
	const FProperty* __Local__315 = __Local__316.Get();
	if (nullptr == __Local__315)
	{
		__Local__315 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__315);
		__Local__316 = __Local__315;
	}
	auto& __Local__317 = (*(__Local__315->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__308.Range), 0)));
	auto& __Local__318 = (*(__Local__312->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__317), 0)));
	__Local__318 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__320{};
	const FProperty* __Local__319 = __Local__320.Get();
	if (nullptr == __Local__319)
	{
		__Local__319 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__319);
		__Local__320 = __Local__319;
	}
	auto& __Local__321 = (*(__Local__319->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__317), 0)));
	__Local__321.Value = 120000;
	__Local__308.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__322 = (*(AccessPrivateProperty<FGuid >((__Local__295), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__322 = FGuid(0xE7EE5B3C, 0x49B705D1, 0xDB415299, 0x099A1751);
	__Local__294.Add(__Local__295);
	auto __Local__323 = NewObject<UMovieSceneColorTrack>(__Local__284, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__324 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__323), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__324.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__324.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__324.bCanUseClassLookup = true;
	auto& __Local__325 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__323), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__325 = TArray<UMovieSceneSection*> ();
	__Local__325.Reserve(1);
	auto __Local__326 = NewObject<UMovieSceneColorSection>(__Local__323, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__327 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__326->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__328 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__326->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__327)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__328)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__329 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__326), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__330 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__329), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__330 = TArray<FFrameNumber> ();
	__Local__330.Reserve(1);
	__Local__330.Add(FFrameNumber{});
	auto& __Local__331 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__329), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__331 = TArray<FMovieSceneFloatValue> ();
	__Local__331.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__331.GetData(), 1);
	auto& __Local__332 = __Local__331[0];
	__Local__332.Value = 1.000000f;
	auto& __Local__333 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__326), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__334 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__333), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__334 = TArray<FFrameNumber> ();
	__Local__334.Reserve(1);
	__Local__334.Add(FFrameNumber{});
	auto& __Local__335 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__333), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__335 = TArray<FMovieSceneFloatValue> ();
	__Local__335.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__335.GetData(), 1);
	auto& __Local__336 = __Local__335[0];
	auto& __Local__337 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__326), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__338 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__337), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__338 = TArray<FFrameNumber> ();
	__Local__338.Reserve(1);
	__Local__338.Add(FFrameNumber{});
	auto& __Local__339 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__337), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__339 = TArray<FMovieSceneFloatValue> ();
	__Local__339.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__339.GetData(), 1);
	auto& __Local__340 = __Local__339[0];
	auto& __Local__341 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__326), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__342 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__341), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__342 = TArray<FFrameNumber> ();
	__Local__342.Reserve(4);
	__Local__342.Add(FFrameNumber{});
	__Local__342.Add(FFrameNumber{});
	__Local__342[1].Value = 15000;
	__Local__342.Add(FFrameNumber{});
	__Local__342[2].Value = 60000;
	__Local__342.Add(FFrameNumber{});
	__Local__342[3].Value = 120000;
	auto& __Local__343 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__341), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__343 = TArray<FMovieSceneFloatValue> ();
	__Local__343.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__343.GetData(), 4);
	auto& __Local__344 = __Local__343[0];
	__Local__344.Tangent.LeaveTangent = 0.000067f;
	__Local__344.InterpMode = ERichCurveInterpMode::RCIM_Linear;
	auto& __Local__345 = __Local__343[1];
	__Local__345.Value = 1.000000f;
	__Local__345.InterpMode = ERichCurveInterpMode::RCIM_Constant;
	auto& __Local__346 = __Local__343[2];
	__Local__346.Value = 1.000000f;
	__Local__346.Tangent.LeaveTangent = -0.000017f;
	__Local__346.InterpMode = ERichCurveInterpMode::RCIM_Linear;
	auto& __Local__347 = __Local__343[3];
	__Local__347.Tangent.ArriveTangent = -0.000017f;
	__Local__347.TangentMode = ERichCurveTangentMode::RCTM_Break;
	__Local__326->Easing.EaseIn = __Local__327;
	__Local__326->Easing.EaseOut = __Local__328;
	__Local__326->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(120000)));
	auto& __Local__348 = (*(AccessPrivateProperty<FGuid >((__Local__326), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__348 = FGuid(0xF1617F97, 0x404E4D19, 0xD0E44981, 0x580278BD);
	__Local__325.Add(__Local__326);
	auto& __Local__349 = (*(AccessPrivateProperty<FGuid >((__Local__323), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__349 = FGuid(0x7515D75C, 0x4A23D5B0, 0xEED54D85, 0x38911D25);
	auto& __Local__350 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__323), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__350.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__350.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__350.Entries.GetData(), 1);
	auto& __Local__351 = __Local__350.Entries[0];
	__Local__351.Section = __Local__326;
	auto& __Local__352 = (*(__Local__309->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__351.Range), 0)));
	auto& __Local__353 = (*(__Local__312->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__352), 0)));
	__Local__353 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__354 = (*(__Local__315->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__351.Range), 0)));
	auto& __Local__355 = (*(__Local__312->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__354), 0)));
	__Local__355 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__356 = (*(__Local__319->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__354), 0)));
	__Local__356.Value = 120000;
	__Local__351.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__357 = (*(AccessPrivateProperty<FGuid >((__Local__323), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__357 = FGuid(0x7515D75C, 0x4A23D5B0, 0xEED54D85, 0x38911D25);
	__Local__294.Add(__Local__323);
	auto __Local__358 = NewObject<UMovieScene2DTransformTrack>(__Local__284, TEXT("MovieScene2DTransformTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__359 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__358), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__359.PropertyName = FName(TEXT("RenderTransform"));
	__Local__359.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__359.bCanUseClassLookup = true;
	auto& __Local__360 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__358), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__360 = TArray<UMovieSceneSection*> ();
	__Local__360.Reserve(1);
	auto __Local__361 = NewObject<UMovieScene2DTransformSection>(__Local__358, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__362 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__361->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__363 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__361->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__362)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__363)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__364 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__361->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__364 = TArray<FFrameNumber> ();
	__Local__364.Reserve(1);
	__Local__364.Add(FFrameNumber{});
	auto& __Local__365 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__361->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__365 = TArray<FMovieSceneFloatValue> ();
	__Local__365.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__365.GetData(), 1);
	auto& __Local__366 = __Local__365[0];
	auto& __Local__367 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__361->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__367 = TArray<FFrameNumber> ();
	__Local__367.Reserve(1);
	__Local__367.Add(FFrameNumber{});
	auto& __Local__368 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__361->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__368 = TArray<FMovieSceneFloatValue> ();
	__Local__368.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__368.GetData(), 1);
	auto& __Local__369 = __Local__368[0];
	auto& __Local__370 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__361->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__370 = TArray<FFrameNumber> ();
	__Local__370.Reserve(1);
	__Local__370.Add(FFrameNumber{});
	auto& __Local__371 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__361->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__371 = TArray<FMovieSceneFloatValue> ();
	__Local__371.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__371.GetData(), 1);
	auto& __Local__372 = __Local__371[0];
	auto& __Local__373 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__361->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__373 = TArray<FFrameNumber> ();
	__Local__373.Reserve(3);
	__Local__373.Add(FFrameNumber{});
	__Local__373.Add(FFrameNumber{});
	__Local__373[1].Value = 15000;
	__Local__373.Add(FFrameNumber{});
	__Local__373[2].Value = 60000;
	auto& __Local__374 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__361->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__374 = TArray<FMovieSceneFloatValue> ();
	__Local__374.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__374.GetData(), 3);
	auto& __Local__375 = __Local__374[0];
	__Local__375.Tangent.LeaveTangent = 0.000073f;
	__Local__375.InterpMode = ERichCurveInterpMode::RCIM_Linear;
	auto& __Local__376 = __Local__374[1];
	__Local__376.Value = 1.100000f;
	__Local__376.Tangent.ArriveTangent = 0.000073f;
	__Local__376.Tangent.LeaveTangent = 0.000017f;
	__Local__376.TangentMode = ERichCurveTangentMode::RCTM_Break;
	auto& __Local__377 = __Local__374[2];
	__Local__377.Value = 1.000000f;
	__Local__377.InterpMode = ERichCurveInterpMode::RCIM_Constant;
	auto& __Local__378 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__361->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__378 = TArray<FFrameNumber> ();
	__Local__378.Reserve(3);
	__Local__378.Add(FFrameNumber{});
	__Local__378.Add(FFrameNumber{});
	__Local__378[1].Value = 15000;
	__Local__378.Add(FFrameNumber{});
	__Local__378[2].Value = 60000;
	auto& __Local__379 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__361->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__379 = TArray<FMovieSceneFloatValue> ();
	__Local__379.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__379.GetData(), 3);
	auto& __Local__380 = __Local__379[0];
	__Local__380.Tangent.LeaveTangent = 0.000073f;
	__Local__380.InterpMode = ERichCurveInterpMode::RCIM_Linear;
	auto& __Local__381 = __Local__379[1];
	__Local__381.Value = 1.100000f;
	__Local__381.Tangent.ArriveTangent = 0.000073f;
	__Local__381.Tangent.LeaveTangent = 0.000017f;
	__Local__381.TangentMode = ERichCurveTangentMode::RCTM_Break;
	auto& __Local__382 = __Local__379[2];
	__Local__382.Value = 1.000000f;
	__Local__382.InterpMode = ERichCurveInterpMode::RCIM_Constant;
	auto& __Local__383 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__361->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__383 = TArray<FFrameNumber> ();
	__Local__383.Reserve(1);
	__Local__383.Add(FFrameNumber{});
	auto& __Local__384 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__361->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__384 = TArray<FMovieSceneFloatValue> ();
	__Local__384.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__384.GetData(), 1);
	auto& __Local__385 = __Local__384[0];
	auto& __Local__386 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__361->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__386 = TArray<FFrameNumber> ();
	__Local__386.Reserve(1);
	__Local__386.Add(FFrameNumber{});
	auto& __Local__387 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__361->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__387 = TArray<FMovieSceneFloatValue> ();
	__Local__387.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__387.GetData(), 1);
	auto& __Local__388 = __Local__387[0];
	__Local__361->Easing.EaseIn = __Local__362;
	__Local__361->Easing.EaseOut = __Local__363;
	__Local__361->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(60000)));
	auto& __Local__389 = (*(AccessPrivateProperty<FGuid >((__Local__361), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__389 = FGuid(0x13A2BCAA, 0x422E223F, 0xA0F0B1B4, 0xD0E35A8A);
	__Local__360.Add(__Local__361);
	auto& __Local__390 = (*(AccessPrivateProperty<FGuid >((__Local__358), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__390 = FGuid(0x05D97214, 0x49924976, 0xF7258DBC, 0x3B11C603);
	auto& __Local__391 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__358), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__391.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__391.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__391.Entries.GetData(), 1);
	auto& __Local__392 = __Local__391.Entries[0];
	__Local__392.Section = __Local__361;
	auto& __Local__393 = (*(__Local__309->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__392.Range), 0)));
	auto& __Local__394 = (*(__Local__312->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__393), 0)));
	__Local__394 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__395 = (*(__Local__315->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__392.Range), 0)));
	auto& __Local__396 = (*(__Local__312->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__395), 0)));
	__Local__396 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__397 = (*(__Local__319->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__395), 0)));
	__Local__397.Value = 60000;
	__Local__392.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__398 = (*(AccessPrivateProperty<FGuid >((__Local__358), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__398 = FGuid(0x05D97214, 0x49924976, 0xF7258DBC, 0x3B11C603);
	__Local__294.Add(__Local__358);
	auto& __Local__399 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__284), UMovieScene::__PPO__PlaybackRange() )));
	__Local__399 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(120001)));
	auto& __Local__400 = (*(AccessPrivateProperty<FFrameRate >((__Local__284), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__402{};
	const FProperty* __Local__401 = __Local__402.Get();
	if (nullptr == __Local__401)
	{
		__Local__401 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__401);
		__Local__402 = __Local__401;
	}
	auto& __Local__403 = (*(__Local__401->ContainerPtrToValuePtr<int32 >(&(__Local__400), 0)));
	__Local__403 = 20;
	auto& __Local__404 = (*(AccessPrivateProperty<FGuid >((__Local__284), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__404 = FGuid(0xB818D385, 0x4F819D92, 0x87A683BB, 0x2AFD24D0);
	__Local__2->MovieScene = __Local__284;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 1);
	auto& __Local__405 = __Local__2->AnimationBindings[0];
	__Local__405.WidgetName = FName(TEXT("ErrorMessageText"));
	__Local__405.AnimationGuid = FGuid(0x67C0BE7A, 0x4986092B, 0x27925384, 0x8DD60ADD);
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__406 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__406 = FGuid(0x90897B60, 0x4C1CFBAE, 0x7C980AB9, 0x83AE2636);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
	auto __Local__407 = NewObject<UMovieScene>(__Local__3, TEXT("FadeBorderAnimation"), (EObjectFlags)0x00280008);
	auto& __Local__408 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__407), UMovieScene::__PPO__Possessables() )));
	__Local__408 = TArray<FMovieScenePossessable> ();
	__Local__408.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__408.GetData(), 1);
	auto& __Local__409 = __Local__408[0];
	auto& __Local__410 = (*(AccessPrivateProperty<FGuid >(&(__Local__409), FMovieScenePossessable::__PPO__Guid() )));
	__Local__410 = FGuid(0x1ADE3E18, 0x47E0258A, 0x5EF3438A, 0x6755F77B);
	auto& __Local__411 = (*(AccessPrivateProperty<FString >(&(__Local__409), FMovieScenePossessable::__PPO__Name() )));
	__Local__411 = FString(TEXT("FadeBorder"));
	auto& __Local__412 = (*(AccessPrivateProperty<UClass* >(&(__Local__409), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__412 = UBorder::StaticClass();
	auto& __Local__413 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__407), UMovieScene::__PPO__ObjectBindings() )));
	__Local__413 = TArray<FMovieSceneBinding> ();
	__Local__413.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__413.GetData(), 1);
	auto& __Local__414 = __Local__413[0];
	auto& __Local__415 = (*(AccessPrivateProperty<FGuid >(&(__Local__414), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__415 = FGuid(0x1ADE3E18, 0x47E0258A, 0x5EF3438A, 0x6755F77B);
	auto& __Local__416 = (*(AccessPrivateProperty<FString >(&(__Local__414), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__416 = FString(TEXT("FadeBorder"));
	auto& __Local__417 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__414), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__417 = TArray<UMovieSceneTrack*> ();
	__Local__417.Reserve(1);
	auto __Local__418 = NewObject<UMovieSceneColorTrack>(__Local__407, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__419 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__418), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__419.PropertyName = FName(TEXT("BrushColor"));
	__Local__419.PropertyPath = FName(TEXT("BrushColor"));
	__Local__419.bCanUseClassLookup = true;
	auto& __Local__420 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__418), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__420 = TArray<UMovieSceneSection*> ();
	__Local__420.Reserve(1);
	auto __Local__421 = NewObject<UMovieSceneColorSection>(__Local__418, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__422 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__421->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__423 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__421->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__422)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__423)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__424 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__421), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__425 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__424), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__425 = TArray<FFrameNumber> ();
	__Local__425.Reserve(1);
	__Local__425.Add(FFrameNumber{});
	auto& __Local__426 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__424), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__426 = TArray<FMovieSceneFloatValue> ();
	__Local__426.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__426.GetData(), 1);
	auto& __Local__427 = __Local__426[0];
	auto& __Local__428 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__421), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__429 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__428), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__429 = TArray<FFrameNumber> ();
	__Local__429.Reserve(1);
	__Local__429.Add(FFrameNumber{});
	auto& __Local__430 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__428), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__430 = TArray<FMovieSceneFloatValue> ();
	__Local__430.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__430.GetData(), 1);
	auto& __Local__431 = __Local__430[0];
	auto& __Local__432 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__421), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__433 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__432), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__433 = TArray<FFrameNumber> ();
	__Local__433.Reserve(1);
	__Local__433.Add(FFrameNumber{});
	auto& __Local__434 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__432), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__434 = TArray<FMovieSceneFloatValue> ();
	__Local__434.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__434.GetData(), 1);
	auto& __Local__435 = __Local__434[0];
	auto& __Local__436 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__421), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__437 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__436), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__437 = TArray<FFrameNumber> ();
	__Local__437.Reserve(2);
	__Local__437.Add(FFrameNumber{});
	__Local__437.Add(FFrameNumber{});
	__Local__437[1].Value = 15000;
	auto& __Local__438 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__436), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__438 = TArray<FMovieSceneFloatValue> ();
	__Local__438.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__438.GetData(), 2);
	auto& __Local__439 = __Local__438[0];
	auto& __Local__440 = __Local__438[1];
	__Local__440.Value = 0.625000f;
	__Local__421->Easing.EaseIn = __Local__422;
	__Local__421->Easing.EaseOut = __Local__423;
	__Local__421->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(15000)));
	auto& __Local__441 = (*(AccessPrivateProperty<FGuid >((__Local__421), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__441 = FGuid(0x61838438, 0x49BF95D0, 0x9383688C, 0xD27667B5);
	__Local__420.Add(__Local__421);
	auto& __Local__442 = (*(AccessPrivateProperty<FGuid >((__Local__418), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__442 = FGuid(0x05ED9D4F, 0x47C90016, 0x6D37FEAC, 0x12A629C9);
	auto& __Local__443 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__418), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__443.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__443.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__443.Entries.GetData(), 1);
	auto& __Local__444 = __Local__443.Entries[0];
	__Local__444.Section = __Local__421;
	auto& __Local__445 = (*(__Local__309->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__444.Range), 0)));
	auto& __Local__446 = (*(__Local__312->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__445), 0)));
	__Local__446 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__447 = (*(__Local__315->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__444.Range), 0)));
	auto& __Local__448 = (*(__Local__312->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__447), 0)));
	__Local__448 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__449 = (*(__Local__319->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__447), 0)));
	__Local__449.Value = 15000;
	__Local__444.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__450 = (*(AccessPrivateProperty<FGuid >((__Local__418), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__450 = FGuid(0x05ED9D4F, 0x47C90016, 0x6D37FEAC, 0x12A629C9);
	__Local__417.Add(__Local__418);
	auto& __Local__451 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__407), UMovieScene::__PPO__PlaybackRange() )));
	__Local__451 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(15001)));
	auto& __Local__452 = (*(AccessPrivateProperty<FFrameRate >((__Local__407), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__453 = (*(__Local__401->ContainerPtrToValuePtr<int32 >(&(__Local__452), 0)));
	__Local__453 = 20;
	auto& __Local__454 = (*(AccessPrivateProperty<FGuid >((__Local__407), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__454 = FGuid(0x3C07B5C7, 0x4A1A31C3, 0xC3BA50A7, 0x3559EB8A);
	__Local__3->MovieScene = __Local__407;
	__Local__3->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__3->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__3->AnimationBindings.GetData(), 1);
	auto& __Local__455 = __Local__3->AnimationBindings[0];
	__Local__455.WidgetName = FName(TEXT("FadeBorder"));
	__Local__455.AnimationGuid = FGuid(0x1ADE3E18, 0x47E0258A, 0x5EF3438A, 0x6755F77B);
	__Local__3->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__456 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__456 = FGuid(0xBF27D835, 0x4D4F5823, 0x8CDB5882, 0x55832960);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__3);
}
PRAGMA_ENABLE_OPTIMIZATION
void UUI_Mei_HUD_C__pf4215541020::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__457;
	SlotNames.Append(__Local__457);
}
void UUI_Mei_HUD_C__pf4215541020::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__458;
	__Local__458.Reserve(2);
	__Local__458.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UUI_Mei_HUD_C__pf4215541020::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__458.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UUI_Mei_HUD_C__pf4215541020::StaticClass())->MiscConvertedSubobjects[2]));
	TArray<FDelegateRuntimeBinding>  __Local__459;
	__Local__459.AddUninitialized(4);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__459.GetData(), 4);
	auto& __Local__460 = __Local__459[0];
	__Local__460.ObjectName = FString(TEXT("InteractionObjectNameText"));
	__Local__460.PropertyName = FName(TEXT("Text"));
	__Local__460.FunctionName = FName(TEXT("Get_InteractionObjectNameText_Text_0"));
	auto& __Local__461 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__460.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__461 = TArray<FPropertyPathSegment> ();
	__Local__461.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__461.GetData(), 1);
	auto& __Local__462 = __Local__461[0];
	__Local__462.Name = FName(TEXT("Bind_UpdateTargetActorName"));
	auto& __Local__463 = __Local__459[1];
	__Local__463.ObjectName = FString(TEXT("DurabilityText"));
	__Local__463.PropertyName = FName(TEXT("Text"));
	__Local__463.FunctionName = FName(TEXT("Get_DurabilityText_Text_0"));
	auto& __Local__464 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__463.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__464 = TArray<FPropertyPathSegment> ();
	__Local__464.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__464.GetData(), 1);
	auto& __Local__465 = __Local__464[0];
	__Local__465.Name = FName(TEXT("Bind_UpdateTargetActorDurability"));
	auto& __Local__466 = __Local__459[2];
	__Local__466.ObjectName = FString(TEXT("InteractionText"));
	__Local__466.PropertyName = FName(TEXT("Text"));
	__Local__466.FunctionName = FName(TEXT("Get_InteractionText_Text_0"));
	auto& __Local__467 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__466.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__467 = TArray<FPropertyPathSegment> ();
	__Local__467.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__467.GetData(), 1);
	auto& __Local__468 = __Local__467[0];
	__Local__468.Name = FName(TEXT("Bind_UpdateTargetActorInteractionText"));
	auto& __Local__469 = __Local__459[3];
	__Local__469.ObjectName = FString(TEXT("CrosshairImage"));
	__Local__469.PropertyName = FName(TEXT("Visibility"));
	__Local__469.FunctionName = FName(TEXT("Get_CrosshairImage_Visibility_0"));
	auto& __Local__470 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__469.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__470 = TArray<FPropertyPathSegment> ();
	__Local__470.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__470.GetData(), 1);
	auto& __Local__471 = __Local__470[0];
	__Local__471.Name = FName(TEXT("Bind_CrosshairVisibility"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UUI_Mei_HUD_C__pf4215541020::StaticClass())->MiscConvertedSubobjects[0]), __Local__458, __Local__459);
}
void UUI_Mei_HUD_C__pf4215541020::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_HUD__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 26);
	// optimized KCST_UnconditionalGoto
	bpf__HideBuildingMenu__pf();
	bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
	if ( bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf && bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetClass()->ImplementsInterface(UBPI_Mei_Player_C::StaticClass()) )
	{
		b0l__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
		void* IAddress = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetInterfaceAddress(UBPI_Mei_Player_C::StaticClass());
		b0l__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetInterface(IAddress);
	}
	else
	{
		b0l__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(nullptr);
	}
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBPI_Mei_Player__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsBPI_Mei_Player__pf))
	{
		auto __Local__473 = FDataTableRowHandle{};
		FDataTableRowHandle  __Local__472 = __Local__473;
		IBPI_Mei_Player_C::Execute_bpf__TryStartBuildObject_BPI__pf(b0l__K2Node_DynamicCast_AsBPI_Mei_Player__pf.GetObject() , ((::IsValid(b0l__K2Node_ComponentBoundEvent_BuildingMenuSegmentWidget__pf)) ? (b0l__K2Node_ComponentBoundEvent_BuildingMenuSegmentWidget__pf->bpv__BuildingObjectHandle__pf) : (__Local__472)));
	}
	return; // KCST_GotoReturn
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_HUD__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	bpf__HideMalletMenu__pf();
	return; // KCST_GotoReturn
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_HUD__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	bpf__ShowMalletMenu__pf(b0l__K2Node_Event_BuildingObject__pf);
	return; // KCST_GotoReturn
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_HUD__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	bpf__UpdateBuildingList__pf(b0l__K2Node_Event_BuildingListHandle__pf);
	return; // KCST_GotoReturn
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_HUD__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 20);
	// optimized KCST_UnconditionalGoto
	bpf__HideBuildingMenu__pf();
	return; // KCST_GotoReturn
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_HUD__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	bpf__ShowBuildingMenu__pf();
	return; // KCST_GotoReturn
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_HUD__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 17);
	// optimized KCST_UnconditionalGoto
	bpf__SetBuildingComponentReference__pf(b0l__K2Node_Event_BuildingComponent__pf);
	return; // KCST_GotoReturn
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_HUD__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	bpf__SetInteractionComponentReference__pf(b0l__K2Node_Event_InteractionComponent__pf);
	return; // KCST_GotoReturn
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_HUD__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	bpf__UpdateInteractionSlots__pf();
	bpf__UpdateResourceInformation__pf();
	return; // KCST_GotoReturn
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_HUD__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	bpf__UpdateResourceInformation__pf();
	return; // KCST_GotoReturn
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_HUD__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	if (!b0l__K2Node_ComponentBoundEvent_HideMenu__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpf__HideMalletMenu__pf();
	return; // KCST_GotoReturn
}
void UUI_Mei_HUD_C__pf4215541020::bpf__BndEvt__UI_Mei_HUD_MalletMenu_K2Node_ComponentBoundEvent_2_OnMenuSegmentClicked__DelegateSignature__pf(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegmentWidget__pf, bool bpp__HideMenu__pf)
{
	b0l__K2Node_ComponentBoundEvent_MenuSegmentWidget__pf = bpp__MenuSegmentWidget__pf;
	b0l__K2Node_ComponentBoundEvent_HideMenu__pf = bpp__HideMenu__pf;
	bpf__ExecuteUbergraph_UI_Mei_HUD__pf_10(1);
}
void UUI_Mei_HUD_C__pf4215541020::bpf__BndEvt__UI_Mei_HUD_BuildingMenu_K2Node_ComponentBoundEvent_1_OnBuildingSegmentClicked__DelegateSignature__pf(UUI_Mei_BuildingMenuSegment_C__pf4215541020* bpp__BuildingMenuSegmentWidget__pf)
{
	b0l__K2Node_ComponentBoundEvent_BuildingMenuSegmentWidget__pf = bpp__BuildingMenuSegmentWidget__pf;
	bpf__ExecuteUbergraph_UI_Mei_HUD__pf_0(26);
}
void UUI_Mei_HUD_C__pf4215541020::bpf__HideMalletMenu_BPI__pf()
{
	bpf__ExecuteUbergraph_UI_Mei_HUD__pf_1(25);
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ShowMalletMenu_BPI__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__BuildingObject__pf)
{
	b0l__K2Node_Event_BuildingObject__pf = bpp__BuildingObject__pf;
	bpf__ExecuteUbergraph_UI_Mei_HUD__pf_2(23);
}
void UUI_Mei_HUD_C__pf4215541020::bpf__UpdateBuildingList_BPI__pf(FDataTableRowHandle bpp__BuildingListHandle__pf)
{
	b0l__K2Node_Event_BuildingListHandle__pf = bpp__BuildingListHandle__pf;
	bpf__ExecuteUbergraph_UI_Mei_HUD__pf_3(21);
}
void UUI_Mei_HUD_C__pf4215541020::bpf__HideBuildingMenu_BPI__pf()
{
	bpf__ExecuteUbergraph_UI_Mei_HUD__pf_4(20);
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ShowBuildingMenu_BPI__pf()
{
	bpf__ExecuteUbergraph_UI_Mei_HUD__pf_5(19);
}
void UUI_Mei_HUD_C__pf4215541020::bpf__SetBuildingComponentReference_BPI__pf(UBP_Mei_BuildingComponent_C__pf1731449071* bpp__BuildingComponent__pf)
{
	b0l__K2Node_Event_BuildingComponent__pf = bpp__BuildingComponent__pf;
	bpf__ExecuteUbergraph_UI_Mei_HUD__pf_6(17);
}
void UUI_Mei_HUD_C__pf4215541020::bpf__SetInteractionComponentReference_BPI__pf(UBP_Mei_InteractionComponent_C__pf1731449071* bpp__InteractionComponent__pf)
{
	b0l__K2Node_Event_InteractionComponent__pf = bpp__InteractionComponent__pf;
	bpf__ExecuteUbergraph_UI_Mei_HUD__pf_7(15);
}
void UUI_Mei_HUD_C__pf4215541020::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_UI_Mei_HUD__pf_9(11);
}
void UUI_Mei_HUD_C__pf4215541020::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_UI_Mei_HUD__pf_8(4);
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ShowBuildingMenu__pf()
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	bool bpfv__CallFunc_IsVisible_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_IsVisible_ReturnValue_1__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	TScriptInterface<IBPI_Mei_Player_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__MalletMenu__pf))
				{
					bpfv__CallFunc_IsVisible_ReturnValue__pf = bpv__MalletMenu__pf->UWidget::IsVisible();
				}
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_IsVisible_ReturnValue__pf);
				if(::IsValid(bpv__BuildingMenu__pf))
				{
					bpfv__CallFunc_IsVisible_ReturnValue_1__pf = bpv__BuildingMenu__pf->UWidget::IsVisible();
				}
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_IsVisible_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if ( bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf && bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetClass()->ImplementsInterface(UBPI_Mei_Player_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetInterfaceAddress(UBPI_Mei_Player_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf))
				{
					IBPI_Mei_Player_C::Execute_bpf__SetBuildingMode_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.GetObject() , E__E_Mei_BuildingMode__pf::NewEnumerator0);
				}
			}
		case 4:
			{
				if(::IsValid(bpv__BuildingMenu__pf))
				{
					bpv__BuildingMenu__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 5:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->AController::K2_GetPawn();
				}
				if(::IsValid(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue__pf->DisableInput(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
				}
			}
		case 6:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf))
				{
					bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->bShowMouseCursor = true;
				}
			}
		case 7:
			{
				bpf__SetMousePositionToCenter__pf();
			}
		case 8:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf, this, EMouseLockMode::DoNotLock, false);
			}
		case 9:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__FadeBorderAnimation__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
			}
		case 10:
			{
				UGameplayStatics::PlaySound2D(this, bpv__ShowMenuSound__pf, 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_HUD_C__pf4215541020::bpf__HideBuildingMenu__pf()
{
	bool bpfv__CallFunc_IsVisible_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsVisible_ReturnValue__pf = UWidget::IsVisible();
				if (!bpfv__CallFunc_IsVisible_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				SetVisibility(ESlateVisibility::Hidden);
			}
		case 3:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->AController::K2_GetPawn();
				}
				if(::IsValid(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue__pf->EnableInput(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
				}
			}
		case 4:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				bool  __Local__474 = false;
				if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf))
				{
					bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->bShowMouseCursor = ((::IsValid(bpv__BuildingComponent__pf)) ? (bpv__BuildingComponent__pf->bpv__TraceToMouseMode__pf) : (__Local__474));
				}
			}
		case 5:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				UWidgetBlueprintLibrary::SetInputMode_GameOnly(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
			}
		case 6:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__FadeBorderAnimation__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000, false);
			}
		case 7:
			{
				UGameplayStatics::PlaySound2D(this, bpv__HideMenuSound__pf, 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_HUD_C__pf4215541020::bpf__UpdateBuildingList__pf(FDataTableRowHandle bpp__BuildingListHandle__pf)
{
	bool bpfv__CallFunc_UpdateBuildingList_Success__pf{};
	if(::IsValid(bpv__BuildingMenu__pf))
	{
		bpv__BuildingMenu__pf->bpf__UpdateBuildingList__pf(bpp__BuildingListHandle__pf, /*out*/ bpfv__CallFunc_UpdateBuildingList_Success__pf);
	}
}
FText  UUI_Mei_HUD_C__pf4215541020::bpf__Bind_UpdateTargetActorName__pf()
{
	FText bpp__ReturnValue__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	AActor* bpfv__CallFunc_GetTargetActor_TargetActor__pf{};
	AActor* bpfv__CallFunc_GetInteractionActor_InteractionActor__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	TScriptInterface<IBPI_Mei_InteractionObject_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	FText bpfv__CallFunc_GetInteractionObjectName_BPI_Name__pf{};
	TScriptInterface<IBPI_Mei_InteractionObject_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsCanInteract_BPI_Result__pf{};
	bool bpfv__CallFunc_IsActive_ReturnValue__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	bool bpfv__CallFunc_IsActive_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	E__E_Mei_BuildingMode__pf bpfv__CallFunc_GetInteractionStatus_BuildingMode__pf{};
	AActor* bpfv__CallFunc_GetInteractionStatus_TargetActor__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf{};
	bool bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(8);
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(bpv__BuildingComponent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__BuildingComponent__pf))
				{
					bpfv__CallFunc_IsActive_ReturnValue_1__pf = bpv__BuildingComponent__pf->UActorComponent::IsActive();
				}
				if (!bpfv__CallFunc_IsActive_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpv__BuildingComponent__pf))
				{
					bpv__BuildingComponent__pf->bpf__GetInteractionStatus__pf(/*out*/ bpfv__CallFunc_GetInteractionStatus_BuildingMode__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetActor__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf);
				}
				bpfv__CallFunc_IsValid_ReturnValue_3__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpv__BuildingComponent__pf))
				{
					bpv__BuildingComponent__pf->bpf__GetInteractionStatus__pf(/*out*/ bpfv__CallFunc_GetInteractionStatus_BuildingMode__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetActor__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf);
				}
				bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetInteractionStatus_BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0));
				if (!bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpv__InteractionObjectNameText__pf))
				{
					bpv__InteractionObjectNameText__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__BuildingComponent__pf))
				{
					bpv__BuildingComponent__pf->bpf__GetInteractionStatus__pf(/*out*/ bpfv__CallFunc_GetInteractionStatus_BuildingMode__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetActor__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf);
				}
				FText  __Local__475 = FText::GetEmpty();
				bpp__ReturnValue__pf = ((::IsValid(bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf)) ? (bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf->bpv__BuildingObjectSettings__pf.bpv__Name_5_9117448A4C5B6B9761439D9BD7AA8488__pf) : (__Local__475));
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__InteractionComponent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpfv__CallFunc_IsActive_ReturnValue__pf = bpv__InteractionComponent__pf->UActorComponent::IsActive();
				}
				if (!bpfv__CallFunc_IsActive_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpv__InteractionComponent__pf->bpf__GetInteractionActor__pf(/*out*/ bpfv__CallFunc_GetInteractionActor_InteractionActor__pf);
				}
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetInteractionActor_InteractionActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 11:
			{
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpv__InteractionComponent__pf->bpf__GetInteractionActor__pf(/*out*/ bpfv__CallFunc_GetInteractionActor_InteractionActor__pf);
				}
				if ( bpfv__CallFunc_GetInteractionActor_InteractionActor__pf && bpfv__CallFunc_GetInteractionActor_InteractionActor__pf->GetClass()->ImplementsInterface(UBPI_Mei_InteractionObject_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf.SetObject(bpfv__CallFunc_GetInteractionActor_InteractionActor__pf);
					void* IAddress = bpfv__CallFunc_GetInteractionActor_InteractionActor__pf->GetInterfaceAddress(UBPI_Mei_InteractionObject_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 12:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf))
				{
					const UScriptStruct* __Local__477 = FKey::StaticStruct();
					uint8* __Local__478 = (uint8*)FMemory_Alloca(__Local__477->GetStructureSize());
					__Local__477->InitializeStruct(__Local__478);
					FKey& __Local__476 = *reinterpret_cast<FKey*>(__Local__478);
					IBPI_Mei_InteractionObject_C::Execute_bpf__IsCanInteract_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf.GetObject() , __Local__476, bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf, /*out*/ bpfv__CallFunc_IsCanInteract_BPI_Result__pf);
				}
			}
		case 13:
			{
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpv__InteractionComponent__pf->bpf__GetInteractionActor__pf(/*out*/ bpfv__CallFunc_GetInteractionActor_InteractionActor__pf);
				}
				if ( bpfv__CallFunc_GetInteractionActor_InteractionActor__pf && bpfv__CallFunc_GetInteractionActor_InteractionActor__pf->GetClass()->ImplementsInterface(UBPI_Mei_InteractionObject_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf.SetObject(bpfv__CallFunc_GetInteractionActor_InteractionActor__pf);
					void* IAddress = bpfv__CallFunc_GetInteractionActor_InteractionActor__pf->GetInterfaceAddress(UBPI_Mei_InteractionObject_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 14:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf))
				{
					IBPI_Mei_InteractionObject_C::Execute_bpf__GetInteractionObjectName_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf.GetObject() , /*out*/ bpfv__CallFunc_GetInteractionObjectName_BPI_Name__pf);
				}
			}
		case 15:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Hidden;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Visible;
				bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_IsCanInteract_BPI_Result__pf;
				if(::IsValid(bpv__InteractionObjectNameText__pf))
				{
					bpv__InteractionObjectNameText__pf->SetVisibility(TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable_1__pf)));
				}
			}
		case 16:
			{
				bpp__ReturnValue__pf = bpfv__CallFunc_GetInteractionObjectName_BPI_Name__pf;
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				if(::IsValid(bpv__InteractionObjectNameText__pf))
				{
					bpv__InteractionObjectNameText__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 18:
			{
				bpp__ReturnValue__pf = FText::GetEmpty();
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpv__InteractionComponent__pf->bpf__GetTargetActor__pf(/*out*/ bpfv__CallFunc_GetTargetActor_TargetActor__pf);
				}
				bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf = Cast<ABP_Mei_Building_BaseObject_C__pf2826203124>(bpfv__CallFunc_GetTargetActor_TargetActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 20:
			{
				if(::IsValid(bpv__InteractionObjectNameText__pf))
				{
					bpv__InteractionObjectNameText__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 21:
			{
				FText  __Local__479 = FText::GetEmpty();
				bpp__ReturnValue__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf)) ? (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf->bpv__BuildingObjectSettings__pf.bpv__Name_5_9117448A4C5B6B9761439D9BD7AA8488__pf) : (__Local__479));
				__CurrentState = -1;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_IsCanInteract_BPI_Result__pf = false;
				__CurrentState = 13;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_GetInteractionObjectName_BPI_Name__pf = FText::GetEmpty();
				__CurrentState = 15;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UUI_Mei_HUD_C__pf4215541020::bpf__Bind_UpdateTargetActorDurability__pf()
{
	FText bpp__ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	E__E_Mei_BuildingMode__pf bpfv__CallFunc_GetInteractionStatus_BuildingMode__pf{};
	AActor* bpfv__CallFunc_GetInteractionStatus_TargetActor__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf{};
	bool bpfv__CallFunc_IsActive_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_Durability_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	float bpfv__CallFunc_GetDurability_BPI_CurrentValue__pf{};
	float bpfv__CallFunc_GetDurability_BPI_MaxValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf{};
	bool bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf{};
	TArray<FFormatArgumentData> bpfv__K2Node_MakeArray_Array__pf{};
	FText bpfv__CallFunc_Format_ReturnValue__pf{};
	AActor* bpfv__CallFunc_GetTargetActor_TargetActor__pf{};
	TScriptInterface<IBPI_Mei_Durability_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_3__pf{};
	float bpfv__CallFunc_GetDurability_BPI_CurrentValue_1__pf{};
	float bpfv__CallFunc_GetDurability_BPI_MaxValue_1__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf{};
	bool bpfv__CallFunc_IsActive_ReturnValue_1__pf{};
	TArray<FFormatArgumentData> bpfv__K2Node_MakeArray_Array_1__pf{};
	FText bpfv__CallFunc_Format_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(12);
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__BuildingComponent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__BuildingComponent__pf))
				{
					bpfv__CallFunc_IsActive_ReturnValue__pf = bpv__BuildingComponent__pf->UActorComponent::IsActive();
				}
				if (!bpfv__CallFunc_IsActive_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpv__BuildingComponent__pf))
				{
					bpv__BuildingComponent__pf->bpf__GetInteractionStatus__pf(/*out*/ bpfv__CallFunc_GetInteractionStatus_BuildingMode__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetActor__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf);
				}
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetInteractionStatus_TargetActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpv__BuildingComponent__pf))
				{
					bpv__BuildingComponent__pf->bpf__GetInteractionStatus__pf(/*out*/ bpfv__CallFunc_GetInteractionStatus_BuildingMode__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetActor__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf);
				}
				bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetInteractionStatus_BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0));
				if (!bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpv__BuildingComponent__pf))
				{
					bpv__BuildingComponent__pf->bpf__GetInteractionStatus__pf(/*out*/ bpfv__CallFunc_GetInteractionStatus_BuildingMode__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetActor__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf);
				}
				if ( bpfv__CallFunc_GetInteractionStatus_TargetActor__pf && bpfv__CallFunc_GetInteractionStatus_TargetActor__pf->GetClass()->ImplementsInterface(UBPI_Mei_Durability_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability__pf.SetObject(bpfv__CallFunc_GetInteractionStatus_TargetActor__pf);
					void* IAddress = bpfv__CallFunc_GetInteractionStatus_TargetActor__pf->GetInterfaceAddress(UBPI_Mei_Durability_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 7:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability__pf))
				{
					IBPI_Mei_Durability_C::Execute_bpf__GetDurability_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability__pf.GetObject() , /*out*/ bpfv__CallFunc_GetDurability_BPI_CurrentValue__pf, /*out*/ bpfv__CallFunc_GetDurability_BPI_MaxValue__pf);
				}
			}
		case 8:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_GetDurability_BPI_MaxValue__pf, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpv__DurabilityProgressBar__pf))
				{
					bpv__DurabilityProgressBar__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__DurabilityText__pf))
				{
					bpv__DurabilityText__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 10:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_GetDurability_BPI_CurrentValue__pf, bpfv__CallFunc_GetDurability_BPI_MaxValue__pf);
				if(::IsValid(bpv__DurabilityProgressBar__pf))
				{
					bpv__DurabilityProgressBar__pf->UProgressBar::SetPercent(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				}
			}
		case 11:
			{
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentName = FString(TEXT("MaxDurability"));
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueType = EFormatArgumentType::Float;
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValue = FText::GetEmpty();
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueFloat = bpfv__CallFunc_GetDurability_BPI_MaxValue__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentName = FString(TEXT("Durability"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValueType = EFormatArgumentType::Float;
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValue = FText::GetEmpty();
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValueFloat = bpfv__CallFunc_GetDurability_BPI_CurrentValue__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeArray_Array__pf.SetNum(2, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf;
				bpfv__K2Node_MakeArray_Array__pf[1] = bpfv__K2Node_MakeStruct_FormatArgumentData__pf;
				bpfv__CallFunc_Format_ReturnValue__pf = UKismetTextLibrary::Format(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"78952DAB4D0833EA0114EC872E61D75D\", \"{Durability} / {MaxDurability}\")")	), bpfv__K2Node_MakeArray_Array__pf);
				bpp__ReturnValue__pf = bpfv__CallFunc_Format_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__InteractionComponent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 13:
			{
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpfv__CallFunc_IsActive_ReturnValue_1__pf = bpv__InteractionComponent__pf->UActorComponent::IsActive();
				}
				if (!bpfv__CallFunc_IsActive_ReturnValue_1__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 14:
			{
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpv__InteractionComponent__pf->bpf__GetTargetActor__pf(/*out*/ bpfv__CallFunc_GetTargetActor_TargetActor__pf);
				}
				bpfv__CallFunc_IsValid_ReturnValue_3__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetTargetActor_TargetActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_3__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 15:
			{
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpv__InteractionComponent__pf->bpf__GetTargetActor__pf(/*out*/ bpfv__CallFunc_GetTargetActor_TargetActor__pf);
				}
				if ( bpfv__CallFunc_GetTargetActor_TargetActor__pf && bpfv__CallFunc_GetTargetActor_TargetActor__pf->GetClass()->ImplementsInterface(UBPI_Mei_Durability_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability_1__pf.SetObject(bpfv__CallFunc_GetTargetActor_TargetActor__pf);
					void* IAddress = bpfv__CallFunc_GetTargetActor_TargetActor__pf->GetInterfaceAddress(UBPI_Mei_Durability_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 25;
					break;
				}
			}
		case 16:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability_1__pf))
				{
					IBPI_Mei_Durability_C::Execute_bpf__GetDurability_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Durability_1__pf.GetObject() , /*out*/ bpfv__CallFunc_GetDurability_BPI_CurrentValue_1__pf, /*out*/ bpfv__CallFunc_GetDurability_BPI_MaxValue_1__pf);
				}
			}
		case 17:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_GetDurability_BPI_MaxValue_1__pf, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 18:
			{
				if(::IsValid(bpv__DurabilityProgressBar__pf))
				{
					bpv__DurabilityProgressBar__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__DurabilityText__pf))
				{
					bpv__DurabilityText__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 19:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_GetDurability_BPI_CurrentValue_1__pf, bpfv__CallFunc_GetDurability_BPI_MaxValue_1__pf);
				if(::IsValid(bpv__DurabilityProgressBar__pf))
				{
					bpv__DurabilityProgressBar__pf->UProgressBar::SetPercent(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				}
			}
		case 20:
			{
				bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf.ArgumentName = FString(TEXT("MaxDurability"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf.ArgumentValueType = EFormatArgumentType::Float;
				bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf.ArgumentValue = FText::GetEmpty();
				bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf.ArgumentValueFloat = bpfv__CallFunc_GetDurability_BPI_MaxValue_1__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf.ArgumentName = FString(TEXT("Durability"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf.ArgumentValueType = EFormatArgumentType::Float;
				bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf.ArgumentValue = FText::GetEmpty();
				bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf.ArgumentValueFloat = bpfv__CallFunc_GetDurability_BPI_CurrentValue_1__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeArray_Array_1__pf.SetNum(2, true);
				bpfv__K2Node_MakeArray_Array_1__pf[0] = bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf;
				bpfv__K2Node_MakeArray_Array_1__pf[1] = bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf;
				bpfv__CallFunc_Format_ReturnValue_1__pf = UKismetTextLibrary::Format(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"63D8694D4AEA1156624B2A972A02BE41\", \"{Durability} / {MaxDurability}\")")	), bpfv__K2Node_MakeArray_Array_1__pf);
				bpp__ReturnValue__pf = bpfv__CallFunc_Format_ReturnValue_1__pf;
				__CurrentState = -1;
				break;
			}
		case 21:
			{
				if(::IsValid(bpv__DurabilityText__pf))
				{
					bpv__DurabilityText__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__DurabilityProgressBar__pf))
				{
					bpv__DurabilityProgressBar__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 22:
			{
				bpp__ReturnValue__pf = FText::GetEmpty();
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_GetDurability_BPI_CurrentValue__pf = 0.000000;
			}
		case 24:
			{
				bpfv__CallFunc_GetDurability_BPI_MaxValue__pf = 0.000000;
				__CurrentState = 8;
				break;
			}
		case 25:
			{
				bpfv__CallFunc_GetDurability_BPI_CurrentValue_1__pf = 0.000000;
			}
		case 26:
			{
				bpfv__CallFunc_GetDurability_BPI_MaxValue_1__pf = 0.000000;
				__CurrentState = 17;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UUI_Mei_HUD_C__pf4215541020::bpf__Bind_UpdateTargetActorInteractionText__pf()
{
	FText bpp__ReturnValue__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__LocalBuildingObject__pf{};
	E__E_Mei_BuildingMode__pf bpfv__LocalBuildingMode__pf{};
	FText bpfv__Temp_text_Variable__pf{};
	FText bpfv__Temp_text_Variable_1__pf{};
	FText bpfv__Temp_text_Variable_2__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	FText bpfv__Temp_text_Variable_3__pf{};
	FText bpfv__Temp_text_Variable_4__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData__pf{};
	E__E_Mei_BuildingMode__pf bpfv__CallFunc_GetInteractionStatus_BuildingMode__pf{};
	AActor* bpfv__CallFunc_GetInteractionStatus_TargetActor__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf{};
	FText bpfv__Temp_text_Variable_5__pf{};
	FText bpfv__Temp_text_Variable_6__pf{};
	E__E_Mei_BuildingMode__pf bpfv__Temp_byte_Variable_2__pf{};
	FText bpfv__K2Node_Select_Default__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	TArray<FFormatArgumentData> bpfv__K2Node_MakeArray_Array__pf{};
	FText bpfv__CallFunc_Format_ReturnValue__pf{};
	AActor* bpfv__CallFunc_GetInteractionActor_InteractionActor__pf{};
	TScriptInterface<IBPI_Mei_InteractionObject_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	TScriptInterface<IBPI_Mei_InteractionObject_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	FText bpfv__CallFunc_GetInteractionText_BPI_InteractionText__pf{};
	bool bpfv__CallFunc_IsCanInteract_BPI_Result__pf{};
	bool bpfv__CallFunc_TextIsEmpty_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default_1__pf{};
	bool bpfv__CallFunc_IsActive_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_3__pf{};
	E__E_Mei_BuildingMode__pf bpfv__CallFunc_GetBuildingMode_BuildingMode__pf{};
	bool bpfv__CallFunc_IsActive_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(6);
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue_3__pf = UKismetSystemLibrary::IsValid(bpv__BuildingComponent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__BuildingComponent__pf))
				{
					bpfv__CallFunc_IsActive_ReturnValue_1__pf = bpv__BuildingComponent__pf->UActorComponent::IsActive();
				}
				if (!bpfv__CallFunc_IsActive_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpv__BuildingComponent__pf))
				{
					bpv__BuildingComponent__pf->bpf__GetBuildingMode__pf(/*out*/ bpfv__CallFunc_GetBuildingMode_BuildingMode__pf);
				}
				bpfv__LocalBuildingMode__pf = bpfv__CallFunc_GetBuildingMode_BuildingMode__pf;
			}
		case 5:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 22;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 22;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 22;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 22;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 22;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__InteractionComponent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 7:
			{
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpfv__CallFunc_IsActive_ReturnValue__pf = bpv__InteractionComponent__pf->UActorComponent::IsActive();
				}
				if (!bpfv__CallFunc_IsActive_ReturnValue__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpv__InteractionComponent__pf->bpf__GetInteractionActor__pf(/*out*/ bpfv__CallFunc_GetInteractionActor_InteractionActor__pf);
				}
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetInteractionActor_InteractionActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpv__InteractionComponent__pf->bpf__GetInteractionActor__pf(/*out*/ bpfv__CallFunc_GetInteractionActor_InteractionActor__pf);
				}
				if ( bpfv__CallFunc_GetInteractionActor_InteractionActor__pf && bpfv__CallFunc_GetInteractionActor_InteractionActor__pf->GetClass()->ImplementsInterface(UBPI_Mei_InteractionObject_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf.SetObject(bpfv__CallFunc_GetInteractionActor_InteractionActor__pf);
					void* IAddress = bpfv__CallFunc_GetInteractionActor_InteractionActor__pf->GetInterfaceAddress(UBPI_Mei_InteractionObject_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf))
				{
					const UScriptStruct* __Local__481 = FKey::StaticStruct();
					uint8* __Local__482 = (uint8*)FMemory_Alloca(__Local__481->GetStructureSize());
					__Local__481->InitializeStruct(__Local__482);
					FKey& __Local__480 = *reinterpret_cast<FKey*>(__Local__482);
					IBPI_Mei_InteractionObject_C::Execute_bpf__IsCanInteract_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf.GetObject() , __Local__480, bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf, /*out*/ bpfv__CallFunc_IsCanInteract_BPI_Result__pf);
				}
			}
		case 11:
			{
				if (!bpfv__CallFunc_IsCanInteract_BPI_Result__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 12:
			{
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpv__InteractionComponent__pf->bpf__GetInteractionActor__pf(/*out*/ bpfv__CallFunc_GetInteractionActor_InteractionActor__pf);
				}
				if ( bpfv__CallFunc_GetInteractionActor_InteractionActor__pf && bpfv__CallFunc_GetInteractionActor_InteractionActor__pf->GetClass()->ImplementsInterface(UBPI_Mei_InteractionObject_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf.SetObject(bpfv__CallFunc_GetInteractionActor_InteractionActor__pf);
					void* IAddress = bpfv__CallFunc_GetInteractionActor_InteractionActor__pf->GetInterfaceAddress(UBPI_Mei_InteractionObject_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 24;
					break;
				}
			}
		case 13:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf))
				{
					const UScriptStruct* __Local__484 = FKey::StaticStruct();
					uint8* __Local__485 = (uint8*)FMemory_Alloca(__Local__484->GetStructureSize());
					__Local__484->InitializeStruct(__Local__485);
					FKey& __Local__483 = *reinterpret_cast<FKey*>(__Local__485);
					IBPI_Mei_InteractionObject_C::Execute_bpf__GetInteractionText_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf.GetObject() , __Local__483, bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf, /*out*/ bpfv__CallFunc_GetInteractionText_BPI_InteractionText__pf);
				}
			}
		case 14:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Hidden;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Visible;
				bpfv__CallFunc_TextIsEmpty_ReturnValue__pf = UKismetTextLibrary::TextIsEmpty(bpfv__CallFunc_GetInteractionText_BPI_InteractionText__pf);
				bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_TextIsEmpty_ReturnValue__pf;
				if(::IsValid(bpv__InteractionText__pf))
				{
					bpv__InteractionText__pf->SetVisibility(TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default_1__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf)));
				}
				if(::IsValid(bpv__InteractionKeyText__pf))
				{
					bpv__InteractionKeyText__pf->SetVisibility(TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default_1__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf)));
				}
			}
		case 15:
			{
				bpp__ReturnValue__pf = bpfv__CallFunc_GetInteractionText_BPI_InteractionText__pf;
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				if(::IsValid(bpv__InteractionKeyText__pf))
				{
					bpv__InteractionKeyText__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__InteractionText__pf))
				{
					bpv__InteractionText__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 17:
			{
				bpp__ReturnValue__pf = FText::GetEmpty();
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				bpfv__LocalBuildingObject__pf = ((ABP_Mei_Building_BaseObject_C__pf2826203124*)nullptr);
			}
		case 19:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__LocalBuildingObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 20:
			{
				if(::IsValid(bpv__InteractionKeyText__pf))
				{
					bpv__InteractionKeyText__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__InteractionText__pf))
				{
					bpv__InteractionText__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 21:
			{
				bpfv__Temp_text_Variable__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"2836CFF5429D88A7FE629E9363BE5ADD\", \"Repair\")")	);
				bpfv__Temp_text_Variable_1__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"BA49CDD64BC7BE00FD4669BB61607AE4\", \"Build\")")	);
				bpfv__Temp_text_Variable_2__pf = FText::GetEmpty();
				bpfv__Temp_text_Variable_3__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"EA41412C47931F3043B045BF992367DB\", \"Upgrade\")")	);
				bpfv__Temp_text_Variable_4__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"6A7929504A613B3BDC90829544252AEB\", \"Destruct\")")	);
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentName = FString(TEXT("ObjectName"));
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueType = EFormatArgumentType::Text;
				FText  __Local__486 = FText::GetEmpty();
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValue = ((::IsValid(bpfv__LocalBuildingObject__pf)) ? (bpfv__LocalBuildingObject__pf->bpv__BuildingObjectSettings__pf.bpv__Name_5_9117448A4C5B6B9761439D9BD7AA8488__pf) : (__Local__486));
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__Temp_text_Variable_5__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"6C05C23C411DA419C026CEB81DEAA4C2\", \"Remove\")")	);
				bpfv__Temp_text_Variable_6__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"D1E927E44CD4CDB02B97BD86C6548900\", \"Rotate\")")	);
				bpfv__Temp_byte_Variable_2__pf = bpfv__LocalBuildingMode__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentName = FString(TEXT("BuildingMode"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValue = TSwitchValue<E__E_Mei_BuildingMode__pf , FText >(bpfv__Temp_byte_Variable_2__pf, bpfv__K2Node_Select_Default__pf, 7, TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator0, bpfv__Temp_text_Variable_2__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator1, bpfv__Temp_text_Variable_1__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator2, bpfv__Temp_text_Variable__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator3, bpfv__Temp_text_Variable_3__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator4, bpfv__Temp_text_Variable_4__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator5, bpfv__Temp_text_Variable_5__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator6, bpfv__Temp_text_Variable_6__pf));
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeArray_Array__pf.SetNum(2, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf;
				bpfv__K2Node_MakeArray_Array__pf[1] = bpfv__K2Node_MakeStruct_FormatArgumentData__pf;
				bpfv__CallFunc_Format_ReturnValue__pf = UKismetTextLibrary::Format(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[03515508481A0947A23457BBE70812DA]\", \"A29B98804AEB1CEE36C07DBE28625358\", \"{BuildingMode} {ObjectName}\")")	), bpfv__K2Node_MakeArray_Array__pf);
				bpp__ReturnValue__pf = bpfv__CallFunc_Format_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 22:
			{
				if(::IsValid(bpv__BuildingComponent__pf))
				{
					bpv__BuildingComponent__pf->bpf__GetInteractionStatus__pf(/*out*/ bpfv__CallFunc_GetInteractionStatus_BuildingMode__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetActor__pf, /*out*/ bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf);
				}
				bpfv__LocalBuildingObject__pf = bpfv__CallFunc_GetInteractionStatus_TargetBuildingObject__pf;
				__CurrentState = 19;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_IsCanInteract_BPI_Result__pf = false;
				__CurrentState = 11;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_GetInteractionText_BPI_InteractionText__pf = FText::GetEmpty();
				__CurrentState = 14;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void UUI_Mei_HUD_C__pf4215541020::bpf__UpdateResourceInformation__pf()
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	UBP_Mei_ResourcesComponent_C__pf1731449071* bpfv__CallFunc_GetComponentByClass_ReturnValue__pf{};
	float bpfv__CallFunc_GetResourceValue_Value__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__ResourceComponent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__ResourceComponent__pf))
				{
					bpv__ResourceComponent__pf->bpf__GetResourceValue__pf(E__E_Mei_ResourceType__pf::NewEnumerator0, /*out*/ bpfv__CallFunc_GetResourceValue_Value__pf);
				}
				if(::IsValid(bpv__WoodValue__pf))
				{
					bpv__WoodValue__pf->bpf__SetResourceValue__pf(bpfv__CallFunc_GetResourceValue_Value__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue__pf = CastChecked<UBP_Mei_ResourcesComponent_C__pf1731449071>(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->AActor::GetComponentByClass(UBP_Mei_ResourcesComponent_C__pf1731449071::StaticClass()), ECastCheckedType::NullAllowed);
				}
				bpv__ResourceComponent__pf = bpfv__CallFunc_GetComponentByClass_ReturnValue__pf;
				__CurrentState = 2;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_HUD_C__pf4215541020::bpf__SetBuildingComponentReference__pf(UBP_Mei_BuildingComponent_C__pf1731449071* bpp__BuildingComponent__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__BuildingComponent__pf = bpp__BuildingComponent__pf;
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__BuildingComponent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 3;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__InteractionComponent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				RemoveFromParent();
			}
		case 5:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Hello")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_HUD_C__pf4215541020::bpf__SetInteractionComponentReference__pf(UBP_Mei_InteractionComponent_C__pf1731449071* bpp__InteractionComponent__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__InteractionComponent__pf = bpp__InteractionComponent__pf;
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__InteractionComponent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 3;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__BuildingComponent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				RemoveFromParent();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_HUD_C__pf4215541020::bpf__BindxBuildingxMessagexReceived__pfTTT(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, bool bpp__InteractionResult__pf, const FText& bpp__Message__pf__const)
{
	typedef FText  T__Local__487;
	T__Local__487& bpp__Message__pf = *const_cast<T__Local__487 *>(&bpp__Message__pf__const);
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpp__InteractionResult__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__ErrorMessageText__pf))
				{
					bpv__ErrorMessageText__pf->SetText(bpp__Message__pf);
				}
			}
		case 3:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__ShowErrorMessageAnimation__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_HUD_C__pf4215541020::bpf__ShowMalletMenu__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__BuildingObject__pf)
{
	bool bpfv__CallFunc_IsVisible_ReturnValue__pf{};
	bool bpfv__CallFunc_IsVisible_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsVisible_ReturnValue__pf = UWidget::IsVisible();
				bpfv__CallFunc_IsVisible_ReturnValue_1__pf = UWidget::IsVisible();
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_IsVisible_ReturnValue__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_IsVisible_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_HUD_C__pf4215541020::bpf__HideMalletMenu__pf()
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	bool bpfv__CallFunc_IsVisible_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__MalletMenu__pf))
				{
					bpfv__CallFunc_IsVisible_ReturnValue__pf = bpv__MalletMenu__pf->UWidget::IsVisible();
				}
				if (!bpfv__CallFunc_IsVisible_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__MalletMenu__pf))
				{
					bpv__MalletMenu__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 3:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->AController::K2_GetPawn();
				}
				if(::IsValid(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue__pf->EnableInput(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
				}
			}
		case 4:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				bool  __Local__488 = false;
				if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf))
				{
					bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->bShowMouseCursor = ((::IsValid(bpv__BuildingComponent__pf)) ? (bpv__BuildingComponent__pf->bpv__TraceToMouseMode__pf) : (__Local__488));
				}
			}
		case 5:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				UWidgetBlueprintLibrary::SetInputMode_GameOnly(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
			}
		case 6:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__FadeBorderAnimation__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000, false);
			}
		case 7:
			{
				UGameplayStatics::PlaySound2D(this, bpv__HideMenuSound__pf, 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_HUD_C__pf4215541020::bpf__UpdateInteractionSlots__pf()
{
	E__E_Mei_InteractionType__pf bpfv__Temp_byte_Variable__pf{};
	UUI_Mei_InteractionSlot_C__pf4215541020* bpfv__Temp_object_Variable__pf{};
	bool bpfv__CallFunc_SetSelection_Success__pf{};
	E__E_Mei_InteractionType__pf bpfv__CallFunc_GetInteractionStance_InteractionStance__pf{};
	UUI_Mei_InteractionSlot_C__pf4215541020* bpfv__K2Node_Select_Default__pf{};
	bool bpfv__CallFunc_SetSelection_Success_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__InteractionSlotHachet__pf))
				{
					bpv__InteractionSlotHachet__pf->bpf__SetSelection__pf(false, /*out*/ bpfv__CallFunc_SetSelection_Success__pf);
				}
				if(::IsValid(bpv__InteractionSlotPickaxe__pf))
				{
					bpv__InteractionSlotPickaxe__pf->bpf__SetSelection__pf(false, /*out*/ bpfv__CallFunc_SetSelection_Success__pf);
				}
				if(::IsValid(bpv__InteractionslotMallet__pf))
				{
					bpv__InteractionslotMallet__pf->bpf__SetSelection__pf(false, /*out*/ bpfv__CallFunc_SetSelection_Success__pf);
				}
			}
		case 2:
			{
				bpfv__Temp_object_Variable__pf = ((UUI_Mei_InteractionSlot_C__pf4215541020*)nullptr);
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpv__InteractionComponent__pf->bpf__GetInteractionStance__pf(/*out*/ bpfv__CallFunc_GetInteractionStance_InteractionStance__pf);
				}
				bpfv__Temp_byte_Variable__pf = bpfv__CallFunc_GetInteractionStance_InteractionStance__pf;
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(TSwitchValue<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(E__E_Mei_InteractionType__pf::NewEnumerator0, bpfv__Temp_object_Variable__pf), TSwitchPair<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(E__E_Mei_InteractionType__pf::NewEnumerator1, bpv__InteractionSlotHachet__pf), TSwitchPair<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(E__E_Mei_InteractionType__pf::NewEnumerator2, bpv__InteractionSlotPickaxe__pf), TSwitchPair<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(E__E_Mei_InteractionType__pf::NewEnumerator3, bpv__InteractionslotMallet__pf)));
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpfv__Temp_object_Variable__pf = ((UUI_Mei_InteractionSlot_C__pf4215541020*)nullptr);
				if(::IsValid(bpv__InteractionComponent__pf))
				{
					bpv__InteractionComponent__pf->bpf__GetInteractionStance__pf(/*out*/ bpfv__CallFunc_GetInteractionStance_InteractionStance__pf);
				}
				bpfv__Temp_byte_Variable__pf = bpfv__CallFunc_GetInteractionStance_InteractionStance__pf;
				if(::IsValid(TSwitchValue<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(E__E_Mei_InteractionType__pf::NewEnumerator0, bpfv__Temp_object_Variable__pf), TSwitchPair<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(E__E_Mei_InteractionType__pf::NewEnumerator1, bpv__InteractionSlotHachet__pf), TSwitchPair<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(E__E_Mei_InteractionType__pf::NewEnumerator2, bpv__InteractionSlotPickaxe__pf), TSwitchPair<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(E__E_Mei_InteractionType__pf::NewEnumerator3, bpv__InteractionslotMallet__pf))))
				{
					TSwitchValue<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(E__E_Mei_InteractionType__pf::NewEnumerator0, bpfv__Temp_object_Variable__pf), TSwitchPair<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(E__E_Mei_InteractionType__pf::NewEnumerator1, bpv__InteractionSlotHachet__pf), TSwitchPair<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(E__E_Mei_InteractionType__pf::NewEnumerator2, bpv__InteractionSlotPickaxe__pf), TSwitchPair<E__E_Mei_InteractionType__pf , UUI_Mei_InteractionSlot_C__pf4215541020* >(E__E_Mei_InteractionType__pf::NewEnumerator3, bpv__InteractionslotMallet__pf))->bpf__SetSelection__pf(true, /*out*/ bpfv__CallFunc_SetSelection_Success_1__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
ESlateVisibility  UUI_Mei_HUD_C__pf4215541020::bpf__Bind_CrosshairVisibility__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	bool bpfv__CallFunc_IsVisible_ReturnValue__pf{};
	bool bpfv__CallFunc_IsVisible_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	bpfv__Temp_byte_Variable__pf = ESlateVisibility::Hidden;
	bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Visible;
	if(::IsValid(bpv__MalletMenu__pf))
	{
		bpfv__CallFunc_IsVisible_ReturnValue__pf = bpv__MalletMenu__pf->UWidget::IsVisible();
	}
	if(::IsValid(bpv__BuildingMenu__pf))
	{
		bpfv__CallFunc_IsVisible_ReturnValue_1__pf = bpv__BuildingMenu__pf->UWidget::IsVisible();
	}
	bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_IsVisible_ReturnValue_1__pf, bpfv__CallFunc_IsVisible_ReturnValue__pf);
	bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_BooleanOR_ReturnValue__pf;
	bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
	return bpp__ReturnValue__pf;
}
void UUI_Mei_HUD_C__pf4215541020::bpf__SetMousePositionToCenter__pf()
{
	FVector2D bpfv__CallFunc_GetViewportSize_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_Divide_Vector2DFloat_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector2D_X__pf{};
	float bpfv__CallFunc_BreakVector2D_Y__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_1__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bool  __Local__489 = false;
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(((::IsValid(bpv__BuildingComponent__pf)) ? (bpv__BuildingComponent__pf->bpv__TraceToMouseMode__pf) : (__Local__489)));
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetViewportSize_ReturnValue__pf = UWidgetLayoutLibrary::GetViewportSize(this);
				bpfv__CallFunc_Divide_Vector2DFloat_ReturnValue__pf = UKismetMathLibrary::Divide_Vector2DFloat(bpfv__CallFunc_GetViewportSize_ReturnValue__pf, 2.000000);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_Divide_Vector2DFloat_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector2D_X__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y__pf);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_BreakVector2D_Y__pf);
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_BreakVector2D_X__pf);
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf))
				{
					bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->APlayerController::SetMouseLocation(bpfv__CallFunc_FTrunc_ReturnValue_1__pf, bpfv__CallFunc_FTrunc_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void UUI_Mei_HUD_C__pf4215541020::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/UMG.ESlateVisibility 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UUI_Mei_HUD_C__pf4215541020::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{300, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_BuildingWidget.BPI_Mei_BuildingWidget_C 
		{322, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_InteractionWidget.BPI_Mei_InteractionWidget_C 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DataTable /Game/Mei/BP/BuildingSystem/DataTables/DT_Mei_BuildingObjects.DT_Mei_BuildingObjects 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{63, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{65, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Border 
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerController 
		{1, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Widget 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Pawn 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Controller 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{70, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetAnimation 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameplayStatics 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SoundBase 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ActorComponent 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/InputCore.Key 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EFormatArgumentType 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Texture2D 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMesh 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.ETextGender 
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.ProgressBar 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{59, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{60, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.VerticalBox 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AnimMontage 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Character 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EDrawDebugTrace 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.HUD 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MaterialInterface 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MeshComponent 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  NiagaraSystem /Game/Mei/VFX/BuildingSystem/Dummy/Dummy.Dummy 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DataTable 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Can_Build.MI_Can_Build 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_CanNot_Build.MI_CanNot_Build 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.ECollisionResponse 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerState 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Landscape.Landscape 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ApexDestruction.DestructibleComponent 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ApexDestruction.DestructibleActor 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ApexDestruction.DestructibleMesh 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Mei/Mesh/BuildingSystem/Structures/Dummy/SM_Dummy_Foundation.SM_Dummy_Foundation 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Dummy_Structures_Base.MI_Dummy_Structures_Base 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DamageType 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.TimelineComponent 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SaveGame 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{81, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{82, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CanvasPanel 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WrapBoxSlot 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WrapBox 
		{79, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Overlay 
		{317, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/BuildingSystem/UI_Mei_MenuSegment.UI_Mei_MenuSegment_C 
		{303, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_Player.BPI_Mei_Player_C 
		{323, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/Components/BP_Mei_InteractionComponent.BP_Mei_InteractionComponent_C 
		{310, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/Components/BP_Mei_BuildingComponent.BP_Mei_BuildingComponent_C 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/BuildingObject/Base/BP_Mei_Building_BaseObject.BP_Mei_Building_BaseObject_C 
		{320, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/BuildingSystem/UI_Mei_BuildingMenuSegment.UI_Mei_BuildingMenuSegment_C 
		{324, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/BuildingSystem/UI_Mei_MalletMenu.UI_Mei_MalletMenu_C 
		{325, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/BuildingSystem/UI_Mei_BuildingMenu.UI_Mei_BuildingMenu_C 
		{326, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/BuildingSystem/UI_Mei_InteractionSlot.UI_Mei_InteractionSlot_C 
		{327, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/Components/BP_Mei_ResourcesComponent.BP_Mei_ResourcesComponent_C 
		{318, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/BuildingSystem/UI_Mei_ResourceValue.UI_Mei_ResourceValue_C 
		{328, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_InteractionObject.BPI_Mei_InteractionObject_C 
		{311, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_Durability.BPI_Mei_Durability_C 
		{306, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/STR_Mei_BuildingObjectSettings.STR_Mei_BuildingObjectSettings 
		{329, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_InteractionType.E_Mei_InteractionType 
		{307, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_BuildingMode.E_Mei_BuildingMode 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UUI_Mei_HUD_C__pf4215541020
{
	FRegisterHelper__UUI_Mei_HUD_C__pf4215541020()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/UI/BuildingSystem/UI_Mei_HUD"), &UUI_Mei_HUD_C__pf4215541020::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UUI_Mei_HUD_C__pf4215541020 Instance;
};
FRegisterHelper__UUI_Mei_HUD_C__pf4215541020 FRegisterHelper__UUI_Mei_HUD_C__pf4215541020::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
