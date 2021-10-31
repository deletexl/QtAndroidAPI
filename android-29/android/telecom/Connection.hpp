#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Conferenceable.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::telecom
{
	class CallAudioState;
}
namespace android::telecom
{
	class Conference;
}
namespace android::telecom
{
	class Connection_RttTextStream;
}
namespace android::telecom
{
	class Connection_VideoProvider;
}
namespace android::telecom
{
	class DisconnectCause;
}
namespace android::telecom
{
	class StatusHints;
}

namespace android::telecom
{
	class Connection : public android::telecom::Conferenceable
	{
	public:
		// Fields
		static jint CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO();
		static jint CAPABILITY_CAN_PAUSE_VIDEO();
		static jint CAPABILITY_CAN_PULL_CALL();
		static jint CAPABILITY_CAN_SEND_RESPONSE_VIA_CONNECTION();
		static jint CAPABILITY_CAN_UPGRADE_TO_VIDEO();
		static jint CAPABILITY_DISCONNECT_FROM_CONFERENCE();
		static jint CAPABILITY_HOLD();
		static jint CAPABILITY_MANAGE_CONFERENCE();
		static jint CAPABILITY_MERGE_CONFERENCE();
		static jint CAPABILITY_MUTE();
		static jint CAPABILITY_RESPOND_VIA_TEXT();
		static jint CAPABILITY_SEPARATE_FROM_CONFERENCE();
		static jint CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL();
		static jint CAPABILITY_SUPPORTS_VT_LOCAL_RX();
		static jint CAPABILITY_SUPPORTS_VT_LOCAL_TX();
		static jint CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL();
		static jint CAPABILITY_SUPPORTS_VT_REMOTE_RX();
		static jint CAPABILITY_SUPPORTS_VT_REMOTE_TX();
		static jint CAPABILITY_SUPPORT_DEFLECT();
		static jint CAPABILITY_SUPPORT_HOLD();
		static jint CAPABILITY_SWAP_CONFERENCE();
		static jstring EVENT_CALL_MERGE_FAILED();
		static jstring EVENT_CALL_PULL_FAILED();
		static jstring EVENT_RTT_AUDIO_INDICATION_CHANGED();
		static jstring EXTRA_ANSWERING_DROPS_FG_CALL();
		static jstring EXTRA_ANSWERING_DROPS_FG_CALL_APP_NAME();
		static jstring EXTRA_CALL_SUBJECT();
		static jstring EXTRA_CHILD_ADDRESS();
		static jstring EXTRA_IS_RTT_AUDIO_PRESENT();
		static jstring EXTRA_LAST_FORWARDED_NUMBER();
		static jstring EXTRA_SIP_INVITE();
		static jint PROPERTY_HAS_CDMA_VOICE_PRIVACY();
		static jint PROPERTY_IS_EXTERNAL_CALL();
		static jint PROPERTY_IS_RTT();
		static jint PROPERTY_SELF_MANAGED();
		static jint STATE_ACTIVE();
		static jint STATE_DIALING();
		static jint STATE_DISCONNECTED();
		static jint STATE_HOLDING();
		static jint STATE_INITIALIZING();
		static jint STATE_NEW();
		static jint STATE_PULLING_CALL();
		static jint STATE_RINGING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Connection(const char *className, const char *sig, Ts...agv) : android::telecom::Conferenceable(className, sig, std::forward<Ts>(agv)...) {}
		Connection(QAndroidJniObject obj);
		
		// Constructors
		Connection();
		
		// Methods
		static jstring capabilitiesToString(jint arg0);
		static QAndroidJniObject createCanceledConnection();
		static QAndroidJniObject createFailedConnection(android::telecom::DisconnectCause arg0);
		static jstring propertiesToString(jint arg0);
		static jstring stateToString(jint arg0);
		void destroy();
		QAndroidJniObject getAddress();
		jint getAddressPresentation();
		jboolean getAudioModeIsVoip();
		QAndroidJniObject getCallAudioState();
		jstring getCallerDisplayName();
		jint getCallerDisplayNamePresentation();
		QAndroidJniObject getConference();
		QAndroidJniObject getConferenceables();
		jint getConnectionCapabilities();
		jint getConnectionProperties();
		QAndroidJniObject getDisconnectCause();
		QAndroidJniObject getExtras();
		jint getState();
		QAndroidJniObject getStatusHints();
		QAndroidJniObject getVideoProvider();
		void handleRttUpgradeResponse(android::telecom::Connection_RttTextStream arg0);
		jboolean isRingbackRequested();
		void onAbort();
		void onAnswer();
		void onAnswer(jint arg0);
		void onCallAudioStateChanged(android::telecom::CallAudioState arg0);
		void onCallEvent(jstring arg0, android::os::Bundle arg1);
		void onDeflect(android::net::Uri arg0);
		void onDisconnect();
		void onExtrasChanged(android::os::Bundle arg0);
		void onHandoverComplete();
		void onHold();
		void onPlayDtmfTone(jchar arg0);
		void onPostDialContinue(jboolean arg0);
		void onPullExternalCall();
		void onReject();
		void onReject(jstring arg0);
		void onSeparate();
		void onShowIncomingCallUi();
		void onSilence();
		void onStartRtt(android::telecom::Connection_RttTextStream arg0);
		void onStateChanged(jint arg0);
		void onStopDtmfTone();
		void onStopRtt();
		void onUnhold();
		void putExtras(android::os::Bundle arg0);
		void removeExtras(jarray arg0);
		void removeExtras(__JniBaseClass arg0);
		void requestBluetoothAudio(android::bluetooth::BluetoothDevice arg0);
		void sendConnectionEvent(jstring arg0, android::os::Bundle arg1);
		void sendRemoteRttRequest();
		void sendRttInitiationFailure(jint arg0);
		void sendRttInitiationSuccess();
		void sendRttSessionRemotelyTerminated();
		void setActive();
		void setAddress(android::net::Uri arg0, jint arg1);
		void setAudioModeIsVoip(jboolean arg0);
		void setAudioRoute(jint arg0);
		void setCallerDisplayName(jstring arg0, jint arg1);
		void setConferenceableConnections(__JniBaseClass arg0);
		void setConferenceables(__JniBaseClass arg0);
		void setConnectionCapabilities(jint arg0);
		void setConnectionProperties(jint arg0);
		void setDialing();
		void setDisconnected(android::telecom::DisconnectCause arg0);
		void setExtras(android::os::Bundle arg0);
		void setInitialized();
		void setInitializing();
		void setNextPostDialChar(jchar arg0);
		void setOnHold();
		void setPostDialWait(jstring arg0);
		void setPulling();
		void setRingbackRequested(jboolean arg0);
		void setRinging();
		void setStatusHints(android::telecom::StatusHints arg0);
		void setVideoProvider(android::telecom::Connection_VideoProvider arg0);
		void setVideoState(jint arg0);
	};
} // namespace android::telecom

