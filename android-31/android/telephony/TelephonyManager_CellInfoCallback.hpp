#pragma once

#include "../../JObject.hpp"

class JThrowable;

namespace android::telephony
{
	class TelephonyManager_CellInfoCallback : public JObject
	{
	public:
		// Fields
		static jint ERROR_MODEM_ERROR();
		static jint ERROR_TIMEOUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit TelephonyManager_CellInfoCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyManager_CellInfoCallback(QJniObject obj);
		
		// Constructors
		TelephonyManager_CellInfoCallback();
		
		// Methods
		void onCellInfo(JObject arg0) const;
		void onError(jint arg0, JThrowable arg1) const;
	};
} // namespace android::telephony

