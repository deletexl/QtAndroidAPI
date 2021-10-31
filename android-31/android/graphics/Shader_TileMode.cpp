#include "./Shader_TileMode.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Shader_TileMode Shader_TileMode::CLAMP()
	{
		return getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"CLAMP",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	android::graphics::Shader_TileMode Shader_TileMode::DECAL()
	{
		return getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"DECAL",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	android::graphics::Shader_TileMode Shader_TileMode::MIRROR()
	{
		return getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"MIRROR",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	android::graphics::Shader_TileMode Shader_TileMode::REPEAT()
	{
		return getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"REPEAT",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	
	// QAndroidJniObject forward
	Shader_TileMode::Shader_TileMode(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Shader_TileMode Shader_TileMode::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Shader$TileMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Shader$TileMode;",
			arg0
		);
	}
	jarray Shader_TileMode::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Shader$TileMode",
			"values",
			"()[Landroid/graphics/Shader$TileMode;"
		).object<jarray>();
	}
} // namespace android::graphics

