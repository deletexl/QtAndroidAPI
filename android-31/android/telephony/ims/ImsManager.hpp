#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::ims
{
	class ImsMmTelManager;
}
namespace android::telephony::ims
{
	class ImsRcsManager;
}
class JString;

namespace android::telephony::ims
{
	class ImsManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_WFC_IMS_REGISTRATION_ERROR();
		static JString EXTRA_WFC_REGISTRATION_FAILURE_MESSAGE();
		static JString EXTRA_WFC_REGISTRATION_FAILURE_TITLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ImsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImsManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::telephony::ims::ImsMmTelManager getImsMmTelManager(jint arg0) const;
		android::telephony::ims::ImsRcsManager getImsRcsManager(jint arg0) const;
	};
} // namespace android::telephony::ims

