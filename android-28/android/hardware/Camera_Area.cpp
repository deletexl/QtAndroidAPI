#include "../graphics/Rect.hpp"
#include "./Camera_Area.hpp"

namespace android::hardware
{
	// Fields
	android::graphics::Rect Camera_Area::rect()
	{
		return getObjectField(
			"rect",
			"Landroid/graphics/Rect;"
		);
	}
	jint Camera_Area::weight()
	{
		return getField<jint>(
			"weight"
		);
	}
	
	// QAndroidJniObject forward
	Camera_Area::Camera_Area(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Camera_Area::Camera_Area(android::graphics::Rect arg0, jint arg1)
		: __JniBaseClass(
			"android.hardware.Camera$Area",
			"(Landroid/graphics/Rect;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jboolean Camera_Area::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::hardware
