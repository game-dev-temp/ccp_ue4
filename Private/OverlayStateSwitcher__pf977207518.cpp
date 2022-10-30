#include "NativizedAssets.h"
#include "OverlayStateSwitcher__pf977207518.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
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
#include "Runtime/Engine/Classes/Engine/Font.h"
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
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
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
#include "Runtime/MovieScene/Public/MovieScene.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/UMG/Public/Components/WrapBoxSlot.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScrollBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SafeZoneSlot.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "OverlayStateButton__pf977207518.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UOverlayStateSwitcher_C__pf977207518::UOverlayStateSwitcher_C__pf977207518(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__MovablePanel__pf = nullptr;
	bpv__VerticalBox__pf = nullptr;
	bpv__OverlayStateButtons__pf = TArray<FOverlayStateButtonParams__pf977207518> ();
	bpv__NewOverlayState__pf = E__ALS_OverlayState__pf::NewEnumerator0;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UOverlayStateSwitcher_C__pf977207518::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UOverlayStateSwitcher_C__pf977207518::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/AdvancedLocomotionV4/Data/Enums/ALS_MovementState.ALS_MovementState")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/AdvancedLocomotionV4/Data/Enums/ALS_MovementAction.ALS_MovementAction")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/AdvancedLocomotionV4/Data/Enums/ALS_RotationMode.ALS_RotationMode")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/AdvancedLocomotionV4/Data/Enums/ALS_Gait.ALS_Gait")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/AdvancedLocomotionV4/Data/Enums/ALS_Stance.ALS_Stance")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/AdvancedLocomotionV4/Data/Enums/ALS_ViewMode.ALS_ViewMode")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/AdvancedLocomotionV4/Data/Enums/ALS_OverlayState.ALS_OverlayState")));
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_UALS_Character_BPI_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UALS_Character_BPI_C());
	extern UClass* Z_Construct_UClass_UALS_Camera_BPI_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UALS_Camera_BPI_C());
	InDynamicClass->ReferencedConvertedFields.Add(UOverlayStateButton_C__pf977207518::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FOverlayStateButtonParams__pf977207518();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FOverlayStateButtonParams__pf977207518());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(1);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_19"), (EObjectFlags)0x00280008);
	__Local__3->LayoutData.Offsets.Left = 960.000000f;
	__Local__3->LayoutData.Offsets.Top = 560.000000f;
	__Local__3->LayoutData.Offsets.Right = 50.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 50.000000f;
	__Local__3->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UCanvasPanel>(__Local__0, TEXT("MovablePanel"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(1);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__6->LayoutData.Offsets.Left = 200.000000f;
	__Local__6->LayoutData.Offsets.Right = 0.000000f;
	__Local__6->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__6->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__6->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__6->bAutoSize = true;
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UVerticalBox>(__Local__0, TEXT("VerticalBox"), (EObjectFlags)0x00280008);
	__Local__7->Slot = __Local__6;
	__Local__7->bIsVariable = true;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	__Local__4->Slot = __Local__3;
	__Local__4->bIsVariable = true;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UOverlayStateSwitcher_C__pf977207518::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__8;
	SlotNames.Append(__Local__8);
}
void UOverlayStateSwitcher_C__pf977207518::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__9;
	TArray<FDelegateRuntimeBinding>  __Local__10;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UOverlayStateSwitcher_C__pf977207518::StaticClass())->MiscConvertedSubobjects[0]), __Local__9, __Local__10);
}
void UOverlayStateSwitcher_C__pf977207518::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UOverlayStateSwitcher_C__pf977207518::bpf__ExecuteUbergraph_OverlayStateSwitcher__pf_0(int32 bpp__EntryPoint__pf)
{
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue_2__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue_3__pf{};
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 19:
			{
				__CurrentState = 20;
				break;
			}
		case 20:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue_3__pf = GetOwningPlayer();
				if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue_3__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue_2__pf = bpfv__CallFunc_GetOwningPlayer_ReturnValue_3__pf->AController::K2_GetPawn();
				}
				if ( bpfv__CallFunc_K2_GetPawn_ReturnValue_2__pf && bpfv__CallFunc_K2_GetPawn_ReturnValue_2__pf->GetClass()->ImplementsInterface(UALS_Camera_BPI_C::StaticClass()) )
				{
					b0l__K2Node_DynamicCast_AsALS_Camera_BPI__pf.SetObject(bpfv__CallFunc_K2_GetPawn_ReturnValue_2__pf);
					void* IAddress = bpfv__CallFunc_K2_GetPawn_ReturnValue_2__pf->GetInterfaceAddress(UALS_Camera_BPI_C::StaticClass());
					b0l__K2Node_DynamicCast_AsALS_Camera_BPI__pf.SetInterface(IAddress);
				}
				else
				{
					b0l__K2Node_DynamicCast_AsALS_Camera_BPI__pf.SetObject(nullptr);
				}
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsALS_Camera_BPI__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 21:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsALS_Camera_BPI__pf))
				{
					b0l__CallFunc_BPI_Get_3P_PivotTarget_ReturnValue__pf = IALS_Camera_BPI_C::Execute_bpf__BPI_Get_3P_PivotTarget__pf(b0l__K2Node_DynamicCast_AsALS_Camera_BPI__pf.GetObject() );
				}
			}
		case 22:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__MovablePanel__pf);
				bpfv__CallFunc_GetOwningPlayer_ReturnValue_2__pf = GetOwningPlayer();
				UKismetMathLibrary::BreakTransform(b0l__CallFunc_BPI_Get_3P_PivotTarget_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakTransform_Location__pf, /*out*/ b0l__CallFunc_BreakTransform_Rotation__pf, /*out*/ b0l__CallFunc_BreakTransform_Scale__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(b0l__CallFunc_BreakTransform_Location__pf, FVector(0.000000,0.000000,100.000000));
				bpfv__CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue__pf = UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(bpfv__CallFunc_GetOwningPlayer_ReturnValue_2__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, /*out*/ b0l__CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition__pf, false);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetPosition(b0l__CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				b0l__CallFunc_BPI_Get_3P_PivotTarget_ReturnValue__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				__CurrentState = 22;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOverlayStateSwitcher_C__pf977207518::bpf__ExecuteUbergraph_OverlayStateSwitcher__pf_1(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->AController::K2_GetPawn();
				}
				if ( bpfv__CallFunc_K2_GetPawn_ReturnValue__pf && bpfv__CallFunc_K2_GetPawn_ReturnValue__pf->GetClass()->ImplementsInterface(UALS_Character_BPI_C::StaticClass()) )
				{
					b0l__K2Node_DynamicCast_AsALS_Character_BPI__pf.SetObject(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_K2_GetPawn_ReturnValue__pf->GetInterfaceAddress(UALS_Character_BPI_C::StaticClass());
					b0l__K2Node_DynamicCast_AsALS_Character_BPI__pf.SetInterface(IAddress);
				}
				else
				{
					b0l__K2Node_DynamicCast_AsALS_Character_BPI__pf.SetObject(nullptr);
				}
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsALS_Character_BPI__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsALS_Character_BPI__pf))
				{
					IALS_Character_BPI_C::Execute_bpf__BPI_Get_CurrentStates__pf(b0l__K2Node_DynamicCast_AsALS_Character_BPI__pf.GetObject() , /*out*/ b0l__CallFunc_BPI_Get_CurrentStates_PawnMovementMode__pf, /*out*/ b0l__CallFunc_BPI_Get_CurrentStates_MovementState__pf, /*out*/ b0l__CallFunc_BPI_Get_CurrentStates_PrevMovementState__pf, /*out*/ b0l__CallFunc_BPI_Get_CurrentStates_MovementAction__pf, /*out*/ b0l__CallFunc_BPI_Get_CurrentStates_RotationMode__pf, /*out*/ b0l__CallFunc_BPI_Get_CurrentStates_ActualGait__pf, /*out*/ b0l__CallFunc_BPI_Get_CurrentStates_ActualStance__pf, /*out*/ b0l__CallFunc_BPI_Get_CurrentStates_ViewMode__pf, /*out*/ b0l__CallFunc_BPI_Get_CurrentStates_OverlayState__pf);
				}
			}
		case 4:
			{
				bpv__NewOverlayState__pf = b0l__CallFunc_BPI_Get_CurrentStates_OverlayState__pf;
			}
		case 5:
			{
				bpf__CreateButtons__pf();
			}
		case 6:
			{
				bpf__UpdateButtonFocus__pf();
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				b0l__CallFunc_BPI_Get_CurrentStates_PawnMovementMode__pf = EMovementMode::MOVE_None;
			}
		case 8:
			{
				b0l__CallFunc_BPI_Get_CurrentStates_MovementState__pf = E__ALS_MovementState__pf::NewEnumerator0;
			}
		case 9:
			{
				b0l__CallFunc_BPI_Get_CurrentStates_PrevMovementState__pf = E__ALS_MovementState__pf::NewEnumerator0;
			}
		case 10:
			{
				b0l__CallFunc_BPI_Get_CurrentStates_MovementAction__pf = E__ALS_MovementAction__pf::NewEnumerator4;
			}
		case 11:
			{
				b0l__CallFunc_BPI_Get_CurrentStates_RotationMode__pf = E__ALS_RotationMode__pf::NewEnumerator0;
			}
		case 12:
			{
				b0l__CallFunc_BPI_Get_CurrentStates_ActualGait__pf = E__ALS_Gait__pf::NewEnumerator0;
			}
		case 13:
			{
				b0l__CallFunc_BPI_Get_CurrentStates_ActualStance__pf = E__ALS_Stance__pf::NewEnumerator0;
			}
		case 14:
			{
				b0l__CallFunc_BPI_Get_CurrentStates_ViewMode__pf = E__ALS_ViewMode__pf::NewEnumerator0;
			}
		case 15:
			{
				b0l__CallFunc_BPI_Get_CurrentStates_OverlayState__pf = E__ALS_OverlayState__pf::NewEnumerator0;
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOverlayStateSwitcher_C__pf977207518::bpf__ExecuteUbergraph_OverlayStateSwitcher__pf_2(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue_1__pf{};
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 16);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetOwningPlayer_ReturnValue_1__pf = GetOwningPlayer();
	if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue_1__pf))
	{
		bpfv__CallFunc_K2_GetPawn_ReturnValue_1__pf = bpfv__CallFunc_GetOwningPlayer_ReturnValue_1__pf->AController::K2_GetPawn();
	}
	if ( bpfv__CallFunc_K2_GetPawn_ReturnValue_1__pf && bpfv__CallFunc_K2_GetPawn_ReturnValue_1__pf->GetClass()->ImplementsInterface(UALS_Character_BPI_C::StaticClass()) )
	{
		b0l__K2Node_DynamicCast_AsALS_Character_BPI_1__pf.SetObject(bpfv__CallFunc_K2_GetPawn_ReturnValue_1__pf);
		void* IAddress = bpfv__CallFunc_K2_GetPawn_ReturnValue_1__pf->GetInterfaceAddress(UALS_Character_BPI_C::StaticClass());
		b0l__K2Node_DynamicCast_AsALS_Character_BPI_1__pf.SetInterface(IAddress);
	}
	else
	{
		b0l__K2Node_DynamicCast_AsALS_Character_BPI_1__pf.SetObject(nullptr);
	}
	b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsALS_Character_BPI_1__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsALS_Character_BPI_1__pf))
	{
		IALS_Character_BPI_C::Execute_bpf__BPI_Set_OverlayState__pf(b0l__K2Node_DynamicCast_AsALS_Character_BPI_1__pf.GetObject() , bpv__NewOverlayState__pf);
	}
	return; // KCST_GotoReturn
}
void UOverlayStateSwitcher_C__pf977207518::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_OverlayStateSwitcher__pf_0(19);
}
void UOverlayStateSwitcher_C__pf977207518::bpf__SelectOverlayState__pf()
{
	bpf__ExecuteUbergraph_OverlayStateSwitcher__pf_2(16);
}
void UOverlayStateSwitcher_C__pf977207518::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_OverlayStateSwitcher__pf_1(1);
}
void UOverlayStateSwitcher_C__pf977207518::bpf__CreateButtons__pf()
{
	UOverlayStateButton_C__pf977207518* bpfv__Button__pf{};
	E__ALS_OverlayState__pf bpfv__EnumValue__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__Temp_int_Variable_1__pf{};
	uint8 bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue__pf{};
	uint8 bpfv__CallFunc_Conv_IntToByte_ReturnValue_1__pf{};
	uint8 bpfv__CallFunc_GetEnumeratorValueFromIndex_ReturnValue__pf{};
	int32 bpfv__CallFunc_Conv_ByteToInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf{};
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FOverlayStateButtonParams__pf977207518 bpfv__K2Node_MakeStruct_OverlayStateButtonParams__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	UVerticalBoxSlot* bpfv__CallFunc_AddChildToVerticalBox_ReturnValue__pf{};
	UOverlayStateButton_C__pf977207518* bpfv__CallFunc_Create_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Variable_1__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralInt(13);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Variable_1__pf, bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_Conv_IntToByte_ReturnValue_1__pf = UKismetMathLibrary::Conv_IntToByte(bpfv__Temp_int_Variable_1__pf);
				bpfv__CallFunc_GetEnumeratorValueFromIndex_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorValueFromIndex(CastChecked<UEnum>(CastChecked<UDynamicClass>(UOverlayStateSwitcher_C__pf977207518::StaticClass())->ReferencedConvertedFields[6]), bpfv__CallFunc_Conv_IntToByte_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_ByteToInt_ReturnValue__pf = UKismetMathLibrary::Conv_ByteToInt(bpfv__CallFunc_GetEnumeratorValueFromIndex_ReturnValue__pf);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Conv_ByteToInt_ReturnValue__pf;
			}
		case 5:
			{
				__StateStack.Push(12);
			}
		case 6:
			{
				bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf = UKismetMathLibrary::Conv_IntToByte(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_GetValidValue_ReturnValue__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UOverlayStateSwitcher_C__pf977207518::StaticClass())->ReferencedConvertedFields[6]), bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf);
				bpfv__EnumValue__pf = static_cast<E__ALS_OverlayState__pf>(bpfv__CallFunc_GetValidValue_ReturnValue__pf);
			}
		case 7:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UOverlayStateButton_C__pf977207518>(UWidgetBlueprintLibrary::Create(this, UOverlayStateButton_C__pf977207518::StaticClass(), bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 8:
			{
				bpfv__Button__pf = bpfv__CallFunc_Create_ReturnValue__pf;
			}
		case 9:
			{
				bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(UOverlayStateSwitcher_C__pf977207518::StaticClass())->ReferencedConvertedFields[6]), static_cast<uint8>(bpfv__EnumValue__pf));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf);
				if(::IsValid(bpfv__Button__pf) && ::IsValid(bpfv__Button__pf->bpv__Text__pf))
				{
					bpfv__Button__pf->bpv__Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__VerticalBox__pf))
				{
					bpfv__CallFunc_AddChildToVerticalBox_ReturnValue__pf = bpv__VerticalBox__pf->UVerticalBox::AddChildToVerticalBox(bpfv__Button__pf);
				}
			}
		case 11:
			{
				bpfv__K2Node_MakeStruct_OverlayStateButtonParams__pf.bpv__Widget_5_4F22C4EE49421E434A46FE9803893231__pf = bpfv__Button__pf;
				bpfv__K2Node_MakeStruct_OverlayStateButtonParams__pf.bpv__State_9_BAF3D4CC4EE0E7CCD650F3B4963A2A65__pf = bpfv__EnumValue__pf;
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__OverlayStateButtons__pf, bpfv__K2Node_MakeStruct_OverlayStateButtonParams__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable_1__pf, 1);
				bpfv__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UOverlayStateSwitcher_C__pf977207518::bpf__UpdateButtonFocus__pf()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FOverlayStateButtonParams__pf977207518 bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__OverlayStateButtons__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(8);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__OverlayStateButtons__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_Array_Get_Item__pf.bpv__Widget_5_4F22C4EE49421E434A46FE9803893231__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpv__OverlayStateButtons__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_Array_Get_Item__pf.bpv__State_9_BAF3D4CC4EE0E7CCD650F3B4963A2A65__pf), static_cast<uint8>(bpv__NewOverlayState__pf));
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf.bpv__Widget_5_4F22C4EE49421E434A46FE9803893231__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf.bpv__Widget_5_4F22C4EE49421E434A46FE9803893231__pf->bpf__SetVisualParameters__pf(bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UOverlayStateSwitcher_C__pf977207518::bpf__CycleState__pf(bool bpp__Up__pf)
{
	TArray<E__ALS_OverlayState__pf> bpfv__TempEnum__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__Temp_int_Variable_1__pf{};
	uint8 bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue__pf{};
	uint8 bpfv__CallFunc_Conv_IntToByte_ReturnValue_1__pf{};
	uint8 bpfv__CallFunc_GetEnumeratorValueFromIndex_ReturnValue__pf{};
	int32 bpfv__CallFunc_Conv_ByteToInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Variable_2__pf{};
	int32 bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Variable_3__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	E__ALS_OverlayState__pf bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Find_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_SelectInt_ReturnValue__pf{};
	E__ALS_OverlayState__pf bpfv__CallFunc_Array_Get_Item_1__pf{};
	int32 bpfv__CallFunc_Array_Find_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	int32 bpfv__CallFunc_SelectInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(9);
			}
		case 2:
			{
				FCustomThunkTemplates::Array_Clear(bpfv__TempEnum__pf);
			}
		case 3:
			{
				bpfv__Temp_int_Variable_1__pf = 0;
			}
		case 4:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralInt(13);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Variable_1__pf, bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 6:
			{
				bpfv__CallFunc_Conv_IntToByte_ReturnValue_1__pf = UKismetMathLibrary::Conv_IntToByte(bpfv__Temp_int_Variable_1__pf);
				bpfv__CallFunc_GetEnumeratorValueFromIndex_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorValueFromIndex(CastChecked<UEnum>(CastChecked<UDynamicClass>(UOverlayStateSwitcher_C__pf977207518::StaticClass())->ReferencedConvertedFields[6]), bpfv__CallFunc_Conv_IntToByte_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_ByteToInt_ReturnValue__pf = UKismetMathLibrary::Conv_ByteToInt(bpfv__CallFunc_GetEnumeratorValueFromIndex_ReturnValue__pf);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Conv_ByteToInt_ReturnValue__pf;
			}
		case 7:
			{
				__StateStack.Push(15);
			}
		case 8:
			{
				bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf = UKismetMathLibrary::Conv_IntToByte(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_GetValidValue_ReturnValue__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UOverlayStateSwitcher_C__pf977207518::StaticClass())->ReferencedConvertedFields[6]), bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf);
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpfv__TempEnum__pf, static_cast<E__ALS_OverlayState__pf>(bpfv__CallFunc_GetValidValue_ReturnValue__pf));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpf__UpdateButtonFocus__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				if (!bpp__Up__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 11:
			{
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(bpfv__TempEnum__pf);
				bpfv__CallFunc_Array_Find_ReturnValue__pf = FCustomThunkTemplates::Array_Find(bpfv__TempEnum__pf, bpv__NewOverlayState__pf);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__CallFunc_Array_Find_ReturnValue__pf, 0);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Find_ReturnValue__pf, 1);
				bpfv__CallFunc_SelectInt_ReturnValue__pf = UKismetMathLibrary::SelectInt(bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf);
				bpfv__Temp_int_Variable_3__pf = bpfv__CallFunc_SelectInt_ReturnValue__pf;
			}
		case 12:
			{
				FCustomThunkTemplates::Array_Get(bpfv__TempEnum__pf, bpfv__Temp_int_Variable_3__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpv__NewOverlayState__pf = bpfv__CallFunc_Array_Get_Item__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_Array_Find_ReturnValue_1__pf = FCustomThunkTemplates::Array_Find(bpfv__TempEnum__pf, bpv__NewOverlayState__pf);
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__CallFunc_Array_Find_ReturnValue_1__pf, 1);
				bpfv__CallFunc_Array_LastIndex_ReturnValue_1__pf = FCustomThunkTemplates::Array_LastIndex(bpfv__TempEnum__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Array_Find_ReturnValue_1__pf, bpfv__CallFunc_Array_LastIndex_ReturnValue_1__pf);
				bpfv__CallFunc_SelectInt_ReturnValue_1__pf = UKismetMathLibrary::SelectInt(0, bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf);
				bpfv__Temp_int_Variable_2__pf = bpfv__CallFunc_SelectInt_ReturnValue_1__pf;
			}
		case 14:
			{
				FCustomThunkTemplates::Array_Get(bpfv__TempEnum__pf, bpfv__Temp_int_Variable_2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpv__NewOverlayState__pf = bpfv__CallFunc_Array_Get_Item_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable_1__pf, 1);
				bpfv__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void UOverlayStateSwitcher_C__pf977207518::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UOverlayStateSwitcher_C__pf977207518::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{81, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{198, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMovementMode 
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{82, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{604, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBoxSlot 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{60, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{274, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETraceTypeQuery 
		{296, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/AdvancedLocomotionV4/Blueprints/Interfaces/ALS_Character_BPI.ALS_Character_BPI_C 
		{282, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/AdvancedLocomotionV4/Blueprints/Interfaces/ALS_Camera_BPI.ALS_Camera_BPI_C 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/AdvancedLocomotionV4/Blueprints/UI/OverlayStateButton.OverlayStateButton_C 
		{605, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/AdvancedLocomotionV4/Blueprints/UI/OverlayStateButtonParams.OverlayStateButtonParams 
		{297, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/AdvancedLocomotionV4/Data/Enums/ALS_MovementState.ALS_MovementState 
		{292, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/AdvancedLocomotionV4/Data/Enums/ALS_MovementAction.ALS_MovementAction 
		{284, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/AdvancedLocomotionV4/Data/Enums/ALS_RotationMode.ALS_RotationMode 
		{293, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/AdvancedLocomotionV4/Data/Enums/ALS_Gait.ALS_Gait 
		{294, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/AdvancedLocomotionV4/Data/Enums/ALS_Stance.ALS_Stance 
		{295, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/AdvancedLocomotionV4/Data/Enums/ALS_ViewMode.ALS_ViewMode 
		{101, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/AdvancedLocomotionV4/Data/Enums/ALS_OverlayState.ALS_OverlayState 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UOverlayStateSwitcher_C__pf977207518
{
	FRegisterHelper__UOverlayStateSwitcher_C__pf977207518()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/AdvancedLocomotionV4/Blueprints/UI/OverlayStateSwitcher"), &UOverlayStateSwitcher_C__pf977207518::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UOverlayStateSwitcher_C__pf977207518 Instance;
};
FRegisterHelper__UOverlayStateSwitcher_C__pf977207518 FRegisterHelper__UOverlayStateSwitcher_C__pf977207518::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
