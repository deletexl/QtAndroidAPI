#include "./TelephonyScanManager_NetworkScanCallback.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	TelephonyScanManager_NetworkScanCallback::TelephonyScanManager_NetworkScanCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TelephonyScanManager_NetworkScanCallback::TelephonyScanManager_NetworkScanCallback()
		: JObject(
			"android.telephony.TelephonyScanManager$NetworkScanCallback",
			"()V"
		) {}
	
	// Methods
	void TelephonyScanManager_NetworkScanCallback::onComplete() const
	{
		callMethod<void>(
			"onComplete",
			"()V"
		);
	}
	void TelephonyScanManager_NetworkScanCallback::onError(jint arg0) const
	{
		callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	void TelephonyScanManager_NetworkScanCallback::onResults(JObject arg0) const
	{
		callMethod<void>(
			"onResults",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::telephony

