#include "./Camera.hpp"
#include "../../JObject.hpp"
#include "./Camera_Size.hpp"

namespace android::hardware
{
	// Fields
	jint Camera_Size::height()
	{
		return getField<jint>(
			"height"
		);
	}
	jint Camera_Size::width()
	{
		return getField<jint>(
			"width"
		);
	}
	
	// QJniObject forward
	Camera_Size::Camera_Size(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Camera_Size::Camera_Size(android::hardware::Camera arg0, jint arg1, jint arg2)
		: JObject(
			"android.hardware.Camera$Size",
			"(Landroid/hardware/Camera;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean Camera_Size::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Camera_Size::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::hardware

