#include "../content/Intent.hpp"
#include "./Call_Details.hpp"
#include "./CallScreeningService_CallResponse.hpp"
#include "../../JString.hpp"
#include "./CallScreeningService.hpp"

namespace android::telecom
{
	// Fields
	JString CallScreeningService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.telecom.CallScreeningService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	CallScreeningService::CallScreeningService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	CallScreeningService::CallScreeningService()
		: android::app::Service(
			"android.telecom.CallScreeningService",
			"()V"
		) {}
	
	// Methods
	JObject CallScreeningService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void CallScreeningService::onScreenCall(android::telecom::Call_Details arg0) const
	{
		callMethod<void>(
			"onScreenCall",
			"(Landroid/telecom/Call$Details;)V",
			arg0.object()
		);
	}
	jboolean CallScreeningService::onUnbind(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	void CallScreeningService::respondToCall(android::telecom::Call_Details arg0, android::telecom::CallScreeningService_CallResponse arg1) const
	{
		callMethod<void>(
			"respondToCall",
			"(Landroid/telecom/Call$Details;Landroid/telecom/CallScreeningService$CallResponse;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::telecom

