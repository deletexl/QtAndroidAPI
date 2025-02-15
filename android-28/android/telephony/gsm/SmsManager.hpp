#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::app
{
	class PendingIntent;
}
class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::telephony::gsm
{
	class SmsManager : public JObject
	{
	public:
		// Fields
		static jint RESULT_ERROR_GENERIC_FAILURE();
		static jint RESULT_ERROR_NO_SERVICE();
		static jint RESULT_ERROR_NULL_PDU();
		static jint RESULT_ERROR_RADIO_OFF();
		static jint STATUS_ON_SIM_FREE();
		static jint STATUS_ON_SIM_READ();
		static jint STATUS_ON_SIM_SENT();
		static jint STATUS_ON_SIM_UNREAD();
		static jint STATUS_ON_SIM_UNSENT();
		
		// QJniObject forward
		template<typename ...Ts> explicit SmsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SmsManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::gsm::SmsManager getDefault();
		java::util::ArrayList divideMessage(JString arg0) const;
		void sendDataMessage(JString arg0, JString arg1, jshort arg2, JByteArray arg3, android::app::PendingIntent arg4, android::app::PendingIntent arg5) const;
		void sendMultipartTextMessage(JString arg0, JString arg1, java::util::ArrayList arg2, java::util::ArrayList arg3, java::util::ArrayList arg4) const;
		void sendTextMessage(JString arg0, JString arg1, JString arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4) const;
	};
} // namespace android::telephony::gsm

