#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::telecom
{
	class Call;
}
namespace android::telecom
{
	class Call_Details;
}
namespace android::telecom
{
	class Call_RttCall;
}
namespace android::telecom
{
	class InCallService_VideoCall;
}
class JString;

namespace android::telecom
{
	class Call_Callback : public JObject
	{
	public:
		// Fields
		static jint HANDOVER_FAILURE_DEST_APP_REJECTED();
		static jint HANDOVER_FAILURE_NOT_SUPPORTED();
		static jint HANDOVER_FAILURE_ONGOING_EMERGENCY_CALL();
		static jint HANDOVER_FAILURE_UNKNOWN();
		static jint HANDOVER_FAILURE_USER_REJECTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit Call_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Call_Callback(QJniObject obj);
		
		// Constructors
		Call_Callback();
		
		// Methods
		void onCallDestroyed(android::telecom::Call arg0) const;
		void onCannedTextResponsesLoaded(android::telecom::Call arg0, JObject arg1) const;
		void onChildrenChanged(android::telecom::Call arg0, JObject arg1) const;
		void onConferenceableCallsChanged(android::telecom::Call arg0, JObject arg1) const;
		void onConnectionEvent(android::telecom::Call arg0, JString arg1, android::os::Bundle arg2) const;
		void onDetailsChanged(android::telecom::Call arg0, android::telecom::Call_Details arg1) const;
		void onHandoverComplete(android::telecom::Call arg0) const;
		void onHandoverFailed(android::telecom::Call arg0, jint arg1) const;
		void onParentChanged(android::telecom::Call arg0, android::telecom::Call arg1) const;
		void onPostDialWait(android::telecom::Call arg0, JString arg1) const;
		void onRttInitiationFailure(android::telecom::Call arg0, jint arg1) const;
		void onRttModeChanged(android::telecom::Call arg0, jint arg1) const;
		void onRttRequest(android::telecom::Call arg0, jint arg1) const;
		void onRttStatusChanged(android::telecom::Call arg0, jboolean arg1, android::telecom::Call_RttCall arg2) const;
		void onStateChanged(android::telecom::Call arg0, jint arg1) const;
		void onVideoCallChanged(android::telecom::Call arg0, android::telecom::InCallService_VideoCall arg1) const;
	};
} // namespace android::telecom

