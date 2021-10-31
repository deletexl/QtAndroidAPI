#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}
namespace java::nio
{
	class IntBuffer;
}

namespace android::opengl
{
	class GLES31Ext : public __JniBaseClass
	{
	public:
		// Fields
		static jint GL_BLEND_ADVANCED_COHERENT_KHR();
		static jint GL_BUFFER_KHR();
		static jint GL_CLAMP_TO_BORDER_EXT();
		static jint GL_COLORBURN_KHR();
		static jint GL_COLORDODGE_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_10x10_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_10x5_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_10x6_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_10x8_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_12x10_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_12x12_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_4x4_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_5x4_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_5x5_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_6x5_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_6x6_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_8x5_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_8x6_KHR();
		static jint GL_COMPRESSED_RGBA_ASTC_8x8_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR();
		static jint GL_CONTEXT_FLAG_DEBUG_BIT_KHR();
		static jint GL_DARKEN_KHR();
		static jint GL_DEBUG_CALLBACK_FUNCTION_KHR();
		static jint GL_DEBUG_CALLBACK_USER_PARAM_KHR();
		static jint GL_DEBUG_GROUP_STACK_DEPTH_KHR();
		static jint GL_DEBUG_LOGGED_MESSAGES_KHR();
		static jint GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR();
		static jint GL_DEBUG_OUTPUT_KHR();
		static jint GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR();
		static jint GL_DEBUG_SEVERITY_HIGH_KHR();
		static jint GL_DEBUG_SEVERITY_LOW_KHR();
		static jint GL_DEBUG_SEVERITY_MEDIUM_KHR();
		static jint GL_DEBUG_SEVERITY_NOTIFICATION_KHR();
		static jint GL_DEBUG_SOURCE_API_KHR();
		static jint GL_DEBUG_SOURCE_APPLICATION_KHR();
		static jint GL_DEBUG_SOURCE_OTHER_KHR();
		static jint GL_DEBUG_SOURCE_SHADER_COMPILER_KHR();
		static jint GL_DEBUG_SOURCE_THIRD_PARTY_KHR();
		static jint GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR();
		static jint GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR();
		static jint GL_DEBUG_TYPE_ERROR_KHR();
		static jint GL_DEBUG_TYPE_MARKER_KHR();
		static jint GL_DEBUG_TYPE_OTHER_KHR();
		static jint GL_DEBUG_TYPE_PERFORMANCE_KHR();
		static jint GL_DEBUG_TYPE_POP_GROUP_KHR();
		static jint GL_DEBUG_TYPE_PORTABILITY_KHR();
		static jint GL_DEBUG_TYPE_PUSH_GROUP_KHR();
		static jint GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR();
		static jint GL_DECODE_EXT();
		static jint GL_DIFFERENCE_KHR();
		static jint GL_EXCLUSION_KHR();
		static jint GL_FIRST_VERTEX_CONVENTION_EXT();
		static jint GL_FRACTIONAL_EVEN_EXT();
		static jint GL_FRACTIONAL_ODD_EXT();
		static jint GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES();
		static jint GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT();
		static jint GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT();
		static jint GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT();
		static jint GL_GEOMETRY_LINKED_INPUT_TYPE_EXT();
		static jint GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT();
		static jint GL_GEOMETRY_LINKED_VERTICES_OUT_EXT();
		static jint GL_GEOMETRY_SHADER_BIT_EXT();
		static jint GL_GEOMETRY_SHADER_EXT();
		static jint GL_GEOMETRY_SHADER_INVOCATIONS_EXT();
		static jint GL_HARDLIGHT_KHR();
		static jint GL_HSL_COLOR_KHR();
		static jint GL_HSL_HUE_KHR();
		static jint GL_HSL_LUMINOSITY_KHR();
		static jint GL_HSL_SATURATION_KHR();
		static jint GL_IMAGE_BUFFER_EXT();
		static jint GL_IMAGE_CUBE_MAP_ARRAY_EXT();
		static jint GL_INT_IMAGE_BUFFER_EXT();
		static jint GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT();
		static jint GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES();
		static jint GL_INT_SAMPLER_BUFFER_EXT();
		static jint GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT();
		static jint GL_ISOLINES_EXT();
		static jint GL_IS_PER_PATCH_EXT();
		static jint GL_LAST_VERTEX_CONVENTION_EXT();
		static jint GL_LAYER_PROVOKING_VERTEX_EXT();
		static jint GL_LIGHTEN_KHR();
		static jint GL_LINES_ADJACENCY_EXT();
		static jint GL_LINE_STRIP_ADJACENCY_EXT();
		static jint GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT();
		static jint GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT();
		static jint GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT();
		static jint GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR();
		static jint GL_MAX_DEBUG_LOGGED_MESSAGES_KHR();
		static jint GL_MAX_DEBUG_MESSAGE_LENGTH_KHR();
		static jint GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES();
		static jint GL_MAX_FRAMEBUFFER_LAYERS_EXT();
		static jint GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT();
		static jint GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT();
		static jint GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT();
		static jint GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT();
		static jint GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT();
		static jint GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT();
		static jint GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT();
		static jint GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT();
		static jint GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT();
		static jint GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT();
		static jint GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT();
		static jint GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT();
		static jint GL_MAX_LABEL_LENGTH_KHR();
		static jint GL_MAX_PATCH_VERTICES_EXT();
		static jint GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT();
		static jint GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT();
		static jint GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT();
		static jint GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT();
		static jint GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT();
		static jint GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT();
		static jint GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT();
		static jint GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT();
		static jint GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT();
		static jint GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT();
		static jint GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT();
		static jint GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT();
		static jint GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT();
		static jint GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT();
		static jint GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT();
		static jint GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT();
		static jint GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT();
		static jint GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT();
		static jint GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT();
		static jint GL_MAX_TESS_GEN_LEVEL_EXT();
		static jint GL_MAX_TESS_PATCH_COMPONENTS_EXT();
		static jint GL_MAX_TEXTURE_BUFFER_SIZE_EXT();
		static jint GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES();
		static jint GL_MIN_SAMPLE_SHADING_VALUE_OES();
		static jint GL_MULTIPLY_KHR();
		static jint GL_OVERLAY_KHR();
		static jint GL_PATCHES_EXT();
		static jint GL_PATCH_VERTICES_EXT();
		static jint GL_PRIMITIVES_GENERATED_EXT();
		static jint GL_PRIMITIVE_BOUNDING_BOX_EXT();
		static jint GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED();
		static jint GL_PROGRAM_KHR();
		static jint GL_QUADS_EXT();
		static jint GL_QUERY_KHR();
		static jint GL_REFERENCED_BY_GEOMETRY_SHADER_EXT();
		static jint GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT();
		static jint GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT();
		static jint GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES();
		static jint GL_SAMPLER_BUFFER_EXT();
		static jint GL_SAMPLER_CUBE_MAP_ARRAY_EXT();
		static jint GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT();
		static jint GL_SAMPLER_KHR();
		static jint GL_SAMPLE_SHADING_OES();
		static jint GL_SCREEN_KHR();
		static jint GL_SHADER_KHR();
		static jint GL_SKIP_DECODE_EXT();
		static jint GL_SOFTLIGHT_KHR();
		static jint GL_STACK_OVERFLOW_KHR();
		static jint GL_STACK_UNDERFLOW_KHR();
		static jint GL_STENCIL_INDEX8_OES();
		static jint GL_STENCIL_INDEX_OES();
		static jint GL_TESS_CONTROL_OUTPUT_VERTICES_EXT();
		static jint GL_TESS_CONTROL_SHADER_BIT_EXT();
		static jint GL_TESS_CONTROL_SHADER_EXT();
		static jint GL_TESS_EVALUATION_SHADER_BIT_EXT();
		static jint GL_TESS_EVALUATION_SHADER_EXT();
		static jint GL_TESS_GEN_MODE_EXT();
		static jint GL_TESS_GEN_POINT_MODE_EXT();
		static jint GL_TESS_GEN_SPACING_EXT();
		static jint GL_TESS_GEN_VERTEX_ORDER_EXT();
		static jint GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES();
		static jint GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES();
		static jint GL_TEXTURE_BINDING_BUFFER_EXT();
		static jint GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT();
		static jint GL_TEXTURE_BORDER_COLOR_EXT();
		static jint GL_TEXTURE_BUFFER_BINDING_EXT();
		static jint GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT();
		static jint GL_TEXTURE_BUFFER_EXT();
		static jint GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT();
		static jint GL_TEXTURE_BUFFER_OFFSET_EXT();
		static jint GL_TEXTURE_BUFFER_SIZE_EXT();
		static jint GL_TEXTURE_CUBE_MAP_ARRAY_EXT();
		static jint GL_TEXTURE_SRGB_DECODE_EXT();
		static jint GL_TRIANGLES_ADJACENCY_EXT();
		static jint GL_TRIANGLE_STRIP_ADJACENCY_EXT();
		static jint GL_UNDEFINED_VERTEX_EXT();
		static jint GL_UNSIGNED_INT_IMAGE_BUFFER_EXT();
		static jint GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT();
		static jint GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES();
		static jint GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT();
		static jint GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT();
		static jint GL_VERTEX_ARRAY_KHR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GLES31Ext(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GLES31Ext(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void glBlendBarrierKHR();
		static void glBlendEquationSeparateiEXT(jint arg0, jint arg1, jint arg2);
		static void glBlendEquationiEXT(jint arg0, jint arg1);
		static void glBlendFuncSeparateiEXT(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glBlendFunciEXT(jint arg0, jint arg1, jint arg2);
		static void glColorMaskiEXT(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3, jboolean arg4);
		static void glCopyImageSubDataEXT(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11, jint arg12, jint arg13, jint arg14);
		static void glDebugMessageCallbackKHR(__JniBaseClass arg0);
		static void glDebugMessageControlKHR(jint arg0, jint arg1, jint arg2, jint arg3, java::nio::IntBuffer arg4, jboolean arg5);
		static void glDebugMessageControlKHR(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4, jint arg5, jboolean arg6);
		static void glDebugMessageInsertKHR(jint arg0, jint arg1, jint arg2, jint arg3, jstring arg4);
		static void glDisableiEXT(jint arg0, jint arg1);
		static void glEnableiEXT(jint arg0, jint arg1);
		static void glFramebufferTextureEXT(jint arg0, jint arg1, jint arg2, jint arg3);
		static __JniBaseClass glGetDebugMessageCallbackKHR();
		static jarray glGetDebugMessageLogKHR(jint arg0, java::nio::IntBuffer arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4);
		static jarray glGetDebugMessageLogKHR(jint arg0, jintArray arg1, jint arg2, jintArray arg3, jint arg4, jintArray arg5, jint arg6, jintArray arg7, jint arg8);
		static jint glGetDebugMessageLogKHR(jint arg0, java::nio::IntBuffer arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4, java::nio::IntBuffer arg5, java::nio::ByteBuffer arg6);
		static jint glGetDebugMessageLogKHR(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5, jintArray arg6, jint arg7, jintArray arg8, jint arg9, jintArray arg10, jint arg11, jbyteArray arg12, jint arg13);
		static jstring glGetObjectLabelKHR(jint arg0, jint arg1);
		static jstring glGetObjectPtrLabelKHR(jlong arg0);
		static void glGetSamplerParameterIivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetSamplerParameterIivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetSamplerParameterIuivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetSamplerParameterIuivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetTexParameterIivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetTexParameterIivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetTexParameterIuivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetTexParameterIuivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static jboolean glIsEnablediEXT(jint arg0, jint arg1);
		static void glMinSampleShadingOES(jfloat arg0);
		static void glObjectLabelKHR(jint arg0, jint arg1, jint arg2, jstring arg3);
		static void glObjectPtrLabelKHR(jlong arg0, jstring arg1);
		static void glPatchParameteriEXT(jint arg0, jint arg1);
		static void glPopDebugGroupKHR();
		static void glPrimitiveBoundingBoxEXT(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		static void glPushDebugGroupKHR(jint arg0, jint arg1, jint arg2, jstring arg3);
		static void glSamplerParameterIivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glSamplerParameterIivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glSamplerParameterIuivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glSamplerParameterIuivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glTexBufferEXT(jint arg0, jint arg1, jint arg2);
		static void glTexBufferRangeEXT(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glTexParameterIivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glTexParameterIivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glTexParameterIuivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glTexParameterIuivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glTexStorage3DMultisampleOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6);
	};
} // namespace android::opengl
