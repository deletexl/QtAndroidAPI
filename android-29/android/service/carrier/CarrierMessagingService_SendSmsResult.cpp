#include "./CarrierMessagingService_SendSmsResult.hpp"

namespace android::service::carrier
{
	// Fields
	
	// QJniObject forward
	CarrierMessagingService_SendSmsResult::CarrierMessagingService_SendSmsResult(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CarrierMessagingService_SendSmsResult::CarrierMessagingService_SendSmsResult(jint arg0, jint arg1)
		: JObject(
			"android.service.carrier.CarrierMessagingService$SendSmsResult",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint CarrierMessagingService_SendSmsResult::getMessageRef() const
	{
		return callMethod<jint>(
			"getMessageRef",
			"()I"
		);
	}
	jint CarrierMessagingService_SendSmsResult::getSendStatus() const
	{
		return callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
} // namespace android::service::carrier

