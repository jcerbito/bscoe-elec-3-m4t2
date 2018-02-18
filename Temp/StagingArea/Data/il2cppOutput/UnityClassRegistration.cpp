template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; 
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; template <> void RegisterClass<Terrain>();
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; template <> void RegisterClass<TerrainCollider>();
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; template <> void RegisterClass<ParticleAnimator>();
class ParticleEmitter; template <> void RegisterClass<ParticleEmitter>();
class EllipsoidParticleEmitter; template <> void RegisterClass<EllipsoidParticleEmitter>();
class MeshParticleEmitter; 
class ParticleSystem; 
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; template <> void RegisterClass<ParticleRenderer>();
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterClass<TextRenderingPrivate::TextMesh>();
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class StyleSheetImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; 
class AnimationClip; 
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; 
class AnimatorController; 
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; template <> void RegisterClass<TerrainData>();
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 76 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. Renderer
	RegisterClass<Renderer>();
	//6. GUILayer
	RegisterClass<GUILayer>();
	//7. Mesh
	RegisterClass<Mesh>();
	//8. NamedObject
	RegisterClass<NamedObject>();
	//9. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//10. Shader
	RegisterClass<Shader>();
	//11. Material
	RegisterClass<Material>();
	//12. Sprite
	RegisterClass<Sprite>();
	//13. Texture
	RegisterClass<Texture>();
	//14. Texture2D
	RegisterClass<Texture2D>();
	//15. RenderTexture
	RegisterClass<RenderTexture>();
	//16. Transform
	RegisterClass<Transform>();
	//17. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//18. Collider
	RegisterClass<Collider>();
	//19. BoxCollider
	RegisterClass<BoxCollider>();
	//20. SphereCollider
	RegisterClass<SphereCollider>();
	//21. MeshCollider
	RegisterClass<MeshCollider>();
	//22. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//23. AudioClip
	RegisterClass<AudioClip>();
	//24. SampleClip
	RegisterClass<SampleClip>();
	//25. Animator
	RegisterClass<Animator>();
	//26. TerrainData
	RegisterClass<TerrainData>();
	//27. Terrain
	RegisterClass<Terrain>();
	//28. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//29. UI::Canvas
	RegisterClass<UI::Canvas>();
	//30. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//31. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//32. PreloadData
	RegisterClass<PreloadData>();
	//33. Cubemap
	RegisterClass<Cubemap>();
	//34. Texture3D
	RegisterClass<Texture3D>();
	//35. Texture2DArray
	RegisterClass<Texture2DArray>();
	//36. MeshFilter
	RegisterClass<MeshFilter>();
	//37. MeshRenderer
	RegisterClass<MeshRenderer>();
	//38. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//39. MonoScript
	RegisterClass<MonoScript>();
	//40. TextAsset
	RegisterClass<TextAsset>();
	//41. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//42. GameManager
	RegisterClass<GameManager>();
	//43. AudioManager
	RegisterClass<AudioManager>();
	//44. PhysicsManager
	RegisterClass<PhysicsManager>();
	//45. PlayerSettings
	RegisterClass<PlayerSettings>();
	//46. BuildSettings
	RegisterClass<BuildSettings>();
	//47. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//48. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//49. InputManager
	RegisterClass<InputManager>();
	//50. ResourceManager
	RegisterClass<ResourceManager>();
	//51. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//52. ScriptMapper
	RegisterClass<ScriptMapper>();
	//53. TagManager
	RegisterClass<TagManager>();
	//54. TimeManager
	RegisterClass<TimeManager>();
	//55. QualitySettings
	RegisterClass<QualitySettings>();
	//56. MonoManager
	RegisterClass<MonoManager>();
	//57. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//58. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//59. Light
	RegisterClass<Light>();
	//60. RenderSettings
	RegisterClass<RenderSettings>();
	//61. LevelGameManager
	RegisterClass<LevelGameManager>();
	//62. LightmapSettings
	RegisterClass<LightmapSettings>();
	//63. AudioSource
	RegisterClass<AudioSource>();
	//64. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//65. ParticleRenderer
	RegisterClass<ParticleRenderer>();
	//66. ParticleEmitter
	RegisterClass<ParticleEmitter>();
	//67. AudioListener
	RegisterClass<AudioListener>();
	//68. TextRenderingPrivate::TextMesh
	RegisterClass<TextRenderingPrivate::TextMesh>();
	//69. ParticleAnimator
	RegisterClass<ParticleAnimator>();
	//70. EllipsoidParticleEmitter
	RegisterClass<EllipsoidParticleEmitter>();
	//71. FlareLayer
	RegisterClass<FlareLayer>();
	//72. Animation
	RegisterClass<Animation>();
	//73. TerrainCollider
	RegisterClass<TerrainCollider>();
	//74. Rigidbody
	RegisterClass<Rigidbody>();
	//75. LightProbes
	RegisterClass<LightProbes>();

}
