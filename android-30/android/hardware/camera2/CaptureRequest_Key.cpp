#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CaptureRequest_Key.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	CaptureRequest_Key::CaptureRequest_Key(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CaptureRequest_Key::CaptureRequest_Key(JString arg0, JClass arg1)
		: JObject(
			"android.hardware.camera2.CaptureRequest$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0.object<jstring>(),
			arg1.object<jclass>()
		) {}
	
	// Methods
	jboolean CaptureRequest_Key::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString CaptureRequest_Key::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint CaptureRequest_Key::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CaptureRequest_Key::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2

