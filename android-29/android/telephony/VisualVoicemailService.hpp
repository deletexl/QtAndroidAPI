#pragma once

#include "../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}
namespace android::telephony
{
	class VisualVoicemailService_VisualVoicemailTask;
}
namespace android::telephony
{
	class VisualVoicemailSms;
}
class JString;

namespace android::telephony
{
	class VisualVoicemailService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VisualVoicemailService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailService(QAndroidJniObject obj);
		
		// Constructors
		VisualVoicemailService();
		
		// Methods
		JObject onBind(android::content::Intent arg0);
		void onCellServiceConnected(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telecom::PhoneAccountHandle arg1);
		void onSimRemoved(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telecom::PhoneAccountHandle arg1);
		void onSmsReceived(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telephony::VisualVoicemailSms arg1);
		void onStopped(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0);
	};
} // namespace android::telephony

