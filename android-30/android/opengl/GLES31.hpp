#pragma once

#include "../../JObject.hpp"
#include "./GLES20.hpp"
#include "./GLES30.hpp"

namespace java::nio
{
	class FloatBuffer;
}
namespace java::nio
{
	class IntBuffer;
}

namespace android::opengl
{
	class GLES31 : public android::opengl::GLES30
	{
	public:
		// Fields
		static jint GL_ACTIVE_ATOMIC_COUNTER_BUFFERS();
		static jint GL_ACTIVE_PROGRAM();
		static jint GL_ACTIVE_RESOURCES();
		static jint GL_ACTIVE_VARIABLES();
		static jint GL_ALL_BARRIER_BITS();
		static jint GL_ALL_SHADER_BITS();
		static jint GL_ARRAY_SIZE();
		static jint GL_ARRAY_STRIDE();
		static jint GL_ATOMIC_COUNTER_BARRIER_BIT();
		static jint GL_ATOMIC_COUNTER_BUFFER();
		static jint GL_ATOMIC_COUNTER_BUFFER_BINDING();
		static jint GL_ATOMIC_COUNTER_BUFFER_INDEX();
		static jint GL_ATOMIC_COUNTER_BUFFER_SIZE();
		static jint GL_ATOMIC_COUNTER_BUFFER_START();
		static jint GL_BLOCK_INDEX();
		static jint GL_BUFFER_BINDING();
		static jint GL_BUFFER_DATA_SIZE();
		static jint GL_BUFFER_UPDATE_BARRIER_BIT();
		static jint GL_BUFFER_VARIABLE();
		static jint GL_COMMAND_BARRIER_BIT();
		static jint GL_COMPUTE_SHADER();
		static jint GL_COMPUTE_SHADER_BIT();
		static jint GL_COMPUTE_WORK_GROUP_SIZE();
		static jint GL_DEPTH_STENCIL_TEXTURE_MODE();
		static jint GL_DISPATCH_INDIRECT_BUFFER();
		static jint GL_DISPATCH_INDIRECT_BUFFER_BINDING();
		static jint GL_DRAW_INDIRECT_BUFFER();
		static jint GL_DRAW_INDIRECT_BUFFER_BINDING();
		static jint GL_ELEMENT_ARRAY_BARRIER_BIT();
		static jint GL_FRAGMENT_SHADER_BIT();
		static jint GL_FRAMEBUFFER_BARRIER_BIT();
		static jint GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS();
		static jint GL_FRAMEBUFFER_DEFAULT_HEIGHT();
		static jint GL_FRAMEBUFFER_DEFAULT_SAMPLES();
		static jint GL_FRAMEBUFFER_DEFAULT_WIDTH();
		static jint GL_IMAGE_2D();
		static jint GL_IMAGE_2D_ARRAY();
		static jint GL_IMAGE_3D();
		static jint GL_IMAGE_BINDING_ACCESS();
		static jint GL_IMAGE_BINDING_FORMAT();
		static jint GL_IMAGE_BINDING_LAYER();
		static jint GL_IMAGE_BINDING_LAYERED();
		static jint GL_IMAGE_BINDING_LEVEL();
		static jint GL_IMAGE_BINDING_NAME();
		static jint GL_IMAGE_CUBE();
		static jint GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS();
		static jint GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE();
		static jint GL_IMAGE_FORMAT_COMPATIBILITY_TYPE();
		static jint GL_INT_IMAGE_2D();
		static jint GL_INT_IMAGE_2D_ARRAY();
		static jint GL_INT_IMAGE_3D();
		static jint GL_INT_IMAGE_CUBE();
		static jint GL_INT_SAMPLER_2D_MULTISAMPLE();
		static jint GL_IS_ROW_MAJOR();
		static jint GL_LOCATION();
		static jint GL_MATRIX_STRIDE();
		static jint GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS();
		static jint GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE();
		static jint GL_MAX_COLOR_TEXTURE_SAMPLES();
		static jint GL_MAX_COMBINED_ATOMIC_COUNTERS();
		static jint GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS();
		static jint GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS();
		static jint GL_MAX_COMBINED_IMAGE_UNIFORMS();
		static jint GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES();
		static jint GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS();
		static jint GL_MAX_COMPUTE_ATOMIC_COUNTERS();
		static jint GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS();
		static jint GL_MAX_COMPUTE_IMAGE_UNIFORMS();
		static jint GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS();
		static jint GL_MAX_COMPUTE_SHARED_MEMORY_SIZE();
		static jint GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS();
		static jint GL_MAX_COMPUTE_UNIFORM_BLOCKS();
		static jint GL_MAX_COMPUTE_UNIFORM_COMPONENTS();
		static jint GL_MAX_COMPUTE_WORK_GROUP_COUNT();
		static jint GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS();
		static jint GL_MAX_COMPUTE_WORK_GROUP_SIZE();
		static jint GL_MAX_DEPTH_TEXTURE_SAMPLES();
		static jint GL_MAX_FRAGMENT_ATOMIC_COUNTERS();
		static jint GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS();
		static jint GL_MAX_FRAGMENT_IMAGE_UNIFORMS();
		static jint GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS();
		static jint GL_MAX_FRAMEBUFFER_HEIGHT();
		static jint GL_MAX_FRAMEBUFFER_SAMPLES();
		static jint GL_MAX_FRAMEBUFFER_WIDTH();
		static jint GL_MAX_IMAGE_UNITS();
		static jint GL_MAX_INTEGER_SAMPLES();
		static jint GL_MAX_NAME_LENGTH();
		static jint GL_MAX_NUM_ACTIVE_VARIABLES();
		static jint GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET();
		static jint GL_MAX_SAMPLE_MASK_WORDS();
		static jint GL_MAX_SHADER_STORAGE_BLOCK_SIZE();
		static jint GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS();
		static jint GL_MAX_UNIFORM_LOCATIONS();
		static jint GL_MAX_VERTEX_ATOMIC_COUNTERS();
		static jint GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS();
		static jint GL_MAX_VERTEX_ATTRIB_BINDINGS();
		static jint GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET();
		static jint GL_MAX_VERTEX_ATTRIB_STRIDE();
		static jint GL_MAX_VERTEX_IMAGE_UNIFORMS();
		static jint GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS();
		static jint GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET();
		static jint GL_NAME_LENGTH();
		static jint GL_NUM_ACTIVE_VARIABLES();
		static jint GL_OFFSET();
		static jint GL_PIXEL_BUFFER_BARRIER_BIT();
		static jint GL_PROGRAM_INPUT();
		static jint GL_PROGRAM_OUTPUT();
		static jint GL_PROGRAM_PIPELINE_BINDING();
		static jint GL_PROGRAM_SEPARABLE();
		static jint GL_READ_ONLY();
		static jint GL_READ_WRITE();
		static jint GL_REFERENCED_BY_COMPUTE_SHADER();
		static jint GL_REFERENCED_BY_FRAGMENT_SHADER();
		static jint GL_REFERENCED_BY_VERTEX_SHADER();
		static jint GL_SAMPLER_2D_MULTISAMPLE();
		static jint GL_SAMPLE_MASK();
		static jint GL_SAMPLE_MASK_VALUE();
		static jint GL_SAMPLE_POSITION();
		static jint GL_SHADER_IMAGE_ACCESS_BARRIER_BIT();
		static jint GL_SHADER_STORAGE_BARRIER_BIT();
		static jint GL_SHADER_STORAGE_BLOCK();
		static jint GL_SHADER_STORAGE_BUFFER();
		static jint GL_SHADER_STORAGE_BUFFER_BINDING();
		static jint GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT();
		static jint GL_SHADER_STORAGE_BUFFER_SIZE();
		static jint GL_SHADER_STORAGE_BUFFER_START();
		static jint GL_STENCIL_INDEX();
		static jint GL_TEXTURE_2D_MULTISAMPLE();
		static jint GL_TEXTURE_ALPHA_SIZE();
		static jint GL_TEXTURE_ALPHA_TYPE();
		static jint GL_TEXTURE_BINDING_2D_MULTISAMPLE();
		static jint GL_TEXTURE_BLUE_SIZE();
		static jint GL_TEXTURE_BLUE_TYPE();
		static jint GL_TEXTURE_COMPRESSED();
		static jint GL_TEXTURE_DEPTH();
		static jint GL_TEXTURE_DEPTH_SIZE();
		static jint GL_TEXTURE_DEPTH_TYPE();
		static jint GL_TEXTURE_FETCH_BARRIER_BIT();
		static jint GL_TEXTURE_FIXED_SAMPLE_LOCATIONS();
		static jint GL_TEXTURE_GREEN_SIZE();
		static jint GL_TEXTURE_GREEN_TYPE();
		static jint GL_TEXTURE_HEIGHT();
		static jint GL_TEXTURE_INTERNAL_FORMAT();
		static jint GL_TEXTURE_RED_SIZE();
		static jint GL_TEXTURE_RED_TYPE();
		static jint GL_TEXTURE_SAMPLES();
		static jint GL_TEXTURE_SHARED_SIZE();
		static jint GL_TEXTURE_STENCIL_SIZE();
		static jint GL_TEXTURE_UPDATE_BARRIER_BIT();
		static jint GL_TEXTURE_WIDTH();
		static jint GL_TOP_LEVEL_ARRAY_SIZE();
		static jint GL_TOP_LEVEL_ARRAY_STRIDE();
		static jint GL_TRANSFORM_FEEDBACK_BARRIER_BIT();
		static jint GL_TRANSFORM_FEEDBACK_VARYING();
		static jint GL_TYPE();
		static jint GL_UNIFORM();
		static jint GL_UNIFORM_BARRIER_BIT();
		static jint GL_UNIFORM_BLOCK();
		static jint GL_UNSIGNED_INT_ATOMIC_COUNTER();
		static jint GL_UNSIGNED_INT_IMAGE_2D();
		static jint GL_UNSIGNED_INT_IMAGE_2D_ARRAY();
		static jint GL_UNSIGNED_INT_IMAGE_3D();
		static jint GL_UNSIGNED_INT_IMAGE_CUBE();
		static jint GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE();
		static jint GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT();
		static jint GL_VERTEX_ATTRIB_BINDING();
		static jint GL_VERTEX_ATTRIB_RELATIVE_OFFSET();
		static jint GL_VERTEX_BINDING_BUFFER();
		static jint GL_VERTEX_BINDING_DIVISOR();
		static jint GL_VERTEX_BINDING_OFFSET();
		static jint GL_VERTEX_BINDING_STRIDE();
		static jint GL_VERTEX_SHADER_BIT();
		static jint GL_WRITE_ONLY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GLES31(const char *className, const char *sig, Ts...agv) : android::opengl::GLES30(className, sig, std::forward<Ts>(agv)...) {}
		GLES31(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void glActiveShaderProgram(jint arg0, jint arg1);
		static void glBindImageTexture(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5, jint arg6);
		static void glBindProgramPipeline(jint arg0);
		static void glBindVertexBuffer(jint arg0, jint arg1, jlong arg2, jint arg3);
		static jint glCreateShaderProgramv(jint arg0, jarray arg1);
		static void glDeleteProgramPipelines(jint arg0, java::nio::IntBuffer arg1);
		static void glDeleteProgramPipelines(jint arg0, jintArray arg1, jint arg2);
		static void glDispatchCompute(jint arg0, jint arg1, jint arg2);
		static void glDispatchComputeIndirect(jlong arg0);
		static void glDrawArraysIndirect(jint arg0, jlong arg1);
		static void glDrawElementsIndirect(jint arg0, jint arg1, jlong arg2);
		static void glFramebufferParameteri(jint arg0, jint arg1, jint arg2);
		static void glGenProgramPipelines(jint arg0, java::nio::IntBuffer arg1);
		static void glGenProgramPipelines(jint arg0, jintArray arg1, jint arg2);
		static void glGetBooleani_v(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetBooleani_v(jint arg0, jint arg1, jbooleanArray arg2, jint arg3);
		static void glGetFramebufferParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetFramebufferParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetMultisamplefv(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glGetMultisamplefv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glGetProgramInterfaceiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glGetProgramInterfaceiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static jstring glGetProgramPipelineInfoLog(jint arg0);
		static void glGetProgramPipelineiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetProgramPipelineiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static jint glGetProgramResourceIndex(jint arg0, jint arg1, jstring arg2);
		static jint glGetProgramResourceLocation(jint arg0, jint arg1, jstring arg2);
		static jstring glGetProgramResourceName(jint arg0, jint arg1, jint arg2);
		static void glGetProgramResourceiv(jint arg0, jint arg1, jint arg2, jint arg3, java::nio::IntBuffer arg4, jint arg5, java::nio::IntBuffer arg6, java::nio::IntBuffer arg7);
		static void glGetProgramResourceiv(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4, jint arg5, jint arg6, jintArray arg7, jint arg8, jintArray arg9, jint arg10);
		static void glGetTexLevelParameterfv(jint arg0, jint arg1, jint arg2, java::nio::FloatBuffer arg3);
		static void glGetTexLevelParameterfv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4);
		static void glGetTexLevelParameteriv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glGetTexLevelParameteriv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static jboolean glIsProgramPipeline(jint arg0);
		static void glMemoryBarrier(jint arg0);
		static void glMemoryBarrierByRegion(jint arg0);
		static void glProgramUniform1f(jint arg0, jint arg1, jfloat arg2);
		static void glProgramUniform1fv(jint arg0, jint arg1, jint arg2, java::nio::FloatBuffer arg3);
		static void glProgramUniform1fv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4);
		static void glProgramUniform1i(jint arg0, jint arg1, jint arg2);
		static void glProgramUniform1iv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glProgramUniform1iv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform1ui(jint arg0, jint arg1, jint arg2);
		static void glProgramUniform1uiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glProgramUniform1uiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform2f(jint arg0, jint arg1, jfloat arg2, jfloat arg3);
		static void glProgramUniform2fv(jint arg0, jint arg1, jint arg2, java::nio::FloatBuffer arg3);
		static void glProgramUniform2fv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4);
		static void glProgramUniform2i(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glProgramUniform2iv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glProgramUniform2iv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform2ui(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glProgramUniform2uiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glProgramUniform2uiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform3f(jint arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void glProgramUniform3fv(jint arg0, jint arg1, jint arg2, java::nio::FloatBuffer arg3);
		static void glProgramUniform3fv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4);
		static void glProgramUniform3i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glProgramUniform3iv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glProgramUniform3iv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform3ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glProgramUniform3uiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glProgramUniform3uiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform4f(jint arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void glProgramUniform4fv(jint arg0, jint arg1, jint arg2, java::nio::FloatBuffer arg3);
		static void glProgramUniform4fv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4);
		static void glProgramUniform4i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void glProgramUniform4iv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glProgramUniform4iv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform4ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void glProgramUniform4uiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glProgramUniform4uiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniformMatrix2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix2x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix2x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix2x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix2x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix3x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix3x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix3x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix3x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix4x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix4x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix4x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix4x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glSampleMaski(jint arg0, jint arg1);
		static void glTexStorage2DMultisample(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5);
		static void glUseProgramStages(jint arg0, jint arg1, jint arg2);
		static void glValidateProgramPipeline(jint arg0);
		static void glVertexAttribBinding(jint arg0, jint arg1);
		static void glVertexAttribFormat(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4);
		static void glVertexAttribIFormat(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glVertexBindingDivisor(jint arg0, jint arg1);
	};
} // namespace android::opengl

