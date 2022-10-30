#include "NativizedAssets.h"
#include "BP_ALS_Mei_PlayerCameraManager__pf2678393923.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
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
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
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
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
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
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
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
#include "Runtime/Engine/Public/MaterialShared.h"
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
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
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
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
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
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
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
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
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
#include "ALS_PlayerCameraBehavior__pf1311347622.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "ABP_ALS_Mei_PlayerCameraBehavior__pf2678393923.h"
#include "ALS_Controller_BPI__pf3750819539.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "ALS_Camera_BPI__pf3750819539.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	auto __Local__0 = CastChecked<USceneComponent>(this->GetDefaultSubobjectByName(TEXT("TransformComponent0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'TransformComponent0' //
		static TWeakFieldPtr<FProperty> __Local__2{};
		const FProperty* __Local__1 = __Local__2.Get();
		if (nullptr == __Local__1)
		{
			__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__1);
			__Local__2 = __Local__1;
		}
		(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'TransformComponent0' //
	}
	bpv__CameraBehavior__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CameraBehavior"));
	bpv__CameraBehavior__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__CameraBehavior__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__CameraBehavior__pf->AnimClass = UALS_PlayerCameraBehavior_C__pf1311347622::StaticClass();
	bpv__CameraBehavior__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__CameraBehavior__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__CameraBehavior__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__CameraBehavior__pf->bHiddenInGame = true;
	static TWeakFieldPtr<FProperty> __Local__4{};
	const FProperty* __Local__3 = __Local__4.Get();
	if (nullptr == __Local__3)
	{
		__Local__3 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__3);
		__Local__4 = __Local__3;
	}
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__CameraBehavior__pf), false, 0));
	bpv__ControlledPawn__pf = nullptr;
	bpv__DebugViewOffset__pf = FVector(350.000000, 0.000000, 50.000000);
	bpv__DebugViewRotation__pf = FRotator(-5.000000, 180.000000, 0.000000);
	bpv__RootLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__SmoothedPivotTarget__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
	bpv__PivotLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__TargetCameraLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__TargetCameraRotation__pf = FRotator(0.000000, 0.000000, 0.000000);
	auto& __Local__5 = (*(AccessPrivateProperty<USceneComponent*>((this), APlayerCameraManager::__PPO__TransformComponent() )));
	__Local__5 = __Local__0;
	auto& __Local__6 = (*(AccessPrivateProperty<float >((this), APlayerCameraManager::__PPO__ServerUpdateCameraTimeout() )));
	__Local__6 = 2.000000f;
	auto& __Local__7 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__7 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	AutoReceiveInput = EAutoReceiveInput::Type::Player0;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__CameraBehavior__pf)
	{
		bpv__CameraBehavior__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UALS_PlayerCameraBehavior_C__pf1311347622::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UABP_ALS_Mei_PlayerCameraBehavior_C__pf2678393923::StaticClass());
	extern UClass* Z_Construct_UClass_UALS_Controller_BPI_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UALS_Controller_BPI_C());
	extern UClass* Z_Construct_UClass_UALS_Camera_BPI_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UALS_Camera_BPI_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__8 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__8);
	static TWeakFieldPtr<FProperty> __Local__10{};
	const FProperty* __Local__9 = __Local__10.Get();
	if (nullptr == __Local__9)
	{
		__Local__9 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__9);
		__Local__10 = __Local__9;
	}
	(((FBoolProperty*)__Local__9)->SetPropertyValue_InContainer((__Local__8), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::bpf__ExecuteUbergraph_BP_ALS_Mei_PlayerCameraManager__pf_0(int32 bpp__EntryPoint__pf)
{
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayerController_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpv__ControlledPawn__pf = b0l__K2Node_CustomEvent_NewPawn__pf;
	if(::IsValid(bpv__CameraBehavior__pf))
	{
		bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = bpv__CameraBehavior__pf->USkeletalMeshComponent::GetAnimInstance();
	}
	b0l__K2Node_DynamicCast_AsABP_ALS_Mei_Player_Camera_Behavior__pf = Cast<UABP_ALS_Mei_PlayerCameraBehavior_C__pf2678393923>(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsABP_ALS_Mei_Player_Camera_Behavior__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpfv__CallFunc_GetOwningPlayerController_ReturnValue__pf = GetOwningPlayerController();
	if(::IsValid(b0l__K2Node_DynamicCast_AsABP_ALS_Mei_Player_Camera_Behavior__pf))
	{
		b0l__K2Node_DynamicCast_AsABP_ALS_Mei_Player_Camera_Behavior__pf->bpv__PlayerController__pf = bpfv__CallFunc_GetOwningPlayerController_ReturnValue__pf;
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsABP_ALS_Mei_Player_Camera_Behavior__pf))
	{
		b0l__K2Node_DynamicCast_AsABP_ALS_Mei_Player_Camera_Behavior__pf->bpv__ControlledPawn__pf = bpv__ControlledPawn__pf;
	}
	return; // KCST_GotoReturn
}
void ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::bpf__OnPossess__pf(APawn* bpp__NewPawn__pf)
{
	b0l__K2Node_CustomEvent_NewPawn__pf = bpp__NewPawn__pf;
	bpf__ExecuteUbergraph_BP_ALS_Mei_PlayerCameraManager__pf_0(1);
}
bool  ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::bpf__BlueprintUpdateCamera__pf(AActor* bpp__CameraTarget__pf, /*out*/ FVector& bpp__NewCameraLocation__pf, /*out*/ FRotator& bpp__NewCameraRotation__pf, /*out*/ float& bpp__NewCameraFOV__pf)
{
	bool bpp__ReturnValue__pf{};
	float bpfv__TargetFOV__pf{};
	FRotator bpfv__TargetRotation__pf(EForceInit::ForceInit);
	FVector bpfv__TargetLocation__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_ActorHasTag_ReturnValue__pf{};
	FVector bpfv__CallFunc_BlueprintUpdateCamera_NewCameraLocation__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BlueprintUpdateCamera_NewCameraRotation__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BlueprintUpdateCamera_NewCameraFOV__pf{};
	bool bpfv__CallFunc_BlueprintUpdateCamera_ReturnValue__pf{};
	FVector bpfv__CallFunc_CustomCameraBehavior_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_CustomCameraBehavior_Rotation__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_CustomCameraBehavior_FOV__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__TargetLocation__pf = FVector(0.000000,0.000000,0.000000);
			}
		case 2:
			{
				bpfv__TargetRotation__pf = FRotator(0.000000,0.000000,0.000000);
			}
		case 3:
			{
				bpfv__TargetFOV__pf = 0.000000;
			}
		case 4:
			{
				if(::IsValid(bpp__CameraTarget__pf))
				{
					bpfv__CallFunc_ActorHasTag_ReturnValue__pf = bpp__CameraTarget__pf->AActor::ActorHasTag(FName(TEXT("ALS_Character")));
				}
				if (!bpfv__CallFunc_ActorHasTag_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 5:
			{
				bpf__CustomCameraBehavior__pf(/*out*/ bpfv__CallFunc_CustomCameraBehavior_Location__pf, /*out*/ bpfv__CallFunc_CustomCameraBehavior_Rotation__pf, /*out*/ bpfv__CallFunc_CustomCameraBehavior_FOV__pf);
			}
		case 6:
			{
				bpp__NewCameraLocation__pf = bpfv__CallFunc_CustomCameraBehavior_Location__pf;
				bpp__NewCameraRotation__pf = bpfv__CallFunc_CustomCameraBehavior_Rotation__pf;
				bpp__NewCameraFOV__pf = bpfv__CallFunc_CustomCameraBehavior_FOV__pf;
				bpp__ReturnValue__pf = true;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				/*This function cannot be called from BP. See bIsValidFunction in UObject::CallFunction*/
			}
		case 8:
			{
				bpp__NewCameraLocation__pf = bpfv__CallFunc_BlueprintUpdateCamera_NewCameraLocation__pf;
				bpp__NewCameraRotation__pf = bpfv__CallFunc_BlueprintUpdateCamera_NewCameraRotation__pf;
				bpp__NewCameraFOV__pf = bpfv__CallFunc_BlueprintUpdateCamera_NewCameraFOV__pf;
				bpp__ReturnValue__pf = bpfv__CallFunc_BlueprintUpdateCamera_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::bpf__CustomCameraBehavior__pf(/*out*/ FVector& bpp__Location__pf, /*out*/ FRotator& bpp__Rotation__pf, /*out*/ float& bpp__FOV__pf)
{
	float bpfv__FPFOV__pf{};
	float bpfv__TPFOV__pf{};
	FVector bpfv__FPTarget__pf(EForceInit::ForceInit);
	FTransform bpfv__PivotTarget__pf{};
	TArray<AActor*> bpfv__Temp_object_Variable__pf{};
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue__pf{};
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	TScriptInterface<IALS_Camera_BPI_C> bpfv__K2Node_DynamicCast_AsALS_Camera_BPI__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	TScriptInterface<IALS_Camera_BPI_C> bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	FVector bpfv__CallFunc_BPI_Get_FP_CameraTarget_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_BPI_Get_3P_PivotTarget_ReturnValue__pf{};
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_2__pf{};
	float bpfv__CallFunc_Lerp_ReturnValue__pf{};
	TScriptInterface<IALS_Camera_BPI_C> bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_2__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_3__pf{};
	float bpfv__CallFunc_BPI_Get_CameraParameters_TP_FOV__pf{};
	float bpfv__CallFunc_BPI_Get_CameraParameters_FP_FOV__pf{};
	bool bpfv__CallFunc_BPI_Get_CameraParameters_RightShoulder__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location_1__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetUpVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	TEnumAsByte<EDrawDebugTrace::Type> bpfv__CallFunc_GetDebugTraceType_DebugTypu__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	TScriptInterface<IALS_Camera_BPI_C> bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_3__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_3__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location_2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BPI_Get_3P_TraceParams_TraceOrigin__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BPI_Get_3P_TraceParams_TraceRadius__pf{};
	TEnumAsByte<ETraceTypeQuery> bpfv__CallFunc_BPI_Get_3P_TraceParams_TraceChannel__pf{};
	FHitResult bpfv__CallFunc_SphereTraceSingle_OutHit__pf{};
	bool bpfv__CallFunc_SphereTraceSingle_ReturnValue__pf{};
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
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location_3__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Location_4__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Location_5__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_5__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_4__pf{};
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_5__pf{};
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_6__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayerController_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	TScriptInterface<IALS_Controller_BPI_C> bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_4__pf{};
	FVector bpfv__CallFunc_CalculateAxisIndependentLag_ReturnValue__pf(EForceInit::ForceInit);
	ACharacter* bpfv__CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_DebugView__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_ShowHUD__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_ShowTraces__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_ShowDebugShapes__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_ShowLayerColors__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_Slomo__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location_6__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_6__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_6__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Location_7__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Location_8__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_8__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_8__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Location_9__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_9__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_9__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Location_10__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_10__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_10__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_7__pf{};
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_8__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_9__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_GetCameraRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_10__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_11__pf{};
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_12__pf{};
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_13__pf{};
	float bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_14__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayerController_ReturnValue_1__pf{};
	FRotator bpfv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_2__pf{};
	FRotator bpfv__CallFunc_RInterpTo_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_RLerp_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetUpVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetRightVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_5__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_3__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_TLerp_ReturnValue__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_TLerp_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Location_11__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_11__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_11__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_VLerp_ReturnValue__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(40);
				__StateStack.Push(24);
				__StateStack.Push(16);
				__StateStack.Push(15);
				__StateStack.Push(14);
				__StateStack.Push(13);
				__StateStack.Push(12);
			}
		case 2:
			{
				if ( bpv__ControlledPawn__pf && bpv__ControlledPawn__pf->GetClass()->ImplementsInterface(UALS_Camera_BPI_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_1__pf.SetObject(bpv__ControlledPawn__pf);
					void* IAddress = bpv__ControlledPawn__pf->GetInterfaceAddress(UALS_Camera_BPI_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 41;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_1__pf))
				{
					bpfv__CallFunc_BPI_Get_3P_PivotTarget_ReturnValue__pf = IALS_Camera_BPI_C::Execute_bpf__BPI_Get_3P_PivotTarget__pf(bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_1__pf.GetObject() );
				}
			}
		case 4:
			{
				bpfv__PivotTarget__pf = bpfv__CallFunc_BPI_Get_3P_PivotTarget_ReturnValue__pf;
			}
		case 5:
			{
				if ( bpv__ControlledPawn__pf && bpv__ControlledPawn__pf->GetClass()->ImplementsInterface(UALS_Camera_BPI_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsALS_Camera_BPI__pf.SetObject(bpv__ControlledPawn__pf);
					void* IAddress = bpv__ControlledPawn__pf->GetInterfaceAddress(UALS_Camera_BPI_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsALS_Camera_BPI__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsALS_Camera_BPI__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsALS_Camera_BPI__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 42;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsALS_Camera_BPI__pf))
				{
					bpfv__CallFunc_BPI_Get_FP_CameraTarget_ReturnValue__pf = IALS_Camera_BPI_C::Execute_bpf__BPI_Get_FP_CameraTarget__pf(bpfv__K2Node_DynamicCast_AsALS_Camera_BPI__pf.GetObject() );
				}
			}
		case 7:
			{
				bpfv__FPTarget__pf = bpfv__CallFunc_BPI_Get_FP_CameraTarget_ReturnValue__pf;
			}
		case 8:
			{
				if ( bpv__ControlledPawn__pf && bpv__ControlledPawn__pf->GetClass()->ImplementsInterface(UALS_Camera_BPI_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_2__pf.SetObject(bpv__ControlledPawn__pf);
					void* IAddress = bpv__ControlledPawn__pf->GetInterfaceAddress(UALS_Camera_BPI_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_2__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_2__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_2__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 43;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_2__pf))
				{
					IALS_Camera_BPI_C::Execute_bpf__BPI_Get_CameraParameters__pf(bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_2__pf.GetObject() , /*out*/ bpfv__CallFunc_BPI_Get_CameraParameters_TP_FOV__pf, /*out*/ bpfv__CallFunc_BPI_Get_CameraParameters_FP_FOV__pf, /*out*/ bpfv__CallFunc_BPI_Get_CameraParameters_RightShoulder__pf);
				}
			}
		case 10:
			{
				bpfv__TPFOV__pf = bpfv__CallFunc_BPI_Get_CameraParameters_TP_FOV__pf;
			}
		case 11:
			{
				bpfv__FPFOV__pf = bpfv__CallFunc_BPI_Get_CameraParameters_FP_FOV__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("Override_Debug")));
				bpfv__CallFunc_GetCameraRotation_ReturnValue__pf = GetCameraRotation();
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_14__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("RotationLagSpeed")));
				bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
				bpfv__CallFunc_GetOwningPlayerController_ReturnValue_1__pf = GetOwningPlayerController();
				if(::IsValid(bpfv__CallFunc_GetOwningPlayerController_ReturnValue_1__pf))
				{
					bpfv__CallFunc_GetControlRotation_ReturnValue__pf = bpfv__CallFunc_GetOwningPlayerController_ReturnValue_1__pf->GetControlRotation();
				}
				bpfv__CallFunc_RInterpTo_ReturnValue__pf = UKismetMathLibrary::RInterpTo(bpfv__CallFunc_GetCameraRotation_ReturnValue__pf, bpfv__CallFunc_GetControlRotation_ReturnValue__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_14__pf);
				bpfv__CallFunc_RLerp_ReturnValue__pf = UKismetMathLibrary::RLerp(bpfv__CallFunc_RInterpTo_ReturnValue__pf, bpv__DebugViewRotation__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue__pf, true);
				bpv__TargetCameraRotation__pf = bpfv__CallFunc_RLerp_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				UKismetMathLibrary::BreakTransform(bpfv__PivotTarget__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_3__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_3__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_3__pf);
				UKismetMathLibrary::BreakTransform(bpfv__PivotTarget__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_4__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_4__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_4__pf);
				UKismetMathLibrary::BreakTransform(bpv__SmoothedPivotTarget__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_5__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_5__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_5__pf);
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_4__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("PivotLagSpeed_Y")));
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_5__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("PivotLagSpeed_Z")));
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_6__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("PivotLagSpeed_X")));
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_6__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_4__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_5__pf);
				bpfv__CallFunc_CalculateAxisIndependentLag_ReturnValue__pf = bpf__CalculateAxisIndependentLag__pf(bpfv__CallFunc_BreakTransform_Location_5__pf, bpfv__CallFunc_BreakTransform_Location_4__pf, bpv__TargetCameraRotation__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_CalculateAxisIndependentLag_ReturnValue__pf, bpfv__CallFunc_BreakTransform_Rotation_3__pf, FVector(1.000000,1.000000,1.000000));
				bpv__SmoothedPivotTarget__pf = bpfv__CallFunc_MakeTransform_ReturnValue_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				UKismetMathLibrary::BreakTransform(bpv__SmoothedPivotTarget__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_1__pf);
				bpfv__CallFunc_GetUpVector_ReturnValue__pf = UKismetMathLibrary::GetUpVector(bpfv__CallFunc_BreakTransform_Rotation_1__pf);
				bpfv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpfv__CallFunc_BreakTransform_Rotation_1__pf);
				bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_BreakTransform_Rotation_1__pf);
				UKismetMathLibrary::BreakTransform(bpv__SmoothedPivotTarget__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_10__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_10__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_10__pf);
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_7__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("PivotOffset_Z")));
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_8__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("PivotOffset_Y")));
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetUpVector_ReturnValue__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_7__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetRightVector_ReturnValue__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_8__pf);
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_9__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("PivotOffset_X")));
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_9__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_BreakTransform_Location_10__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpv__PivotLocation__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_1__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("Override_Debug")));
				UKismetMathLibrary::BreakTransform(bpfv__PivotTarget__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_BreakTransform_Location__pf, bpv__DebugViewOffset__pf);
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_11__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("CameraOffset_Z")));
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_12__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("CameraOffset_Y")));
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_13__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("CameraOffset_X")));
				bpfv__CallFunc_GetUpVector_ReturnValue_1__pf = UKismetMathLibrary::GetUpVector(bpv__TargetCameraRotation__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetUpVector_ReturnValue_1__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_11__pf);
				bpfv__CallFunc_GetRightVector_ReturnValue_1__pf = UKismetMathLibrary::GetRightVector(bpv__TargetCameraRotation__pf);
				bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf = UKismetMathLibrary::GetForwardVector(bpv__TargetCameraRotation__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetRightVector_ReturnValue_1__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_12__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_5__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_13__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf = UKismetMathLibrary::Add_VectorVector(bpv__PivotLocation__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_5__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf);
				bpfv__CallFunc_VLerp_ReturnValue__pf = UKismetMathLibrary::VLerp(bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_1__pf);
				bpv__TargetCameraLocation__pf = bpfv__CallFunc_VLerp_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				if ( bpv__ControlledPawn__pf && bpv__ControlledPawn__pf->GetClass()->ImplementsInterface(UALS_Camera_BPI_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_3__pf.SetObject(bpv__ControlledPawn__pf);
					void* IAddress = bpv__ControlledPawn__pf->GetInterfaceAddress(UALS_Camera_BPI_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_3__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_3__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_3__pf = (bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_3__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 17:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_3__pf))
				{
					IALS_Camera_BPI_C::Execute_bpf__BPI_Get_3P_TraceParams__pf(bpfv__K2Node_DynamicCast_AsALS_Camera_BPI_3__pf.GetObject() , /*out*/ bpfv__CallFunc_BPI_Get_3P_TraceParams_TraceOrigin__pf, /*out*/ bpfv__CallFunc_BPI_Get_3P_TraceParams_TraceRadius__pf, /*out*/ bpfv__CallFunc_BPI_Get_3P_TraceParams_TraceChannel__pf);
				}
			}
		case 18:
			{
				bpf__GetDebugTraceType__pf(EDrawDebugTrace::ForOneFrame, /*out*/ bpfv__CallFunc_GetDebugTraceType_DebugTypu__pf);
				bpfv__CallFunc_SphereTraceSingle_ReturnValue__pf = UKismetSystemLibrary::SphereTraceSingle(this, bpfv__CallFunc_BPI_Get_3P_TraceParams_TraceOrigin__pf, bpv__TargetCameraLocation__pf, bpfv__CallFunc_BPI_Get_3P_TraceParams_TraceRadius__pf, bpfv__CallFunc_BPI_Get_3P_TraceParams_TraceChannel__pf, false, bpfv__Temp_object_Variable__pf, bpfv__CallFunc_GetDebugTraceType_DebugTypu__pf, /*out*/ bpfv__CallFunc_SphereTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 19:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_SphereTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 20:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_SphereTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_BreakHitResult_Location__pf, bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, bpv__TargetCameraLocation__pf);
				bpv__TargetCameraLocation__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpfv__CallFunc_BPI_Get_3P_TraceParams_TraceOrigin__pf = FVector(0.000000,0.000000,0.000000);
			}
		case 22:
			{
				bpfv__CallFunc_BPI_Get_3P_TraceParams_TraceRadius__pf = 0.000000;
			}
		case 23:
			{
				bpfv__CallFunc_BPI_Get_3P_TraceParams_TraceChannel__pf = ETraceTypeQuery::TraceTypeQuery1;
				__CurrentState = 18;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_GetOwningPlayerController_ReturnValue__pf = GetOwningPlayerController();
				if ( bpfv__CallFunc_GetOwningPlayerController_ReturnValue__pf && bpfv__CallFunc_GetOwningPlayerController_ReturnValue__pf->GetClass()->ImplementsInterface(UALS_Controller_BPI_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf.SetObject(bpfv__CallFunc_GetOwningPlayerController_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetOwningPlayerController_ReturnValue__pf->GetInterfaceAddress(UALS_Controller_BPI_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_4__pf = (bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = 32;
					break;
				}
			}
		case 25:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf))
				{
					IALS_Controller_BPI_C::Execute_bpf__BPI_Get_DebugInfo__pf(bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf.GetObject() , /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_DebugView__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_ShowHUD__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_ShowTraces__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_ShowDebugShapes__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_ShowLayerColors__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_Slomo__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo__pf);
				}
			}
		case 26:
			{
				if (!bpfv__CallFunc_BPI_Get_DebugInfo_ShowDebugShapes__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 27:
			{
				UKismetMathLibrary::BreakTransform(bpfv__PivotTarget__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_2__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_2__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_2__pf);
				UKismetSystemLibrary::DrawDebugSphere(this, bpfv__CallFunc_BreakTransform_Location_2__pf, 16.000000, 8, FLinearColor(0.000000,1.000000,0.000000,1.000000), 0.000000, 0.500000);
			}
		case 28:
			{
				UKismetMathLibrary::BreakTransform(bpv__SmoothedPivotTarget__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_9__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_9__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_9__pf);
				UKismetSystemLibrary::DrawDebugSphere(this, bpfv__CallFunc_BreakTransform_Location_9__pf, 16.000000, 8, FLinearColor(1.000000,0.166667,0.000000,1.000000), 0.000000, 0.500000);
			}
		case 29:
			{
				UKismetSystemLibrary::DrawDebugSphere(this, bpv__PivotLocation__pf, 16.000000, 8, FLinearColor(0.000000,0.666667,1.000000,1.000000), 0.000000, 0.500000);
			}
		case 30:
			{
				UKismetMathLibrary::BreakTransform(bpfv__PivotTarget__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_7__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_7__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_7__pf);
				UKismetMathLibrary::BreakTransform(bpv__SmoothedPivotTarget__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_8__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_8__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_8__pf);
				UKismetSystemLibrary::DrawDebugLine(this, bpfv__CallFunc_BreakTransform_Location_8__pf, bpfv__CallFunc_BreakTransform_Location_7__pf, FLinearColor(1.000000,0.166667,0.000000,1.000000), 0.000000, 1.000000);
			}
		case 31:
			{
				UKismetMathLibrary::BreakTransform(bpv__SmoothedPivotTarget__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_6__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_6__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_6__pf);
				UKismetSystemLibrary::DrawDebugLine(this, bpv__PivotLocation__pf, bpfv__CallFunc_BreakTransform_Location_6__pf, FLinearColor(0.000000,0.666667,1.000000,1.000000), 0.000000, 1.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter__pf = ((ACharacter*)nullptr);
			}
		case 33:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_DebugView__pf = false;
			}
		case 34:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_ShowHUD__pf = false;
			}
		case 35:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_ShowTraces__pf = false;
			}
		case 36:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_ShowDebugShapes__pf = false;
			}
		case 37:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_ShowLayerColors__pf = false;
			}
		case 38:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_Slomo__pf = false;
			}
		case 39:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo__pf = false;
				__CurrentState = 26;
				break;
			}
		case 40:
			{
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_2__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("Weight_FirstPerson")));
				bpfv__CallFunc_Lerp_ReturnValue__pf = UKismetMathLibrary::Lerp(bpfv__TPFOV__pf, bpfv__FPFOV__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_2__pf);
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_3__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("Override_Debug")));
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpv__TargetCameraLocation__pf, bpv__DebugViewRotation__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_10__pf = bpf__Get_CameraBehaviorParam__pf(FName(TEXT("Weight_FirstPerson")));
				bpfv__CallFunc_MakeTransform_ReturnValue_2__pf = UKismetMathLibrary::MakeTransform(bpfv__FPTarget__pf, bpv__TargetCameraRotation__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_MakeTransform_ReturnValue_3__pf = UKismetMathLibrary::MakeTransform(bpv__TargetCameraLocation__pf, bpv__TargetCameraRotation__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_TLerp_ReturnValue__pf = UKismetMathLibrary::TLerp(bpfv__CallFunc_MakeTransform_ReturnValue_3__pf, bpfv__CallFunc_MakeTransform_ReturnValue_2__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_10__pf, ELerpInterpolationMode::QuatInterp);
				bpfv__CallFunc_TLerp_ReturnValue_1__pf = UKismetMathLibrary::TLerp(bpfv__CallFunc_TLerp_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf, bpfv__CallFunc_Get_CameraBehaviorParam_ReturnValue_3__pf, ELerpInterpolationMode::QuatInterp);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_TLerp_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_11__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_11__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_11__pf);
				bpp__Location__pf = bpfv__CallFunc_BreakTransform_Location_11__pf;
				bpp__Rotation__pf = bpfv__CallFunc_BreakTransform_Rotation_11__pf;
				bpp__FOV__pf = bpfv__CallFunc_Lerp_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 41:
			{
				bpfv__CallFunc_BPI_Get_3P_PivotTarget_ReturnValue__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				__CurrentState = 4;
				break;
			}
		case 42:
			{
				bpfv__CallFunc_BPI_Get_FP_CameraTarget_ReturnValue__pf = FVector(0.000000,0.000000,0.000000);
				__CurrentState = 7;
				break;
			}
		case 43:
			{
				bpfv__CallFunc_BPI_Get_CameraParameters_TP_FOV__pf = 0.000000;
			}
		case 44:
			{
				bpfv__CallFunc_BPI_Get_CameraParameters_FP_FOV__pf = 0.000000;
			}
		case 45:
			{
				bpfv__CallFunc_BPI_Get_CameraParameters_RightShoulder__pf = false;
				__CurrentState = 10;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
FVector  ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::bpf__CalculateAxisIndependentLag__pf(FVector bpp__CurrentLocation__pf, FVector bpp__TargetLocation__pf, FRotator bpp__CameraRotation__pf, FVector bpp__LagSpeeds__pf)
{
	FVector bpp__ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CameraRotationYaw__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_LessLess_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_LessLess_VectorRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	float bpfv__CallFunc_BreakVector_X_2__pf{};
	float bpfv__CallFunc_BreakVector_Y_2__pf{};
	float bpfv__CallFunc_BreakVector_Z_2__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_FInterpTo_ReturnValue__pf{};
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	float bpfv__CallFunc_FInterpTo_ReturnValue_1__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_FInterpTo_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	UKismetMathLibrary::BreakRotator(bpp__CameraRotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CameraRotationYaw__pf = bpfv__CallFunc_MakeRotator_ReturnValue__pf;
	UKismetMathLibrary::BreakVector(bpp__LagSpeeds__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_LessLess_VectorRotator_ReturnValue__pf = UKismetMathLibrary::LessLess_VectorRotator(bpp__TargetLocation__pf, bpfv__CameraRotationYaw__pf);
	bpfv__CallFunc_LessLess_VectorRotator_ReturnValue_1__pf = UKismetMathLibrary::LessLess_VectorRotator(bpp__CurrentLocation__pf, bpfv__CameraRotationYaw__pf);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_LessLess_VectorRotator_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_LessLess_VectorRotator_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_BreakVector_X_2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_2__pf);
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_FInterpTo_ReturnValue__pf = UKismetMathLibrary::FInterpTo(bpfv__CallFunc_BreakVector_Z_2__pf, bpfv__CallFunc_BreakVector_Z_1__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf, bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_FInterpTo_ReturnValue_1__pf = UKismetMathLibrary::FInterpTo(bpfv__CallFunc_BreakVector_Y_2__pf, bpfv__CallFunc_BreakVector_Y_1__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf, bpfv__CallFunc_BreakVector_Y__pf);
	bpfv__CallFunc_FInterpTo_ReturnValue_2__pf = UKismetMathLibrary::FInterpTo(bpfv__CallFunc_BreakVector_X_2__pf, bpfv__CallFunc_BreakVector_X_1__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_FInterpTo_ReturnValue_2__pf, bpfv__CallFunc_FInterpTo_ReturnValue_1__pf, bpfv__CallFunc_FInterpTo_ReturnValue__pf);
	bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CameraRotationYaw__pf);
	bpp__ReturnValue__pf = bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
float  ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::bpf__Get_CameraBehaviorParam__pf(FName bpp__CurveName__pf)
{
	float bpp__ReturnValue__pf{};
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	float bpfv__CallFunc_GetCurveValue_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__CameraBehavior__pf))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = bpv__CameraBehavior__pf->USkeletalMeshComponent::GetAnimInstance();
				}
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__CameraBehavior__pf))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = bpv__CameraBehavior__pf->USkeletalMeshComponent::GetAnimInstance();
				}
				if(::IsValid(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf))
				{
					bpfv__CallFunc_GetCurveValue_ReturnValue__pf = bpfv__CallFunc_GetAnimInstance_ReturnValue__pf->UAnimInstance::GetCurveValue(bpp__CurveName__pf);
				}
				bpp__ReturnValue__pf = bpfv__CallFunc_GetCurveValue_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpp__ReturnValue__pf = 0.000000;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::bpf__GetDebugTraceType__pf(EDrawDebugTrace::Type bpp__ShowTraceType__pf, /*out*/ TEnumAsByte<EDrawDebugTrace::Type>& bpp__DebugTypu__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	TScriptInterface<IALS_Controller_BPI_C> bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ACharacter* bpfv__CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_DebugView__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_ShowHUD__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_ShowTraces__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_ShowDebugShapes__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_ShowLayerColors__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_Slomo__pf{};
	bool bpfv__CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if ( bpfv__CallFunc_GetPlayerController_ReturnValue__pf && bpfv__CallFunc_GetPlayerController_ReturnValue__pf->GetClass()->ImplementsInterface(UALS_Controller_BPI_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf.SetObject(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->GetInterfaceAddress(UALS_Controller_BPI_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf))
				{
					IALS_Controller_BPI_C::Execute_bpf__BPI_Get_DebugInfo__pf(bpfv__K2Node_DynamicCast_AsALS_Controller_BPI__pf.GetObject() , /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_DebugView__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_ShowHUD__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_ShowTraces__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_ShowDebugShapes__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_ShowLayerColors__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_Slomo__pf, /*out*/ bpfv__CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo__pf);
				}
			}
		case 3:
			{
				if (!bpfv__CallFunc_BPI_Get_DebugInfo_ShowTraces__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 4:
			{
				bpp__DebugTypu__pf = bpp__ShowTraceType__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter__pf = ((ACharacter*)nullptr);
			}
		case 6:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_DebugView__pf = false;
			}
		case 7:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_ShowHUD__pf = false;
			}
		case 8:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_ShowTraces__pf = false;
			}
		case 9:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_ShowDebugShapes__pf = false;
			}
		case 10:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_ShowLayerColors__pf = false;
			}
		case 11:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_Slomo__pf = false;
			}
		case 12:
			{
				bpfv__CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo__pf = false;
				__CurrentState = 3;
				break;
			}
		case 13:
			{
				bpp__DebugTypu__pf = EDrawDebugTrace::None;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{273, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Mei/BP/CameraSystem/Mei_Camera.Mei_Camera 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{155, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{47, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EDrawDebugTrace 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{274, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETraceTypeQuery 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{228, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraModifier_CameraShake 
		{229, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/AdvancedLocomotionV4/Data/Curves/CameraBlendCurves/CameraLerp_1.CameraLerp_1 
		{230, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/AdvancedLocomotionV4/Data/Curves/CameraBlendCurves/CameraLerp_2.CameraLerp_2 
		{231, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Mei/BP/CameraSystem/Mei_Camera_Skeleton.Mei_Camera_Skeleton 
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{232, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByBool 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMovementMode 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SaveCachedPose 
		{233, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_ModifyCurve 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_UseCachedPose 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{153, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{275, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/AdvancedLocomotionV4/Blueprints/CameraSystem/Camera_Skeleton.Camera_Skeleton 
		{298, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/AdvancedLocomotionV4/Blueprints/CameraSystem/ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C 
		{299, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Mei/BP/CameraSystem/ABP_ALS_Mei_PlayerCameraBehavior.ABP_ALS_Mei_PlayerCameraBehavior_C 
		{281, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/AdvancedLocomotionV4/Blueprints/Interfaces/ALS_Controller_BPI.ALS_Controller_BPI_C 
		{282, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/AdvancedLocomotionV4/Blueprints/Interfaces/ALS_Camera_BPI.ALS_Camera_BPI_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923
{
	FRegisterHelper__ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/BP/CameraSystem/BP_ALS_Mei_PlayerCameraManager"), &ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923 Instance;
};
FRegisterHelper__ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923 FRegisterHelper__ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
