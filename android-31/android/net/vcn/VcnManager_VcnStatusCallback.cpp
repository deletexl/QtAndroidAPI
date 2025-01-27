#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./VcnManager_VcnStatusCallback.hpp"

namespace android::net::vcn
{
	// Fields
	
	// QJniObject forward
	VcnManager_VcnStatusCallback::VcnManager_VcnStatusCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	VcnManager_VcnStatusCallback::VcnManager_VcnStatusCallback()
		: JObject(
			"android.net.vcn.VcnManager$VcnStatusCallback",
			"()V"
		) {}
	
	// Methods
	void VcnManager_VcnStatusCallback::onGatewayConnectionError(JString arg0, jint arg1, JThrowable arg2) const
	{
		callMethod<void>(
			"onGatewayConnectionError",
			"(Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jthrowable>()
		);
	}
	void VcnManager_VcnStatusCallback::onStatusChanged(jint arg0) const
	{
		callMethod<void>(
			"onStatusChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::net::vcn

