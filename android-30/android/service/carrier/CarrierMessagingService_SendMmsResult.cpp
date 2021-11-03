#include "./CarrierMessagingService_SendMmsResult.hpp"

namespace android::service::carrier
{
	// Fields
	
	// QAndroidJniObject forward
	CarrierMessagingService_SendMmsResult::CarrierMessagingService_SendMmsResult(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CarrierMessagingService_SendMmsResult::CarrierMessagingService_SendMmsResult(jint arg0, jbyteArray arg1)
		: JObject(
			"android.service.carrier.CarrierMessagingService$SendMmsResult",
			"(I[B)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jbyteArray CarrierMessagingService_SendMmsResult::getSendConfPdu()
	{
		return callObjectMethod(
			"getSendConfPdu",
			"()[B"
		).object<jbyteArray>();
	}
	jint CarrierMessagingService_SendMmsResult::getSendStatus()
	{
		return callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
} // namespace android::service::carrier

