#include "NativizedAssets.h"
#include "BP_Mei_Building_BaseObject__pf2826203124.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
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
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
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
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
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
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
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
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "BP_Mei_DestructibleObject__pf2826203124.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Public/Net/NetPushModelHelpers.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
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
#include "BP_Mei_Library__pf3770675254.h"
#include "Runtime/Engine/Classes/Kismet/DataTableFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintMapLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "BPI_Mei_Player__pf685842786.h"
#include "BPI_Mei_Ownership__pf685842786.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Mei_Building_BaseObject_C__pf2826203124::ABP_Mei_Building_BaseObject_C__pf2826203124(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__DefaultSceneRoot__pf), false, 0));
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Mei_Building_BaseObject_C__pf2826203124::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Mei_Building_BaseObject_C__pf2826203124::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	static TWeakFieldPtr<FProperty> __Local__4{};
	const FProperty* __Local__3 = __Local__4.Get();
	if (nullptr == __Local__3)
	{
		__Local__3 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bReplicates")));
		check(__Local__3);
		__Local__4 = __Local__3;
	}
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMesh__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMesh__pf), true, 0));
	bpv__Timeline_1_NewTrack_0_2AF244574D17473D92C97A8C975F6F65__pf = 0.000000f;
	bpv__Timeline_1__Direction_2AF244574D17473D92C97A8C975F6F65__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_1__pf = nullptr;
	bpv__Timeline_0_NewTrack_0_E54F04AF4B11108681AFECBEF759C364__pf = 0.000000f;
	bpv__Timeline_0__Direction_E54F04AF4B11108681AFECBEF759C364__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_0__pf = nullptr;
	bpv__BuildingType__pf = E__E_Mei_BuildingType__pf::NewEnumerator0;
	bpv__BuildingObjectSettings__pf.bpv__Class_50_C92DE2774BF265E4423C7580CA026280__pf = GetClass();
	bpv__Built__pf = false;
	bpv__PlacedOnLandscape__pf = false;
	bpv__IsFloor__pf = false;
	bpv__SocketName__pf = FName();
	bpv__RotateAngle__pf = 0.000000f;
	bpv__Durability__pf = 0.000000f;
	bpv__MaxDurability__pf = 0.000000f;
	bpv__FloorNumber__pf = 1;
	bpv__SocketTransforms__pf = {};
	bpv__SaveID__pf = 0;
	bpv__ManualBuildTarget__pf = nullptr;
	bpv__ManualInputRotation__pf = 0.000000f;
	bpv__BuildSound__pf = nullptr;
	bpv__DestructSound__pf = nullptr;
	bpv__RepairSound__pf = nullptr;
	bpv__UpgradeSound__pf = nullptr;
	bpv__RotateSound__pf = nullptr;
	bpv__SnapSettings__pf = TArray<FSTR_Mei_SnapSettings__pf4030501756> ();
	bpv__IgnoredBuildingTypes__pf = TArray<E__E_Mei_BuildingType__pf> ();
	bpv__Material1__pf = nullptr;
	bReplicates = true;
	auto& __Local__5 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__5 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Mei_Building_BaseObject_C__pf2826203124::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Mei_Building_BaseObject_C__pf2826203124::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_ChangeVariableOperation.E_Mei_ChangeVariableOperation")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_BuildingType.E_Mei_BuildingType")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Mei_DestructibleObject_C__pf2826203124::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UBP_Mei_Library_C__pf3770675254::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_Mei_Player_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_Player_C());
	extern UClass* Z_Construct_UClass_UBPI_Mei_Ownership_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_Ownership_C());
	extern UClass* Z_Construct_UClass_UBPI_Mei_Durability_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_Durability_C());
	extern UClass* Z_Construct_UClass_UBPI_Mei_Floor_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_Floor_C());
	extern UClass* Z_Construct_UClass_UBPI_Mei_SaveObject_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_SaveObject_C());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_BuildingObjectSettings__pf4030501756();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_BuildingObjectSettings__pf4030501756());
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_SocketTransforms__pf4030501756();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_SocketTransforms__pf4030501756());
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_SnapSettings__pf4030501756();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_SnapSettings__pf4030501756());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__6 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_0_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__6);
	auto __Local__7 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_1_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__7);
	__Local__6->TimelineLength = 2.000000f;
	__Local__6->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__6->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__6->FloatTracks.GetData(), 1);
	auto& __Local__8 = __Local__6->FloatTracks[0];
	auto __Local__9 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__9);
	__Local__9->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__9->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__9->FloatCurve.Keys.GetData(), 2);
	auto& __Local__10 = __Local__9->FloatCurve.Keys[0];
	__Local__10.Value = 1.000000f;
	auto& __Local__11 = __Local__9->FloatCurve.Keys[1];
	__Local__11.Time = 2.000000f;
	__Local__8.CurveFloat = __Local__9;
	auto& __Local__12 = (*(AccessPrivateProperty<FName >(&(__Local__8), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__12 = FName(TEXT("Timeline_0_NewTrack_0_E54F04AF4B11108681AFECBEF759C364"));
	auto& __Local__13 = (*(AccessPrivateProperty<FName >(&(__Local__8), FTTTrackBase::__PPO__TrackName() )));
	__Local__13 = FName(TEXT("NewTrack_0"));
	__Local__6->TimelineGuid = FGuid(0xE54F04AF, 0x4B111086, 0x81AFECBE, 0xF759C364);
	auto& __Local__14 = (*(AccessPrivateProperty<FName >((__Local__6), UTimelineTemplate::__PPO__VariableName() )));
	__Local__14 = FName(TEXT("Timeline_0"));
	auto& __Local__15 = (*(AccessPrivateProperty<FName >((__Local__6), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__15 = FName(TEXT("Timeline_0__Direction_E54F04AF4B11108681AFECBEF759C364"));
	auto& __Local__16 = (*(AccessPrivateProperty<FName >((__Local__6), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__16 = FName(TEXT("Timeline_0__UpdateFunc"));
	auto& __Local__17 = (*(AccessPrivateProperty<FName >((__Local__6), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__17 = FName(TEXT("Timeline_0__FinishedFunc"));
	__Local__7->TimelineLength = 1.500000f;
	__Local__7->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__7->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__7->FloatTracks.GetData(), 1);
	auto& __Local__18 = __Local__7->FloatTracks[0];
	auto __Local__19 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0_1"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__19);
	__Local__19->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__19->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__19->FloatCurve.Keys.GetData(), 2);
	auto& __Local__20 = __Local__19->FloatCurve.Keys[0];
	__Local__20.Value = 1.000000f;
	auto& __Local__21 = __Local__19->FloatCurve.Keys[1];
	__Local__21.Time = 1.500000f;
	__Local__18.CurveFloat = __Local__19;
	auto& __Local__22 = (*(AccessPrivateProperty<FName >(&(__Local__18), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__22 = FName(TEXT("Timeline_1_NewTrack_0_2AF244574D17473D92C97A8C975F6F65"));
	auto& __Local__23 = (*(AccessPrivateProperty<FName >(&(__Local__18), FTTTrackBase::__PPO__TrackName() )));
	__Local__23 = FName(TEXT("NewTrack_0"));
	__Local__7->TimelineGuid = FGuid(0x2AF24457, 0x4D17473D, 0x92C97A8C, 0x975F6F65);
	auto& __Local__24 = (*(AccessPrivateProperty<FName >((__Local__7), UTimelineTemplate::__PPO__VariableName() )));
	__Local__24 = FName(TEXT("Timeline_1"));
	auto& __Local__25 = (*(AccessPrivateProperty<FName >((__Local__7), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__25 = FName(TEXT("Timeline_1__Direction_2AF244574D17473D92C97A8C975F6F65"));
	auto& __Local__26 = (*(AccessPrivateProperty<FName >((__Local__7), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__26 = FName(TEXT("Timeline_1__UpdateFunc"));
	auto& __Local__27 = (*(AccessPrivateProperty<FName >((__Local__7), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__27 = FName(TEXT("Timeline_1__FinishedFunc"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_0(int32 bpp__EntryPoint__pf)
{
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 33);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__StaticMesh__pf))
	{
		bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, ((UMaterialInterface*)nullptr), FName(TEXT("None")));
	}
	// optimized KCST_UnconditionalGoto
	bpv__Material1__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf;
	if(::IsValid(bpv__Timeline_1__pf))
	{
		bpv__Timeline_1__pf->UTimelineComponent::Play();
	}
	return; // KCST_GotoReturn
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_HasAuthority_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 9:
			{
				if(::IsValid(bpv__Timeline_0__pf))
				{
					bpv__Timeline_0__pf->UTimelineComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				__CurrentState = 11;
				break;
			}
		case 11:
			{
				if(::IsValid(bpv__Material1__pf))
				{
					bpv__Material1__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Rate")), bpv__Timeline_1_NewTrack_0_2AF244574D17473D92C97A8C975F6F65__pf);
				}
			}
		case 12:
			{
				if (!bpv__Built__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 13:
			{
				bpf__CreateSocketTransforms__pf(/*out*/ b0l__CallFunc_CreateSocketTransforms_Success__pf);
			}
		case 14:
			{
				bpf__DestroyBuildComponents__pf(/*out*/ b0l__CallFunc_DestroyBuildComponents_Success__pf);
			}
		case 15:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__ManualBuildTarget__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 16:
			{
				bpf__CheckAndAttachToTarget__pf(bpv__ManualBuildTarget__pf, /*out*/ b0l__CallFunc_CheckAndAttachToTarget_Success__pf);
			}
		case 17:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, ((UMaterialInterface*)nullptr), FName(TEXT("None")));
				}
			}
		case 18:
			{
				bpv__Material1__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
				__CurrentState = 9;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_HasAuthority_ReturnValue__pf = AActor::HasAuthority();
				if (!bpfv__CallFunc_HasAuthority_ReturnValue__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 20:
			{
				bpf__SetStartBuildCollisionResponse__pf();
				__CurrentState = -1;
				break;
			}
		case 21:
			{
				SetActorHiddenInGame(true);
				__CurrentState = 20;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 40);
	return; // KCST_GotoReturn
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 39);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Material1__pf))
	{
		bpv__Material1__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Rate")), 0.000000);
	}
	return; // KCST_GotoReturn
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 38);
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__Durability__pf, b0l__K2Node_Event_Damage__pf);
	bpv__Durability__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 12, FName(TEXT("Durability")));
	bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__Durability__pf, 0.000000);
	if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpf__CompleteRemove__pf(((APlayerController*)nullptr), true, /*out*/ b0l__CallFunc_CompleteRemove_Success__pf);
	return; // KCST_GotoReturn
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_5(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	ABP_Mei_DestructibleObject_C__pf2826203124* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__StaticMesh__pf))
	{
		bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__StaticMesh__pf->USceneComponent::K2_GetComponentToWorld();
	}
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_Mei_DestructibleObject_C__pf2826203124::StaticClass(), bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
	UBP_Mei_Library_C__pf3770675254::bpf__GetGlobalDestructChunksLifeTime__pf(this, /*out*/ b0l__CallFunc_GetGlobalDestructChunksLifeTime_StepValue__pf);
	UKismetSystemLibrary::SetFloatPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("TimeRemaining")), b0l__CallFunc_GetGlobalDestructChunksLifeTime_StepValue__pf);
	if(::IsValid(bpv__StaticMesh__pf))
	{
		bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__StaticMesh__pf->USceneComponent::K2_GetComponentToWorld();
	}
	bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_Mei_DestructibleObject_C__pf2826203124>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf), ECastCheckedType::NullAllowed);
	return; // KCST_GotoReturn
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_6(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 35);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf = AActor::K2_GetActorLocation();
	UGameplayStatics::PlaySoundAtLocation(this, bpv__RotateSound__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), ((AActor*)nullptr));
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__RotateAngle__pf);
	AActor::K2_AddActorWorldRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf, false);
	return; // KCST_GotoReturn
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_7(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 31);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf = AActor::K2_GetActorLocation();
	UGameplayStatics::PlaySoundAtLocation(this, bpv__UpgradeSound__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), ((AActor*)nullptr));
	return; // KCST_GotoReturn
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_8(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 29);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf = AActor::K2_GetActorLocation();
	UGameplayStatics::PlaySoundAtLocation(this, bpv__RepairSound__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), ((AActor*)nullptr));
	return; // KCST_GotoReturn
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_9(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 28);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
	UGameplayStatics::PlaySoundAtLocation(this, bpv__BuildSound__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), ((AActor*)nullptr));
	return; // KCST_GotoReturn
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	return; // KCST_GotoReturn
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf)
{
	typedef UDamageType*  T__Local__28;
	T__Local__28& bpp__DamageType__pf = *const_cast<T__Local__28 *>(&bpp__DamageType__pf__const);
	b0l__K2Node_Event_Damage__pf = bpp__Damage__pf;
	b0l__K2Node_Event_DamageType__pf = bpp__DamageType__pf;
	b0l__K2Node_Event_InstigatedBy__pf = bpp__InstigatedBy__pf;
	b0l__K2Node_Event_DamageCauser__pf = bpp__DamageCauser__pf;
	bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_4(38);
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CompleteRotatexxMulticastx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_6(35);
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_0(33);
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CompleteUpgradexxMulticastx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_7(31);
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CompleteRepairxxMulticastx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_8(29);
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CompleteBuildxxMulticastx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_9(28);
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CompleteDestructionxxMulticastx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_5(23);
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__Timeline_1__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_1(10);
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__Timeline_1__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_10(8);
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__Timeline_0__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_3(39);
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__Timeline_0__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_2(40);
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__UserConstructionScript__pf()
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_TransformTransform_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_HasAuthority_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	FSTR_Mei_BuildingObjectSettings__pf4030501756 bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(const_cast<UDataTable*>(bpv__BuildingObjectHandle__pf.DataTable));
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf = FCustomThunkTemplates::GetDataTableRowFromName(const_cast<UDataTable*>(bpv__BuildingObjectHandle__pf.DataTable), bpv__BuildingObjectHandle__pf.RowName, /*out*/ bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf);
			}
		case 3:
			{
				if (!bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				bpv__BuildingObjectSettings__pf = bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf;
			}
		case 5:
			{
				bpfv__CallFunc_HasAuthority_ReturnValue__pf = AActor::HasAuthority();
				if (!bpfv__CallFunc_HasAuthority_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				AActor::FlushNetDormancy();
			}
		case 7:
			{
				bpv__MaxDurability__pf = bpv__BuildingObjectSettings__pf.bpv__MaxDurability_23_DDC221224D1587C830829C834AE458BF__pf;
			}
		case 8:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 13, FName(TEXT("MaxDurability")));
			}
		case 9:
			{
				AActor::FlushNetDormancy();
			}
		case 10:
			{
				bpv__Durability__pf = bpv__MaxDurability__pf;
			}
		case 11:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 12, FName(TEXT("Durability")));
			}
		case 12:
			{
				AActor::FlushNetDormancy();
			}
		case 13:
			{
				static TWeakFieldPtr<FProperty> __Local__30{};
				const FProperty* __Local__29 = __Local__30.Get();
				if (nullptr == __Local__29)
				{
					__Local__29 = (AActor::StaticClass())->FindPropertyByName(FName(TEXT("bCanBeDamaged")));
					check(__Local__29);
					__Local__30 = __Local__29;
				}
				(((FBoolProperty*)__Local__29)->SetPropertyValue_InContainer((this), bpv__BuildingObjectSettings__pf.bpv__CanBeDamaged_26_0C6B61794AA45C3393316D9A6007AEFD__pf, 0));
			}
		case 14:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 3, FName(TEXT("bCanBeDamaged")));
			}
		case 15:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__BuildingObjectSettings__pf.bpv__StaticMesh_17_86E561D94DB8DEB8F857AA8347690B7C__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 16:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpv__StaticMesh__pf->SetStaticMesh(bpv__BuildingObjectSettings__pf.bpv__StaticMesh_17_86E561D94DB8DEB8F857AA8347690B7C__pf);
				}
			}
		case 17:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_EqualEqual_TransformTransform_ReturnValue__pf = UKismetMathLibrary::EqualEqual_TransformTransform(bpv__BuildingObjectSettings__pf.bpv__CorrectMeshTransform_31_80BA9B8C4687377A1AF79884C6766444__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_EqualEqual_TransformTransform_ReturnValue__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 18:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpv__StaticMesh__pf->USceneComponent::K2_SetRelativeTransform(bpv__BuildingObjectSettings__pf.bpv__CorrectMeshTransform_31_80BA9B8C4687377A1AF79884C6766444__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf, true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CheckAndAttachToTarget__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf)
{
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_SetFloorNumberByTargetActor_Success__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf = Cast<ABP_Mei_Building_BaseObject_C__pf2826203124>(bpp__TargetActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpf__SetFloorNumberByTargetActor__pf(bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf, /*out*/ bpfv__CallFunc_SetFloorNumberByTargetActor_Success__pf);
			}
		case 3:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CheckBuildStatus__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__CanBeBuilt__pf)
{
	int32 bpfv__LocalCount__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	TArray<AActor*> bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf{};
	bool bpfv__CallFunc_CheckSupport_HasSupport__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_ActorIsLandscape_Result__pf{};
	bool bpfv__CallFunc_CheckBuildCollisions_NotBlocked__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__CheckSupport__pf(/*out*/ bpfv__CallFunc_CheckSupport_HasSupport__pf);
			}
		case 2:
			{
				if (!bpfv__CallFunc_CheckSupport_HasSupport__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 3:
			{
				(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, ((UClass*)nullptr));
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf);
				bpfv__LocalCount__pf = bpfv__CallFunc_Array_Length_ReturnValue_1__pf;
			}
		case 4:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 6:
			{
				(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, ((UClass*)nullptr));
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 7:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 8:
			{
				__StateStack.Push(13);
			}
		case 9:
			{
				(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, ((UClass*)nullptr));
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				UBP_Mei_Library_C__pf3770675254::bpf__ActorIsLandscape__pf(bpfv__CallFunc_Array_Get_Item__pf, this, /*out*/ bpfv__CallFunc_ActorIsLandscape_Result__pf);
				if (!bpfv__CallFunc_ActorIsLandscape_Result__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__LocalCount__pf, 1);
				bpfv__LocalCount__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpp__CanBeBuilt__pf = false;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__LocalCount__pf, 0);
				bpp__CanBeBuilt__pf = bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 6;
				break;
			}
		case 14:
			{
				(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, ((UClass*)nullptr));
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpf__CheckBuildCollisions__pf(bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_CheckBuildCollisions_NotBlocked__pf);
				if (!bpfv__CallFunc_CheckBuildCollisions_NotBlocked__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 10;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CheckSnap__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__CanBeSnapped__pf)
{
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	FSTR_Mei_SnapSettings__pf4030501756 bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf = Cast<ABP_Mei_Building_BaseObject_C__pf2826203124>(bpp__TargetActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				TArray<FSTR_Mei_SnapSettings__pf4030501756>  __Local__31 = {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf)) ? (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf->bpv__SnapSettings__pf) : (__Local__31)));
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(10);
			}
		case 7:
			{
				TArray<FSTR_Mei_SnapSettings__pf4030501756>  __Local__32 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf)) ? (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf->bpv__SnapSettings__pf) : (__Local__32)), bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf = UKismetMathLibrary::EqualEqual_NameName(bpfv__CallFunc_Array_Get_Item__pf.bpv__SocketName_3_F1E0515947A2F307F2E20CB77D631178__pf, bpv__SocketName__pf);
				if (!bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				TArray<FSTR_Mei_SnapSettings__pf4030501756>  __Local__33 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf)) ? (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf->bpv__SnapSettings__pf) : (__Local__33)), bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf = UKismetMathLibrary::EqualEqual_NameName(bpfv__CallFunc_Array_Get_Item__pf.bpv__SocketName_3_F1E0515947A2F307F2E20CB77D631178__pf, bpv__SocketName__pf);
				bpp__CanBeSnapped__pf = bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpp__CanBeSnapped__pf = false;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__GetSnapTransform__pf(AActor* bpp__TargetActor__pf, float bpp__InputRotation__pf, FVector bpp__HitLocation__pf, bool bpp__GridMode__pf, bool bpp__SnapNear__pf, /*out*/ FTransform& bpp__ReturnTransform__pf)
{
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__LocalTargetObject__pf{};
	bool bpfv__LocalSnapNear__pf{};
	FVector bpfv__LocalHitLocation__pf(EForceInit::ForceInit);
	float bpfv__LocalInputRotation__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FTransform bpfv__CallFunc_GetNearestSocketTransform_ResultTransform__pf{};
	TArray<FTransform> bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	float bpfv__CallFunc_GetGlobalBuildingRotationStep_StepValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	FTransform bpfv__CallFunc_GetSocketTransform_Transform__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf = Cast<ABP_Mei_Building_BaseObject_C__pf2826203124>(bpp__TargetActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__LocalInputRotation__pf = bpp__InputRotation__pf;
			}
		case 3:
			{
				bpfv__LocalHitLocation__pf = bpp__HitLocation__pf;
			}
		case 4:
			{
				bpfv__LocalSnapNear__pf = bpp__SnapNear__pf;
			}
		case 5:
			{
				bpfv__LocalTargetObject__pf = bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf;
			}
		case 6:
			{
				if (!bpfv__LocalSnapNear__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 7:
			{
				if(::IsValid(bpfv__LocalTargetObject__pf))
				{
					bpfv__LocalTargetObject__pf->bpf__GetNearestSocketTransform__pf(bpfv__LocalHitLocation__pf, bpv__SocketName__pf, /*out*/ bpfv__CallFunc_GetNearestSocketTransform_ResultTransform__pf);
				}
				bpp__ReturnTransform__pf = bpfv__CallFunc_GetNearestSocketTransform_ResultTransform__pf;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf))
				{
					bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf->bpf__GetSocketTransforms__pf(bpv__SocketName__pf, /*out*/ bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf);
				}
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf);
				UBP_Mei_Library_C__pf3770675254::bpf__GetGlobalBuildingRotationStep__pf(this, /*out*/ bpfv__CallFunc_GetGlobalBuildingRotationStep_StepValue__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Array_Length_ReturnValue__pf, bpfv__CallFunc_GetGlobalBuildingRotationStep_StepValue__pf);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(bpfv__LocalInputRotation__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf, bpfv__CallFunc_GetGlobalBuildingRotationStep_StepValue__pf);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				if(::IsValid(bpfv__LocalTargetObject__pf))
				{
					bpfv__LocalTargetObject__pf->bpf__GetSocketTransform__pf(bpv__SocketName__pf, bpfv__CallFunc_FTrunc_ReturnValue__pf, /*out*/ bpfv__CallFunc_GetSocketTransform_Transform__pf);
				}
				bpp__ReturnTransform__pf = bpfv__CallFunc_GetSocketTransform_Transform__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CheckBuildCollisions__pf(AActor* bpp__Actor__pf, /*out*/ bool& bpp__NotBlocked__pf)
{
	AActor* bpfv__LocalActor__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_BuildingObjectInSocket_InSocket__pf{};
	bool bpfv__CallFunc_BuildingObjectInSocket_InSocket_1__pf{};
	TArray<UPrimitiveComponent*> bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	UPrimitiveComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_CheckActorCollisions_NotBlocked__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalActor__pf = bpp__Actor__pf;
			}
		case 2:
			{
				bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf = Cast<ABP_Mei_Building_BaseObject_C__pf2826203124>(bpfv__LocalActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpf__BuildingObjectInSocket__pf(bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf, /*out*/ bpfv__CallFunc_BuildingObjectInSocket_InSocket__pf);
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf))
				{
					bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf->bpf__BuildingObjectInSocket__pf(this, /*out*/ bpfv__CallFunc_BuildingObjectInSocket_InSocket_1__pf);
				}
				E__E_Mei_BuildingType__pf  __Local__34 = E__E_Mei_BuildingType__pf::NewEnumerator0;
				bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(bpv__IgnoredBuildingTypes__pf, ((::IsValid(bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf)) ? (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf->bpv__BuildingType__pf) : (__Local__34)));
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_Array_Contains_ReturnValue__pf, bpfv__CallFunc_BuildingObjectInSocket_InSocket_1__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue_1__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_BooleanOR_ReturnValue__pf, bpfv__CallFunc_BuildingObjectInSocket_InSocket__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue_1__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				bpp__NotBlocked__pf = true;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 7:
			{
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName(TEXT("BuildCollision")))).Get<UPrimitiveComponent*>();
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 8:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 9:
			{
				__StateStack.Push(11);
			}
		case 10:
			{
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName(TEXT("BuildCollision")))).Get<UPrimitiveComponent*>();
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpf__CheckActorCollisions__pf(bpfv__LocalActor__pf, bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_CheckActorCollisions_NotBlocked__pf);
				if (!bpfv__CallFunc_CheckActorCollisions_NotBlocked__pf)
				{
					__CurrentState = 12;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 7;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName(TEXT("BuildCollision")))).Get<UPrimitiveComponent*>();
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpf__CheckActorCollisions__pf(bpfv__LocalActor__pf, bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_CheckActorCollisions_NotBlocked__pf);
				bpp__NotBlocked__pf = bpfv__CallFunc_CheckActorCollisions_NotBlocked__pf;
				__CurrentState = -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CheckActorCollisions__pf(AActor* bpp__Actor__pf, UPrimitiveComponent* bpp__BuildCollision__pf, /*out*/ bool& bpp__NotBlocked__pf)
{
	TArray<UPrimitiveComponent*> bpfv__CallFunc_GetOverlappingComponents_OutOverlappingComponents__pf{};
	bool bpfv__CallFunc_ActorHasTag_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	UPrimitiveComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	AActor* bpfv__CallFunc_GetOwner_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	TEnumAsByte<ECollisionChannel> bpfv__CallFunc_GetCollisionObjectType_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	TEnumAsByte<ECollisionResponse> bpfv__CallFunc_GetCollisionResponseToChannel_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpp__Actor__pf))
				{
					bpfv__CallFunc_ActorHasTag_ReturnValue__pf = bpp__Actor__pf->AActor::ActorHasTag(FName(TEXT("BlockBuildingZone")));
				}
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_ActorHasTag_ReturnValue__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				if(::IsValid(bpp__BuildCollision__pf))
				{
					(bpfv__CallFunc_GetOverlappingComponents_OutOverlappingComponents__pf).Reset();
					bpp__BuildCollision__pf->UPrimitiveComponent::GetOverlappingComponents(/*out*/ bpfv__CallFunc_GetOverlappingComponents_OutOverlappingComponents__pf);
				}
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetOverlappingComponents_OutOverlappingComponents__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(12);
			}
		case 7:
			{
				if(::IsValid(bpp__BuildCollision__pf))
				{
					(bpfv__CallFunc_GetOverlappingComponents_OutOverlappingComponents__pf).Reset();
					bpp__BuildCollision__pf->UPrimitiveComponent::GetOverlappingComponents(/*out*/ bpfv__CallFunc_GetOverlappingComponents_OutOverlappingComponents__pf);
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingComponents_OutOverlappingComponents__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->UActorComponent::GetOwner();
				}
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpp__Actor__pf, bpfv__CallFunc_GetOwner_ReturnValue__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(bpp__BuildCollision__pf))
				{
					(bpfv__CallFunc_GetOverlappingComponents_OutOverlappingComponents__pf).Reset();
					bpp__BuildCollision__pf->UPrimitiveComponent::GetOverlappingComponents(/*out*/ bpfv__CallFunc_GetOverlappingComponents_OutOverlappingComponents__pf);
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingComponents_OutOverlappingComponents__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_GetCollisionObjectType_ReturnValue__pf = bpv__StaticMesh__pf->GetCollisionObjectType();
				}
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetCollisionResponseToChannel_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->GetCollisionResponseToChannel(bpfv__CallFunc_GetCollisionObjectType_ReturnValue__pf);
				}
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetCollisionResponseToChannel_ReturnValue__pf), static_cast<uint8>(ECollisionResponse::ECR_Block));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpp__NotBlocked__pf = false;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(::IsValid(bpp__Actor__pf))
				{
					bpfv__CallFunc_ActorHasTag_ReturnValue__pf = bpp__Actor__pf->AActor::ActorHasTag(FName(TEXT("BlockBuildingZone")));
				}
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_ActorHasTag_ReturnValue__pf);
				bpp__NotBlocked__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				bpp__NotBlocked__pf = true;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__SetStartBuildCollisionResponse__pf()
{
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__Temp_int_Variable_1__pf{};
	uint8 bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue__pf{};
	uint8 bpfv__CallFunc_Conv_IntToByte_ReturnValue_1__pf{};
	uint8 bpfv__CallFunc_GetEnumeratorValueFromIndex_ReturnValue__pf{};
	int32 bpfv__CallFunc_Conv_ByteToInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf{};
	TArray<UPrimitiveComponent*> bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	UPrimitiveComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
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
				bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::K2_GetComponentsByClass(UPrimitiveComponent::StaticClass())).Get<UPrimitiveComponent*>();
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
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
				__StateStack.Push(12);
			}
		case 6:
			{
				bpfv__Temp_int_Variable_1__pf = 0;
			}
		case 7:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 8:
			{
				bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralInt(33);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Variable_1__pf, bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_Conv_IntToByte_ReturnValue_1__pf = UKismetMathLibrary::Conv_IntToByte(bpfv__Temp_int_Variable_1__pf);
				bpfv__CallFunc_GetEnumeratorValueFromIndex_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorValueFromIndex(CastChecked<UEnum>(CastChecked<UDynamicClass>(ABP_Mei_Building_BaseObject_C__pf2826203124::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_IntToByte_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_ByteToInt_ReturnValue__pf = UKismetMathLibrary::Conv_ByteToInt(bpfv__CallFunc_GetEnumeratorValueFromIndex_ReturnValue__pf);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Conv_ByteToInt_ReturnValue__pf;
			}
		case 10:
			{
				__StateStack.Push(13);
			}
		case 11:
			{
				bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf = UKismetMathLibrary::Conv_IntToByte(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_GetValidValue_ReturnValue__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(ABP_Mei_Building_BaseObject_C__pf2826203124::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf);
				bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::K2_GetComponentsByClass(UPrimitiveComponent::StaticClass())).Get<UPrimitiveComponent*>();
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->SetCollisionResponseToChannel(static_cast<ECollisionChannel>(bpfv__CallFunc_GetValidValue_ReturnValue__pf), ECollisionResponse::ECR_Overlap);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 3;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable_1__pf, 1);
				bpfv__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 8;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__GetSnappedObjects__pf(/*out*/ TArray<ABP_Mei_Building_BaseObject_C__pf2826203124*>& bpp__OverlappingObjects__pf)
{
	TArray<ABP_Mei_Building_BaseObject_C__pf2826203124*> bpfv__LocalOverlappingObjects__pf{};
	TEnumAsByte<ECollisionResponse> bpfv__LocalResponce__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	TArray<AActor*> bpfv__Temp_object_Variable__pf{};
	TArray<TEnumAsByte<EObjectTypeQuery> > bpfv__K2Node_MakeArray_Array__pf{};
	FVector bpfv__CallFunc_GetActorBounds_Origin__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetActorBounds_BoxExtent__pf(EForceInit::ForceInit);
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	FVector bpfv__CallFunc_Add_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	TArray<FHitResult> bpfv__CallFunc_BoxTraceMultiForObjects_OutHits__pf{};
	bool bpfv__CallFunc_BoxTraceMultiForObjects_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_AddUnique_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalResponce__pf = ECollisionResponse::ECR_Ignore;
			}
		case 2:
			{
				bpfv__K2Node_MakeArray_Array__pf.SetNum(1, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery2;
				AActor::GetActorBounds(false, /*out*/ bpfv__CallFunc_GetActorBounds_Origin__pf, /*out*/ bpfv__CallFunc_GetActorBounds_BoxExtent__pf, false);
				bpfv__CallFunc_Add_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Add_VectorFloat(bpfv__CallFunc_GetActorBounds_BoxExtent__pf, 5.000000);
				(bpfv__CallFunc_BoxTraceMultiForObjects_OutHits__pf).Reset();
				bpfv__CallFunc_BoxTraceMultiForObjects_ReturnValue__pf = UKismetSystemLibrary::BoxTraceMultiForObjects(this, bpfv__CallFunc_GetActorBounds_Origin__pf, bpfv__CallFunc_GetActorBounds_Origin__pf, bpfv__CallFunc_Add_VectorFloat_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), bpfv__K2Node_MakeArray_Array__pf, false, bpfv__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ bpfv__CallFunc_BoxTraceMultiForObjects_OutHits__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 3:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_BoxTraceMultiForObjects_OutHits__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 7:
			{
				__StateStack.Push(11);
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_BoxTraceMultiForObjects_OutHits__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf = Cast<ABP_Mei_Building_BaseObject_C__pf2826203124>(bpfv__CallFunc_BreakHitResult_HitActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_Array_AddUnique_ReturnValue__pf = FCustomThunkTemplates::Array_AddUnique(bpfv__LocalOverlappingObjects__pf, bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpp__OverlappingObjects__pf = bpfv__LocalOverlappingObjects__pf;
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CheckSupport__pf(/*out*/ bool& bpp__HasSupport__pf)
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_1__pf{};
	TArray<ABP_Mei_Building_BaseObject_C__pf2826203124*> bpfv__CallFunc_GetSnappedObjects_OverlappingObjects__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	TArray<UPrimitiveComponent*> bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf{};
	bool bpfv__CallFunc_BuildingObjectInSocket_InSocket__pf{};
	UPrimitiveComponent* bpfv__CallFunc_Array_Get_Item_1__pf{};
	TArray<AActor*> bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf{};
	bool bpfv__CallFunc_ActorsHaveLandscape_Result__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__PlacedOnLandscape__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName(TEXT("SupportChecker")))).Get<UPrimitiveComponent*>();
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(19);
			}
		case 7:
			{
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName(TEXT("SupportChecker")))).Get<UPrimitiveComponent*>();
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpfv__CallFunc_Array_Get_Item_1__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, ((UClass*)nullptr));
				}
				UBP_Mei_Library_C__pf3770675254::bpf__ActorsHaveLandscape__pf(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, this, /*out*/ bpfv__CallFunc_ActorsHaveLandscape_Result__pf);
			}
		case 8:
			{
				if (!bpfv__CallFunc_ActorsHaveLandscape_Result__pf)
				{
					__CurrentState = 20;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpf__GetSnappedObjects__pf(/*out*/ bpfv__CallFunc_GetSnappedObjects_OverlappingObjects__pf);
			}
		case 10:
			{
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 11:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 12:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetSnappedObjects_OverlappingObjects__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 13:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 14:
			{
				__StateStack.Push(21);
			}
		case 15:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetSnappedObjects_OverlappingObjects__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->bpf__BuildingObjectInSocket__pf(this, /*out*/ bpfv__CallFunc_BuildingObjectInSocket_InSocket__pf);
				}
				if (!bpfv__CallFunc_BuildingObjectInSocket_InSocket__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetSnappedObjects_OverlappingObjects__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->bpf__BuildingObjectInSocket__pf(this, /*out*/ bpfv__CallFunc_BuildingObjectInSocket_InSocket__pf);
				}
				bpp__HasSupport__pf = bpfv__CallFunc_BuildingObjectInSocket_InSocket__pf;
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				bpp__HasSupport__pf = false;
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				bpp__HasSupport__pf = true;
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 20:
			{
				bpp__HasSupport__pf = false;
				__CurrentState = -1;
				break;
			}
		case 21:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 12;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__GetNearestTransform__pf(FVector bpp__Location__pf, /*out*/ TArray<FTransform>& bpp__Transforms__pf, /*out*/ FTransform& bpp__ResultTransform__pf)
{
	FTransform bpfv__LocalSelectedTransform__pf{};
	float bpfv__LocalSelectedLength__pf{};
	TArray<FTransform> bpfv__LocalTransforms__pf{};
	FVector bpfv__LocalLocation__pf(EForceInit::ForceInit);
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FTransform bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Array_IsValidIndex_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	FTransform bpfv__CallFunc_Array_Get_Item_1__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location_1__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_1__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalSelectedLength__pf = 0.000000;
			}
		case 2:
			{
				bpfv__LocalLocation__pf = bpp__Location__pf;
			}
		case 3:
			{
				bpfv__LocalTransforms__pf = bpp__Transforms__pf;
			}
		case 4:
			{
				bpfv__CallFunc_Array_IsValidIndex_ReturnValue__pf = FCustomThunkTemplates::Array_IsValidIndex(bpfv__LocalTransforms__pf, 0);
				if (!bpfv__CallFunc_Array_IsValidIndex_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				FCustomThunkTemplates::Array_Get(bpfv__LocalTransforms__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__LocalLocation__pf, bpfv__CallFunc_BreakTransform_Location__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__LocalSelectedLength__pf = bpfv__CallFunc_VSize_ReturnValue__pf;
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpfv__LocalTransforms__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__LocalSelectedTransform__pf = bpfv__CallFunc_Array_Get_Item__pf;
			}
		case 7:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 8:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 9:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__LocalTransforms__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 10:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 11:
			{
				__StateStack.Push(16);
			}
		case 12:
			{
				FCustomThunkTemplates::Array_Get(bpfv__LocalTransforms__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_Array_Get_Item_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_1__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__LocalLocation__pf, bpfv__CallFunc_BreakTransform_Location_1__pf);
				bpfv__CallFunc_VSize_ReturnValue_1__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_VSize_ReturnValue_1__pf, bpfv__LocalSelectedLength__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				FCustomThunkTemplates::Array_Get(bpfv__LocalTransforms__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_Array_Get_Item_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_1__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__LocalLocation__pf, bpfv__CallFunc_BreakTransform_Location_1__pf);
				bpfv__CallFunc_VSize_ReturnValue_1__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf);
				bpfv__LocalSelectedLength__pf = bpfv__CallFunc_VSize_ReturnValue_1__pf;
			}
		case 14:
			{
				FCustomThunkTemplates::Array_Get(bpfv__LocalTransforms__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__LocalSelectedTransform__pf = bpfv__CallFunc_Array_Get_Item_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpp__ResultTransform__pf = bpfv__LocalSelectedTransform__pf;
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 9;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__GetSocketTransform__pf(FName bpp__SocketName__pf, int32 bpp__Index__pf, /*out*/ FTransform& bpp__Transform__pf)
{
	TArray<FTransform> bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf{};
	bool bpfv__CallFunc_Array_IsValidIndex_ReturnValue__pf{};
	FTransform bpfv__CallFunc_Array_Get_Item__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__GetSocketTransforms__pf(bpp__SocketName__pf, /*out*/ bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf);
				bpfv__CallFunc_Array_IsValidIndex_ReturnValue__pf = FCustomThunkTemplates::Array_IsValidIndex(bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf, bpp__Index__pf);
				if (!bpfv__CallFunc_Array_IsValidIndex_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpf__GetSocketTransforms__pf(bpp__SocketName__pf, /*out*/ bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf);
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf, bpp__Index__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpp__Transform__pf = bpfv__CallFunc_Array_Get_Item__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__BuildingObjectInSocket__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf, /*out*/ bool& bpp__InSocket__pf)
{
	FVector bpfv__LocalLocation__pf(EForceInit::ForceInit);
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	TArray<USceneComponent*> bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf{};
	TArray<FTransform> bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf{};
	USceneComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_1__pf{};
	FTransform bpfv__CallFunc_Array_Get_Item_1__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_VectorVector_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_VectorVector_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalLocation__pf = FVector(0.000000,0.000000,0.000000);
			}
		case 2:
			{
				if(::IsValid(bpp__TargetObject__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpp__TargetObject__pf->AActor::K2_GetActorLocation();
				}
				bpfv__LocalLocation__pf = bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf;
			}
		case 3:
			{
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 5:
			{
				FName  __Local__35 = FName();
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(USceneComponent::StaticClass(), ((::IsValid(bpp__TargetObject__pf)) ? (bpp__TargetObject__pf->bpv__SocketName__pf) : (__Local__35)))).Get<USceneComponent*>();
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 7:
			{
				__StateStack.Push(18);
			}
		case 8:
			{
				FName  __Local__36 = FName();
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(USceneComponent::StaticClass(), ((::IsValid(bpp__TargetObject__pf)) ? (bpp__TargetObject__pf->bpv__SocketName__pf) : (__Local__36)))).Get<USceneComponent*>();
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_EqualEqual_VectorVector_ReturnValue__pf = UKismetMathLibrary::EqualEqual_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__LocalLocation__pf, 1.000000);
				if (!bpfv__CallFunc_EqualEqual_VectorVector_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				FName  __Local__37 = FName();
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(USceneComponent::StaticClass(), ((::IsValid(bpp__TargetObject__pf)) ? (bpp__TargetObject__pf->bpv__SocketName__pf) : (__Local__37)))).Get<USceneComponent*>();
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_EqualEqual_VectorVector_ReturnValue__pf = UKismetMathLibrary::EqualEqual_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__LocalLocation__pf, 1.000000);
				bpp__InSocket__pf = bpfv__CallFunc_EqualEqual_VectorVector_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 11:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 12:
			{
				FName  __Local__38 = FName();
				bpf__GetSocketTransforms__pf(((::IsValid(bpp__TargetObject__pf)) ? (bpp__TargetObject__pf->bpv__SocketName__pf) : (__Local__38)), /*out*/ bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 13:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 14:
			{
				__StateStack.Push(19);
			}
		case 15:
			{
				FName  __Local__39 = FName();
				bpf__GetSocketTransforms__pf(((::IsValid(bpp__TargetObject__pf)) ? (bpp__TargetObject__pf->bpv__SocketName__pf) : (__Local__39)), /*out*/ bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf);
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_Array_Get_Item_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				bpfv__CallFunc_EqualEqual_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_VectorVector(bpfv__CallFunc_BreakTransform_Location__pf, bpfv__LocalLocation__pf, 1.000000);
				if (!bpfv__CallFunc_EqualEqual_VectorVector_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				FName  __Local__40 = FName();
				bpf__GetSocketTransforms__pf(((::IsValid(bpp__TargetObject__pf)) ? (bpp__TargetObject__pf->bpv__SocketName__pf) : (__Local__40)), /*out*/ bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf);
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_Array_Get_Item_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				bpfv__CallFunc_EqualEqual_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_VectorVector(bpfv__CallFunc_BreakTransform_Location__pf, bpfv__LocalLocation__pf, 1.000000);
				bpp__InSocket__pf = bpfv__CallFunc_EqualEqual_VectorVector_ReturnValue_1__pf;
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				bpp__InSocket__pf = false;
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 5;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 12;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__GetFloorWorldZ__pf(/*out*/ float& bpp__ValueZ__pf)
{
	FTransform bpfv__CallFunc_GetSocketTransform_Transform__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	bpf__GetSocketTransform__pf(FName(TEXT("FloorSocket")), 0, /*out*/ bpfv__CallFunc_GetSocketTransform_Transform__pf);
	UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetSocketTransform_Transform__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpp__ValueZ__pf = bpfv__CallFunc_BreakVector_Z__pf;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CreateSocketTransforms__pf(/*out*/ bool& bpp__Success__pf)
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	FSTR_Mei_SocketTransforms__pf4030501756 bpfv__Temp_struct_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	FSTR_Mei_SnapSettings__pf4030501756 bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				FCustomThunkTemplates::Map_Clear(bpv__SocketTransforms__pf);
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__SnapSettings__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(9);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpv__SnapSettings__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				FCustomThunkTemplates::Map_Add(bpv__SocketTransforms__pf, bpfv__CallFunc_Array_Get_Item__pf.bpv__SocketName_3_F1E0515947A2F307F2E20CB77D631178__pf, bpfv__Temp_struct_Variable__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__DestroyBuildComponents__pf(/*out*/ bool& bpp__Success__pf)
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	TArray<UPrimitiveComponent*> bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf{};
	UPrimitiveComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
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
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName(TEXT("BuildComponent")))).Get<UPrimitiveComponent*>();
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf);
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
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName(TEXT("BuildComponent")))).Get<UPrimitiveComponent*>();
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 7:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
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
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CheckClaim__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Result__pf)
{
	bool bpfv__LocalNotClaimed__pf{};
	APlayerController* bpfv__LocalPlayer__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	TScriptInterface<IBPI_Mei_Ownership_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_GetOwnershipInfo_BPI_IsOwned__pf{};
	TArray<FString> bpfv__CallFunc_GetOwnershipInfo_BPI_OwnerNames__pf{};
	float bpfv__CallFunc_GetOwnershipInfo_BPI_OwnershipDistance__pf{};
	FString bpfv__CallFunc_GetPlayerID_PlayerID__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray<AActor*> bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf{};
	FString bpfv__CallFunc_GetPlayerID_PlayerID_1__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_Ownership_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_GetOwnershipInfo_BPI_IsOwned_1__pf{};
	TArray<FString> bpfv__CallFunc_GetOwnershipInfo_BPI_OwnerNames_1__pf{};
	float bpfv__CallFunc_GetOwnershipInfo_BPI_OwnershipDistance_1__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue_1__pf{};
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalNotClaimed__pf = true;
			}
		case 2:
			{
				bpfv__LocalPlayer__pf = bpp__PlayerController__pf;
			}
		case 3:
			{
				bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf = UKismetSystemLibrary::DoesImplementInterface(this, UBPI_Mei_Ownership_C::StaticClass());
				if (!bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 4:
			{
				if ( this->GetClass()->ImplementsInterface(UBPI_Mei_Ownership_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf.SetObject(this);
					void* IAddress = this->GetInterfaceAddress(UBPI_Mei_Ownership_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf))
				{
					IBPI_Mei_Ownership_C::Execute_bpf__GetOwnershipInfo_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf.GetObject() , /*out*/ bpfv__CallFunc_GetOwnershipInfo_BPI_IsOwned__pf, /*out*/ bpfv__CallFunc_GetOwnershipInfo_BPI_OwnerNames__pf, /*out*/ bpfv__CallFunc_GetOwnershipInfo_BPI_OwnershipDistance__pf);
				}
			}
		case 6:
			{
				if (!bpfv__CallFunc_GetOwnershipInfo_BPI_IsOwned__pf)
				{
					__CurrentState = 24;
					break;
				}
			}
		case 7:
			{
				UBP_Mei_Library_C__pf3770675254::bpf__GetPlayerID__pf(bpfv__LocalPlayer__pf, this, /*out*/ bpfv__CallFunc_GetPlayerID_PlayerID__pf);
				bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(bpfv__CallFunc_GetOwnershipInfo_BPI_OwnerNames__pf, bpfv__CallFunc_GetPlayerID_PlayerID__pf);
				bpp__Result__pf = bpfv__CallFunc_Array_Contains_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 9:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 10:
			{
				(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, ((UClass*)nullptr));
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 11:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 12:
			{
				__StateStack.Push(25);
			}
		case 13:
			{
				(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, ((UClass*)nullptr));
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_DoesImplementInterface_ReturnValue_1__pf = UKismetSystemLibrary::DoesImplementInterface(bpfv__CallFunc_Array_Get_Item__pf, UBPI_Mei_Ownership_C::StaticClass());
				if (!bpfv__CallFunc_DoesImplementInterface_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, ((UClass*)nullptr));
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if ( bpfv__CallFunc_Array_Get_Item__pf && bpfv__CallFunc_Array_Get_Item__pf->GetClass()->ImplementsInterface(UBPI_Mei_Ownership_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf.SetObject(bpfv__CallFunc_Array_Get_Item__pf);
					void* IAddress = bpfv__CallFunc_Array_Get_Item__pf->GetInterfaceAddress(UBPI_Mei_Ownership_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 15:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf))
				{
					IBPI_Mei_Ownership_C::Execute_bpf__GetOwnershipInfo_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf.GetObject() , /*out*/ bpfv__CallFunc_GetOwnershipInfo_BPI_IsOwned_1__pf, /*out*/ bpfv__CallFunc_GetOwnershipInfo_BPI_OwnerNames_1__pf, /*out*/ bpfv__CallFunc_GetOwnershipInfo_BPI_OwnershipDistance_1__pf);
				}
			}
		case 16:
			{
				if (!bpfv__CallFunc_GetOwnershipInfo_BPI_IsOwned_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				bpfv__LocalNotClaimed__pf = false;
			}
		case 18:
			{
				UBP_Mei_Library_C__pf3770675254::bpf__GetPlayerID__pf(bpfv__LocalPlayer__pf, this, /*out*/ bpfv__CallFunc_GetPlayerID_PlayerID_1__pf);
				bpfv__CallFunc_Array_Contains_ReturnValue_1__pf = FCustomThunkTemplates::Array_Contains(bpfv__CallFunc_GetOwnershipInfo_BPI_OwnerNames_1__pf, bpfv__CallFunc_GetPlayerID_PlayerID_1__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				UBP_Mei_Library_C__pf3770675254::bpf__GetPlayerID__pf(bpfv__LocalPlayer__pf, this, /*out*/ bpfv__CallFunc_GetPlayerID_PlayerID_1__pf);
				bpfv__CallFunc_Array_Contains_ReturnValue_1__pf = FCustomThunkTemplates::Array_Contains(bpfv__CallFunc_GetOwnershipInfo_BPI_OwnerNames_1__pf, bpfv__CallFunc_GetPlayerID_PlayerID_1__pf);
				bpp__Result__pf = bpfv__CallFunc_Array_Contains_ReturnValue_1__pf;
				__CurrentState = -1;
				break;
			}
		case 20:
			{
				bpp__Result__pf = bpfv__LocalNotClaimed__pf;
				__CurrentState = -1;
				break;
			}
		case 21:
			{
				bpfv__CallFunc_GetOwnershipInfo_BPI_IsOwned__pf = false;
			}
		case 22:
			{
				FCustomThunkTemplates::Array_Clear(bpfv__CallFunc_GetOwnershipInfo_BPI_OwnerNames__pf);
			}
		case 23:
			{
				bpfv__CallFunc_GetOwnershipInfo_BPI_OwnershipDistance__pf = 0.000000;
				__CurrentState = 6;
				break;
			}
		case 24:
			{
				bpp__Result__pf = true;
				__CurrentState = -1;
				break;
			}
		case 25:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 10;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_GetOwnershipInfo_BPI_IsOwned_1__pf = false;
			}
		case 27:
			{
				FCustomThunkTemplates::Array_Clear(bpfv__CallFunc_GetOwnershipInfo_BPI_OwnerNames_1__pf);
			}
		case 28:
			{
				bpfv__CallFunc_GetOwnershipInfo_BPI_OwnershipDistance_1__pf = 0.000000;
				__CurrentState = 16;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__SetFloorNumberByTargetActor__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpp__TargetActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 2:
			{
				bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf = Cast<ABP_Mei_Building_BaseObject_C__pf2826203124>(bpp__TargetActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				AActor::FlushNetDormancy();
			}
		case 4:
			{
				int32  __Local__41 = 0;
				bpv__FloorNumber__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf)) ? (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf->bpv__FloorNumber__pf) : (__Local__41));
			}
		case 5:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 14, FName(TEXT("FloorNumber")));
			}
		case 6:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				AActor::FlushNetDormancy();
			}
		case 8:
			{
				bpv__FloorNumber__pf = 1;
			}
		case 9:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 14, FName(TEXT("FloorNumber")));
				__CurrentState = 6;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CheckOwnership__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Result__pf)
{
	APlayerController* bpfv__LocalPlayer__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray<AActor*> bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_Ownership_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_CheckPlayerIsOwner_BPI_IsOwner__pf{};
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf{};
	FString bpfv__CallFunc_GetPlayerID_PlayerID__pf{};
	TScriptInterface<IBPI_Mei_Ownership_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GetOwnershipInfo_BPI_IsOwned__pf{};
	TArray<FString> bpfv__CallFunc_GetOwnershipInfo_BPI_OwnerNames__pf{};
	float bpfv__CallFunc_GetOwnershipInfo_BPI_OwnershipDistance__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalPlayer__pf = bpp__PlayerController__pf;
			}
		case 2:
			{
				bpfv__CallFunc_DoesImplementInterface_ReturnValue_1__pf = UKismetSystemLibrary::DoesImplementInterface(this, UBPI_Mei_Ownership_C::StaticClass());
				if (!bpfv__CallFunc_DoesImplementInterface_ReturnValue_1__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				if ( this->GetClass()->ImplementsInterface(UBPI_Mei_Ownership_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf.SetObject(this);
					void* IAddress = this->GetInterfaceAddress(UBPI_Mei_Ownership_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf))
				{
					IBPI_Mei_Ownership_C::Execute_bpf__GetOwnershipInfo_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership_1__pf.GetObject() , /*out*/ bpfv__CallFunc_GetOwnershipInfo_BPI_IsOwned__pf, /*out*/ bpfv__CallFunc_GetOwnershipInfo_BPI_OwnerNames__pf, /*out*/ bpfv__CallFunc_GetOwnershipInfo_BPI_OwnershipDistance__pf);
				}
			}
		case 5:
			{
				if (!bpfv__CallFunc_GetOwnershipInfo_BPI_IsOwned__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 6:
			{
				UBP_Mei_Library_C__pf3770675254::bpf__GetPlayerID__pf(bpfv__LocalPlayer__pf, this, /*out*/ bpfv__CallFunc_GetPlayerID_PlayerID__pf);
				bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(bpfv__CallFunc_GetOwnershipInfo_BPI_OwnerNames__pf, bpfv__CallFunc_GetPlayerID_PlayerID__pf);
				bpp__Result__pf = bpfv__CallFunc_Array_Contains_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 8:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 9:
			{
				(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, ((UClass*)nullptr));
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 10:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 11:
			{
				__StateStack.Push(22);
			}
		case 12:
			{
				(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, ((UClass*)nullptr));
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf = UKismetSystemLibrary::DoesImplementInterface(bpfv__CallFunc_Array_Get_Item__pf, UBPI_Mei_Ownership_C::StaticClass());
				if (!bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
				AActor::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, ((UClass*)nullptr));
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if ( bpfv__CallFunc_Array_Get_Item__pf && bpfv__CallFunc_Array_Get_Item__pf->GetClass()->ImplementsInterface(UBPI_Mei_Ownership_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf.SetObject(bpfv__CallFunc_Array_Get_Item__pf);
					void* IAddress = bpfv__CallFunc_Array_Get_Item__pf->GetInterfaceAddress(UBPI_Mei_Ownership_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 14:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf))
				{
					IBPI_Mei_Ownership_C::Execute_bpf__CheckPlayerIsOwner_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Ownership__pf.GetObject() , bpfv__LocalPlayer__pf, /*out*/ bpfv__CallFunc_CheckPlayerIsOwner_BPI_IsOwner__pf);
				}
			}
		case 15:
			{
				if (!bpfv__CallFunc_CheckPlayerIsOwner_BPI_IsOwner__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				bpp__Result__pf = false;
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				bpp__Result__pf = false;
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_GetOwnershipInfo_BPI_IsOwned__pf = false;
			}
		case 19:
			{
				FCustomThunkTemplates::Array_Clear(bpfv__CallFunc_GetOwnershipInfo_BPI_OwnerNames__pf);
			}
		case 20:
			{
				bpfv__CallFunc_GetOwnershipInfo_BPI_OwnershipDistance__pf = 0.000000;
				__CurrentState = 5;
				break;
			}
		case 21:
			{
				bpp__Result__pf = true;
				__CurrentState = -1;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 9;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_CheckPlayerIsOwner_BPI_IsOwner__pf = false;
				__CurrentState = 15;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CheckRepair__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Result__pf)
{
	APlayerController* bpfv__LocalPlayerController__pf{};
	bool bpfv__CallFunc_CheckClaim_Result__pf{};
	bool bpfv__CallFunc_CheckRepairRequirements_Result__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalPlayerController__pf = bpp__PlayerController__pf;
			}
		case 2:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__Durability__pf, bpv__MaxDurability__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				bpf__CheckRepairRequirements__pf(bpfv__LocalPlayerController__pf, /*out*/ bpfv__CallFunc_CheckRepairRequirements_Result__pf);
			}
		case 4:
			{
				if (!bpfv__CallFunc_CheckRepairRequirements_Result__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 5:
			{
				bpf__CheckClaim__pf(bpfv__LocalPlayerController__pf, /*out*/ bpfv__CallFunc_CheckClaim_Result__pf);
			}
		case 6:
			{
				bpp__Result__pf = bpfv__CallFunc_CheckClaim_Result__pf;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpp__Result__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CheckRepairRequirements__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Result__pf)
{
	TScriptInterface<IBPI_Mei_Player_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_CheckRequirements_BPI_Success__pf{};
	bool bpfv__CallFunc_IsValidHandle_IsValid__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				UBP_Mei_Library_C__pf3770675254::bpf__IsValidHandle__pf(bpv__BuildingObjectSettings__pf.bpv__RepairRequirements_47_D9B527B3455199214DFE7296184F5155__pf, this, /*out*/ bpfv__CallFunc_IsValidHandle_IsValid__pf);
				if (!bpfv__CallFunc_IsValidHandle_IsValid__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				if ( bpp__PlayerController__pf && bpp__PlayerController__pf->GetClass()->ImplementsInterface(UBPI_Mei_Player_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(bpp__PlayerController__pf);
					void* IAddress = bpp__PlayerController__pf->GetInterfaceAddress(UBPI_Mei_Player_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf))
				{
					IBPI_Mei_Player_C::Execute_bpf__CheckRequirements_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.GetObject() , bpv__BuildingObjectSettings__pf.bpv__RepairRequirements_47_D9B527B3455199214DFE7296184F5155__pf, /*out*/ bpfv__CallFunc_CheckRequirements_BPI_Success__pf);
				}
			}
		case 4:
			{
				bpp__Result__pf = true;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpp__Result__pf = true;
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_CheckRequirements_BPI_Success__pf = false;
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CompleteRepair__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf)
{
	TScriptInterface<IBPI_Mei_Player_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if ( bpp__PlayerController__pf && bpp__PlayerController__pf->GetClass()->ImplementsInterface(UBPI_Mei_Player_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(bpp__PlayerController__pf);
					void* IAddress = bpp__PlayerController__pf->GetInterfaceAddress(UBPI_Mei_Player_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf))
				{
					IBPI_Mei_Player_C::Execute_bpf__CompleteRequirements_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.GetObject() , bpv__BuildingObjectSettings__pf.bpv__RepairRequirements_47_D9B527B3455199214DFE7296184F5155__pf);
				}
			}
		case 3:
			{
				AActor::FlushNetDormancy();
			}
		case 4:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__MaxDurability__pf, bpv__BuildingObjectSettings__pf.bpv__RepairFactor_44_A75C7EFB49F6CD391E97A297090522F3__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Durability__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000, bpv__MaxDurability__pf);
				bpv__Durability__pf = bpfv__CallFunc_FClamp_ReturnValue__pf;
			}
		case 5:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 12, FName(TEXT("Durability")));
			}
		case 6:
			{
				bpf__CompleteRepairxxMulticastx__pfTLK();
			}
		case 7:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CheckUpgrade__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_CheckClaim_Result__pf{};
	bool bpfv__CallFunc_CheckUpgradeRequirements_Success__pf{};
	bool bpfv__CallFunc_IsValidHandle_IsValid__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				auto __Local__42 = FDataTableRowHandle{};
				UBP_Mei_Library_C__pf3770675254::bpf__IsValidHandle__pf(__Local__42, this, /*out*/ bpfv__CallFunc_IsValidHandle_IsValid__pf);
				if (!bpfv__CallFunc_IsValidHandle_IsValid__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpf__CheckUpgradeRequirements__pf(bpp__PlayerController__pf, /*out*/ bpfv__CallFunc_CheckUpgradeRequirements_Success__pf);
			}
		case 3:
			{
				if (!bpfv__CallFunc_CheckUpgradeRequirements_Success__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 4:
			{
				bpf__CheckClaim__pf(bpp__PlayerController__pf, /*out*/ bpfv__CallFunc_CheckClaim_Result__pf);
			}
		case 5:
			{
				bpp__Success__pf = bpfv__CallFunc_CheckClaim_Result__pf;
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpp__Success__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CheckUpgradeRequirements__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf)
{
	TScriptInterface<IBPI_Mei_Player_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_IsValidHandle_IsValid__pf{};
	bool bpfv__CallFunc_CheckRequirements_BPI_Success__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				auto __Local__43 = FDataTableRowHandle{};
				UBP_Mei_Library_C__pf3770675254::bpf__IsValidHandle__pf(__Local__43, this, /*out*/ bpfv__CallFunc_IsValidHandle_IsValid__pf);
				if (!bpfv__CallFunc_IsValidHandle_IsValid__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				if ( bpp__PlayerController__pf && bpp__PlayerController__pf->GetClass()->ImplementsInterface(UBPI_Mei_Player_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(bpp__PlayerController__pf);
					void* IAddress = bpp__PlayerController__pf->GetInterfaceAddress(UBPI_Mei_Player_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf))
				{
					IBPI_Mei_Player_C::Execute_bpf__CheckRequirements_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.GetObject() , bpv__BuildingObjectSettings__pf.bpv__UpgradeRequirements_46_C46FECF742E0A90A0A51F1922055E18E__pf, /*out*/ bpfv__CallFunc_CheckRequirements_BPI_Success__pf);
				}
			}
		case 4:
			{
				bpp__Success__pf = bpfv__CallFunc_CheckRequirements_BPI_Success__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_CheckRequirements_BPI_Success__pf = false;
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CompleteUpgrade__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf)
{
	TScriptInterface<IBPI_Mei_Player_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if ( bpp__PlayerController__pf && bpp__PlayerController__pf->GetClass()->ImplementsInterface(UBPI_Mei_Player_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(bpp__PlayerController__pf);
					void* IAddress = bpp__PlayerController__pf->GetInterfaceAddress(UBPI_Mei_Player_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf))
				{
					IBPI_Mei_Player_C::Execute_bpf__CompleteRequirements_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.GetObject() , bpv__BuildingObjectSettings__pf.bpv__UpgradeRequirements_46_C46FECF742E0A90A0A51F1922055E18E__pf);
				}
			}
		case 3:
			{
				AActor::FlushNetDormancy();
			}
		case 4:
			{
				bpv__BuildingObjectHandle__pf = bpv__BuildingObjectSettings__pf.bpv__UpgradeObject_39_22B9ACB343873184F429F3B583C711A7__pf;
			}
		case 5:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 10, FName(TEXT("BuildingObjectHandle")));
			}
		case 6:
			{
				bpf__OnRep_BuildingObjectHandle__pf();
			}
		case 7:
			{
				bpf__CompleteUpgradexxMulticastx__pfTLK();
			}
		case 8:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CompleteRemove__pf(APlayerController* bpp__PlayerController__pf, bool bpp__Destruct__pf, /*out*/ bool& bpp__Success__pf)
{
	APlayerController* bpfv__LocalPlayerController__pf{};
	TArray<ABP_Mei_Building_BaseObject_C__pf2826203124*> bpfv__LocalOverlappingObject__pf{};
	bool bpfv__LocalDestruct__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	UObject* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_CompleteDestruction_Success__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_CompleteRemove_Success__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_CheckSupport_HasSupport__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	TArray<ABP_Mei_Building_BaseObject_C__pf2826203124*> bpfv__CallFunc_GetSnappedObjects_OverlappingObjects__pf{};
	bool bpfv__CallFunc_RemoveAttachedObjects_Success__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalDestruct__pf = bpp__Destruct__pf;
			}
		case 2:
			{
				bpfv__LocalPlayerController__pf = bpp__PlayerController__pf;
			}
		case 3:
			{
				bpf__RemoveAttachedObjects__pf(bpfv__LocalDestruct__pf, /*out*/ bpfv__CallFunc_RemoveAttachedObjects_Success__pf);
			}
		case 4:
			{
				if (!bpfv__LocalDestruct__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 5:
			{
				bpf__CompleteDestruction__pf(bpfv__LocalPlayerController__pf, /*out*/ bpfv__CallFunc_CompleteDestruction_Success__pf);
			}
		case 6:
			{
				bpf__GetSnappedObjects__pf(/*out*/ bpfv__CallFunc_GetSnappedObjects_OverlappingObjects__pf);
			}
		case 7:
			{
				bpfv__LocalOverlappingObject__pf = bpfv__CallFunc_GetSnappedObjects_OverlappingObjects__pf;
			}
		case 8:
			{
				K2_DestroyActor();
			}
		case 9:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 10:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 11:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__LocalOverlappingObject__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 12:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 13:
			{
				__StateStack.Push(19);
			}
		case 14:
			{
				FCustomThunkTemplates::Array_Get(bpfv__LocalOverlappingObject__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_Array_Get_Item__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				bpf__CheckSupport__pf(/*out*/ bpfv__CallFunc_CheckSupport_HasSupport__pf);
			}
		case 16:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_CheckSupport_HasSupport__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				bpf__CompleteRemove__pf(bpfv__LocalPlayerController__pf, bpfv__LocalDestruct__pf, /*out*/ bpfv__CallFunc_CompleteRemove_Success__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 11;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__RemoveAttachedObjects__pf(bool bpp__Destruct__pf, /*out*/ bool& bpp__Success__pf)
{
	bpp__Success__pf = false;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CompleteDestruction__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(((UObject*)nullptr));
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpf__CompleteDestructionxxMulticastx__pfTLK();
			}
		case 3:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CheckRotate__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_CheckClaim_Result__pf{};
	bool bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NotEqual_FloatFloat(bpv__RotateAngle__pf, 0.000000);
				if (!bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpf__CheckClaim__pf(bpp__PlayerController__pf, /*out*/ bpfv__CallFunc_CheckClaim_Result__pf);
			}
		case 3:
			{
				bpp__Success__pf = bpfv__CallFunc_CheckClaim_Result__pf;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpp__Success__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CompleteRotate__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf)
{
	bpf__CompleteRotatexxMulticastx__pfTLK();
	bpp__Success__pf = true;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ManualSnapToTarget__pf()
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_CreateSocketTransforms_Success__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_SetFloorNumberByTargetActor_Success__pf{};
	bool bpfv__CallFunc_CheckAndAttachToTarget_Success__pf{};
	FTransform bpfv__CallFunc_GetSnapTransform_ReturnTransform__pf{};
	FHitResult bpfv__CallFunc_K2_SetActorTransform_SweepHitResult__pf{};
	bool bpfv__CallFunc_K2_SetActorTransform_ReturnValue__pf{};
	bool bpfv__CallFunc_CreateSocketTransforms_Success_1__pf{};
	bool bpfv__CallFunc_CheckSnap_CanBeSnapped__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__ManualBuildTarget__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 2:
			{
				bpf__CheckSnap__pf(bpv__ManualBuildTarget__pf, /*out*/ bpfv__CallFunc_CheckSnap_CanBeSnapped__pf);
			}
		case 3:
			{
				if (!bpfv__CallFunc_CheckSnap_CanBeSnapped__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpv__ManualBuildTarget__pf))
				{
					bpv__ManualBuildTarget__pf->bpf__CreateSocketTransforms__pf(/*out*/ bpfv__CallFunc_CreateSocketTransforms_Success_1__pf);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__ManualBuildTarget__pf))
				{
					bpv__ManualBuildTarget__pf->AActor::FlushNetDormancy();
				}
			}
		case 6:
			{
				if(::IsValid(bpv__ManualBuildTarget__pf))
				{
					bpv__ManualBuildTarget__pf->bpv__Built__pf = bpfv__CallFunc_CreateSocketTransforms_Success_1__pf;
				}
			}
		case 7:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(bpv__ManualBuildTarget__pf, 11, FName(TEXT("Built")));
			}
		case 8:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				bpf__GetSnapTransform__pf(bpv__ManualBuildTarget__pf, bpv__ManualInputRotation__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, false, false, /*out*/ bpfv__CallFunc_GetSnapTransform_ReturnTransform__pf);
			}
		case 9:
			{
				bpfv__CallFunc_K2_SetActorTransform_ReturnValue__pf = AActor::K2_SetActorTransform(bpfv__CallFunc_GetSnapTransform_ReturnTransform__pf, false, /*out*/ bpfv__CallFunc_K2_SetActorTransform_SweepHitResult__pf, true);
			}
		case 10:
			{
				bpf__CheckAndAttachToTarget__pf(bpv__ManualBuildTarget__pf, /*out*/ bpfv__CallFunc_CheckAndAttachToTarget_Success__pf);
			}
		case 11:
			{
				bpf__SetFloorNumberByTargetActor__pf(bpv__ManualBuildTarget__pf, /*out*/ bpfv__CallFunc_SetFloorNumberByTargetActor_Success__pf);
			}
		case 12:
			{
				bpf__CreateSocketTransforms__pf(/*out*/ bpfv__CallFunc_CreateSocketTransforms_Success__pf);
			}
		case 13:
			{
				bpf__CompleteBuildxxMulticastx__pfTLK();
			}
		case 14:
			{
				AActor::FlushNetDormancy();
			}
		case 15:
			{
				bpv__Built__pf = true;
			}
		case 16:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 11, FName(TEXT("Built")));
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Manual build target is not valid!")), true, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), 5.000000);
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Wrong build target!")), true, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), 5.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ManualSnapAndRotateNext__pf()
{
	bool bpfv__Temp_bool_Variable__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__K2Node_Select_Default__pf{};
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__ManualInputRotation__pf, 10.000000);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(360.000000, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 360.000000);
	bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf;
	bpv__ManualInputRotation__pf = TSwitchValue<bool , float >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , float >(false, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf), TSwitchPair<bool , float >(true, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf));
	bpf__ManualSnapToTarget__pf();
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ManualSnapAndRotatePrev__pf()
{
	bool bpfv__Temp_bool_Variable__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	float bpfv__K2Node_Select_Default__pf{};
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__ManualInputRotation__pf, 10.000000);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 360.000000);
	bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 0.000000);
	bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf;
	bpv__ManualInputRotation__pf = TSwitchValue<bool , float >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , float >(false, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf), TSwitchPair<bool , float >(true, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf));
	bpf__ManualSnapToTarget__pf();
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ManualRotate__pf()
{
	bool bpfv__CallFunc_CompleteRotate_Success__pf{};
	bool bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NotEqual_FloatFloat(bpv__RotateAngle__pf, 0.000000);
				if (!bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpf__CompleteRotate__pf(((APlayerController*)nullptr), /*out*/ bpfv__CallFunc_CompleteRotate_Success__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__MakeSocketTransforms__pf(FName bpp__SocketName__pf, /*out*/ TArray<FTransform>& bpp__Transforms__pf)
{
	TArray<FTransform> bpfv__LocalTransforms__pf{};
	TArray<USceneComponent*> bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	USceneComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
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
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(USceneComponent::StaticClass(), bpp__SocketName__pf)).Get<USceneComponent*>();
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
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
				bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(AActor::GetComponentsByTag(USceneComponent::StaticClass(), bpp__SocketName__pf)).Get<USceneComponent*>();
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpfv__LocalTransforms__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				bpp__Transforms__pf = bpfv__LocalTransforms__pf;
				__CurrentState = -1;
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
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__MakeSocketTransformsPrimitive__pf(UPrimitiveComponent* bpp__PrimitiveComponent__pf, FName bpp__SocketName__pf, int32 bpp__Amount__pf, /*out*/ TArray<FTransform>& bpp__Transforms__pf)
{
	UPrimitiveComponent* bpfv__LocalPrimitiveComponent__pf{};
	FName bpfv__LocalSocketName__pf{};
	TArray<FTransform> bpfv__LocalTransforms__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	FString bpfv__CallFunc_Conv_NameToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	FName bpfv__CallFunc_Conv_StringToName_ReturnValue__pf{};
	FTransform bpfv__CallFunc_GetSocketTransform_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalPrimitiveComponent__pf = bpp__PrimitiveComponent__pf;
			}
		case 2:
			{
				bpfv__LocalSocketName__pf = bpp__SocketName__pf;
			}
		case 3:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpp__Amount__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 5:
			{
				__StateStack.Push(8);
			}
		case 6:
			{
				bpfv__CallFunc_Conv_NameToString_ReturnValue__pf = UKismetStringLibrary::Conv_NameToString(bpfv__LocalSocketName__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_NameToString_ReturnValue__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToName_ReturnValue__pf = UKismetStringLibrary::Conv_StringToName(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf);
				if(::IsValid(bpfv__LocalPrimitiveComponent__pf))
				{
					bpfv__CallFunc_GetSocketTransform_ReturnValue__pf = bpfv__LocalPrimitiveComponent__pf->GetSocketTransform(bpfv__CallFunc_Conv_StringToName_ReturnValue__pf, ERelativeTransformSpace::RTS_World);
				}
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpfv__LocalTransforms__pf, bpfv__CallFunc_GetSocketTransform_ReturnValue__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				bpp__Transforms__pf = bpfv__LocalTransforms__pf;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__GetSocketTransforms__pf(FName bpp__SocketName__pf, /*out*/ TArray<FTransform>& bpp__SocketTransforms__pf)
{
	FSTR_Mei_SocketTransforms__pf4030501756 bpfv__CallFunc_Map_Find_Value__pf{};
	bool bpfv__CallFunc_Map_Find_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__SocketTransforms__pf, bpp__SocketName__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				if (!bpfv__CallFunc_Map_Find_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_Map_Find_ReturnValue__pf = FCustomThunkTemplates::Map_Find(bpv__SocketTransforms__pf, bpp__SocketName__pf, /*out*/ bpfv__CallFunc_Map_Find_Value__pf);
				bpp__SocketTransforms__pf = bpfv__CallFunc_Map_Find_Value__pf.bpv__Transforms_3_8C53582842F59C9713636D889EDFF9D7__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__GetNearestSocketTransform__pf(FVector bpp__Location__pf, FName bpp__SocketName__pf, /*out*/ FTransform& bpp__ResultTransform__pf)
{
	FTransform bpfv__LocalSelectedTransform__pf{};
	float bpfv__LocalSelectedLength__pf{};
	TArray<FTransform> bpfv__LocalTransforms__pf{};
	FVector bpfv__LocalLocation__pf(EForceInit::ForceInit);
	TArray<FTransform> bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf{};
	FTransform bpfv__CallFunc_GetNearestTransform_ResultTransform__pf{};
	bpfv__LocalSelectedLength__pf = 0.000000;
	bpf__GetSocketTransforms__pf(bpp__SocketName__pf, /*out*/ bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf);
	bpf__GetNearestTransform__pf(bpp__Location__pf, /*out*/ bpfv__CallFunc_GetSocketTransforms_SocketTransforms__pf, /*out*/ bpfv__CallFunc_GetNearestTransform_ResultTransform__pf);
	bpp__ResultTransform__pf = bpfv__CallFunc_GetNearestTransform_ResultTransform__pf;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__CompleteBuild__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf)
{
	bpf__CompleteBuildxxMulticastx__pfTLK();
	bpp__Success__pf = true;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__OnRep_BuildingObjectHandle__pf()
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	bool bpfv__CallFunc_HasAuthority_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf{};
	bool bpfv__CallFunc_EqualEqual_TransformTransform_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	FSTR_Mei_BuildingObjectSettings__pf4030501756 bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(const_cast<UDataTable*>(bpv__BuildingObjectHandle__pf.DataTable));
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf = FCustomThunkTemplates::GetDataTableRowFromName(const_cast<UDataTable*>(bpv__BuildingObjectHandle__pf.DataTable), bpv__BuildingObjectHandle__pf.RowName, /*out*/ bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf);
			}
		case 3:
			{
				if (!bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpv__BuildingObjectSettings__pf = bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf;
			}
		case 5:
			{
				bpfv__CallFunc_HasAuthority_ReturnValue__pf = AActor::HasAuthority();
				if (!bpfv__CallFunc_HasAuthority_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				AActor::FlushNetDormancy();
			}
		case 7:
			{
				bpv__MaxDurability__pf = bpv__BuildingObjectSettings__pf.bpv__MaxDurability_23_DDC221224D1587C830829C834AE458BF__pf;
			}
		case 8:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 13, FName(TEXT("MaxDurability")));
			}
		case 9:
			{
				AActor::FlushNetDormancy();
			}
		case 10:
			{
				bpv__Durability__pf = bpv__MaxDurability__pf;
			}
		case 11:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 12, FName(TEXT("Durability")));
			}
		case 12:
			{
				AActor::FlushNetDormancy();
			}
		case 13:
			{
				static TWeakFieldPtr<FProperty> __Local__45{};
				const FProperty* __Local__44 = __Local__45.Get();
				if (nullptr == __Local__44)
				{
					__Local__44 = (AActor::StaticClass())->FindPropertyByName(FName(TEXT("bCanBeDamaged")));
					check(__Local__44);
					__Local__45 = __Local__44;
				}
				(((FBoolProperty*)__Local__44)->SetPropertyValue_InContainer((this), bpv__BuildingObjectSettings__pf.bpv__CanBeDamaged_26_0C6B61794AA45C3393316D9A6007AEFD__pf, 0));
			}
		case 14:
			{
				UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(this, 3, FName(TEXT("bCanBeDamaged")));
			}
		case 15:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__BuildingObjectSettings__pf.bpv__StaticMesh_17_86E561D94DB8DEB8F857AA8347690B7C__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 16:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpv__StaticMesh__pf->SetStaticMesh(bpv__BuildingObjectSettings__pf.bpv__StaticMesh_17_86E561D94DB8DEB8F857AA8347690B7C__pf);
				}
			}
		case 17:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_EqualEqual_TransformTransform_ReturnValue__pf = UKismetMathLibrary::EqualEqual_TransformTransform(bpv__BuildingObjectSettings__pf.bpv__CorrectMeshTransform_31_80BA9B8C4687377A1AF79884C6766444__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_EqualEqual_TransformTransform_ReturnValue__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 18:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpv__StaticMesh__pf->USceneComponent::K2_SetRelativeTransform(bpv__BuildingObjectSettings__pf.bpv__CorrectMeshTransform_31_80BA9B8C4687377A1AF79884C6766444__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf, true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__GetDurability_BPI__pf(/*out*/ float& bpp__CurrentValue__pf, /*out*/ float& bpp__MaxValue__pf)
{
	bpp__CurrentValue__pf = 0.000000;
	bpp__MaxValue__pf = 0.000000;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__SetMaxDurability_BPI__pf(float bpp__Value__pf, /*out*/ bool& bpp__Success__pf)
{
	bpp__Success__pf = false;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__ChangeDurability_BPI__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf)
{
	bpp__Success__pf = false;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__SetFloorActorHidden_BPI__pf(bool bpp__NewHidden__pf, /*out*/ bool& bpp__Success__pf)
{
	bpp__Success__pf = false;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__GetFloorNumber_BPI__pf(/*out*/ int32& bpp__FloorNumber__pf)
{
	bpp__FloorNumber__pf = 0;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__SetFloorNumber_BPI__pf(int32 bpp__FloorNumber__pf, /*out*/ bool& bpp__Success__pf)
{
	bpp__Success__pf = false;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__GetFormatedVariables_BPI__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf)
{
	bpp__FormatedVariables__pf = {};
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__LoadData_BPI__pf(USaveGame* bpp__SaveGame__pf, /*out*/ bool& bpp__Success__pf)
{
	bpp__Success__pf = false;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__SaveData_BPI__pf(USaveGame* bpp__SaveGame__pf, /*out*/ bool& bpp__Success__pf)
{
	bpp__Success__pf = false;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__SetSaveID_BPI__pf(int32 bpp__SaveID__pf, /*out*/ bool& bpp__Success__pf)
{
	bpp__Success__pf = false;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__GetSaveID_BPI__pf(/*out*/ int32& bpp__SaveID__pf)
{
	bpp__SaveID__pf = 0;
}
void ABP_Mei_Building_BaseObject_C__pf2826203124::bpf__InitSaveID_BPI__pf(USaveGame* bpp__SaveGame__pf, /*out*/ bool& bpp__Success__pf)
{
	bpp__Success__pf = false;
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Mei_Building_BaseObject_C__pf2826203124::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/Mesh/BuildingSystem/Structures/Dummy/SM_Dummy_Foundation.SM_Dummy_Foundation 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Dummy_Structures_Base.MI_Dummy_Structures_Base 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionChannel 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Mei_Building_BaseObject_C__pf2826203124::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{311, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_Durability.BPI_Mei_Durability_C 
		{301, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_Floor.BPI_Mei_Floor_C 
		{312, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_SaveObject.BPI_Mei_SaveObject_C 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{9, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{1, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTable 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionResponse 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Landscape.Landscape 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EFormatArgumentType 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETextGender 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/BuildingSystem/Dummy/Dummy.Dummy 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EDrawDebugTrace 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Can_Build.MI_Can_Build 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_CanNot_Build.MI_CanNot_Build 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/Mei/BP/BuildingSystem/DataTables/DT_Mei_BuildingObjects.DT_Mei_BuildingObjects 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimMontage 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBox 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBoxSlot 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleComponent 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleActor 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleMesh 
		{313, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/BuildingObject/Base/BP_Mei_DestructibleObject.BP_Mei_DestructibleObject_C 
		{302, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/Game/BP_Mei_Library.BP_Mei_Library_C 
		{303, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_Player.BPI_Mei_Player_C 
		{314, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_Ownership.BPI_Mei_Ownership_C 
		{306, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/STR_Mei_BuildingObjectSettings.STR_Mei_BuildingObjectSettings 
		{315, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/STR_Mei_SocketTransforms.STR_Mei_SocketTransforms 
		{316, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/STR_Mei_SnapSettings.STR_Mei_SnapSettings 
		{309, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_ChangeVariableOperation.E_Mei_ChangeVariableOperation 
		{308, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_BuildingType.E_Mei_BuildingType 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Mei_Building_BaseObject_C__pf2826203124
{
	FRegisterHelper__ABP_Mei_Building_BaseObject_C__pf2826203124()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/BP/BuildingSystem/BuildingObject/Base/BP_Mei_Building_BaseObject"), &ABP_Mei_Building_BaseObject_C__pf2826203124::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Mei_Building_BaseObject_C__pf2826203124 Instance;
};
FRegisterHelper__ABP_Mei_Building_BaseObject_C__pf2826203124 FRegisterHelper__ABP_Mei_Building_BaseObject_C__pf2826203124::Instance;
void ABP_Mei_Building_BaseObject_C__pf2826203124::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(ABP_Mei_Building_BaseObject_C__pf2826203124, bpv__BuildingObjectHandle__pf, FName(TEXT("BuildingObjectHandle")));
	DOREPLIFETIME_DIFFNAMES(ABP_Mei_Building_BaseObject_C__pf2826203124, bpv__Built__pf, FName(TEXT("Built")));
	DOREPLIFETIME_DIFFNAMES(ABP_Mei_Building_BaseObject_C__pf2826203124, bpv__Durability__pf, FName(TEXT("Durability")));
	DOREPLIFETIME_DIFFNAMES(ABP_Mei_Building_BaseObject_C__pf2826203124, bpv__MaxDurability__pf, FName(TEXT("MaxDurability")));
	DOREPLIFETIME_DIFFNAMES(ABP_Mei_Building_BaseObject_C__pf2826203124, bpv__FloorNumber__pf, FName(TEXT("FloorNumber")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
