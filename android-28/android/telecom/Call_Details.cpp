#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./DisconnectCause.hpp"
#include "./GatewayInfo.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./StatusHints.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Call_Details.hpp"

namespace android::telecom
{
	// Fields
	jint Call_Details::CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO"
		);
	}
	jint Call_Details::CAPABILITY_CAN_PAUSE_VIDEO()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_CAN_PAUSE_VIDEO"
		);
	}
	jint Call_Details::CAPABILITY_CAN_PULL_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_CAN_PULL_CALL"
		);
	}
	jint Call_Details::CAPABILITY_DISCONNECT_FROM_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_DISCONNECT_FROM_CONFERENCE"
		);
	}
	jint Call_Details::CAPABILITY_HOLD()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_HOLD"
		);
	}
	jint Call_Details::CAPABILITY_MANAGE_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_MANAGE_CONFERENCE"
		);
	}
	jint Call_Details::CAPABILITY_MERGE_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_MERGE_CONFERENCE"
		);
	}
	jint Call_Details::CAPABILITY_MUTE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_MUTE"
		);
	}
	jint Call_Details::CAPABILITY_RESPOND_VIA_TEXT()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_RESPOND_VIA_TEXT"
		);
	}
	jint Call_Details::CAPABILITY_SEPARATE_FROM_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SEPARATE_FROM_CONFERENCE"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORTS_VT_LOCAL_RX()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_LOCAL_RX"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORTS_VT_LOCAL_TX()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_LOCAL_TX"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORTS_VT_REMOTE_RX()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_REMOTE_RX"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORTS_VT_REMOTE_TX()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_REMOTE_TX"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORT_DEFLECT()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORT_DEFLECT"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORT_HOLD()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORT_HOLD"
		);
	}
	jint Call_Details::CAPABILITY_SWAP_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SWAP_CONFERENCE"
		);
	}
	jint Call_Details::PROPERTY_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_CONFERENCE"
		);
	}
	jint Call_Details::PROPERTY_EMERGENCY_CALLBACK_MODE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_EMERGENCY_CALLBACK_MODE"
		);
	}
	jint Call_Details::PROPERTY_ENTERPRISE_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_ENTERPRISE_CALL"
		);
	}
	jint Call_Details::PROPERTY_GENERIC_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_GENERIC_CONFERENCE"
		);
	}
	jint Call_Details::PROPERTY_HAS_CDMA_VOICE_PRIVACY()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_HAS_CDMA_VOICE_PRIVACY"
		);
	}
	jint Call_Details::PROPERTY_HIGH_DEF_AUDIO()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_HIGH_DEF_AUDIO"
		);
	}
	jint Call_Details::PROPERTY_IS_EXTERNAL_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_IS_EXTERNAL_CALL"
		);
	}
	jint Call_Details::PROPERTY_RTT()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_RTT"
		);
	}
	jint Call_Details::PROPERTY_SELF_MANAGED()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_SELF_MANAGED"
		);
	}
	jint Call_Details::PROPERTY_WIFI()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_WIFI"
		);
	}
	
	// QJniObject forward
	Call_Details::Call_Details(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Call_Details::can(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.Call$Details",
			"can",
			"(II)Z",
			arg0,
			arg1
		);
	}
	JString Call_Details::capabilitiesToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Call$Details",
			"capabilitiesToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jboolean Call_Details::hasProperty(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.Call$Details",
			"hasProperty",
			"(II)Z",
			arg0,
			arg1
		);
	}
	JString Call_Details::propertiesToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Call$Details",
			"propertiesToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jboolean Call_Details::can(jint arg0) const
	{
		return callMethod<jboolean>(
			"can",
			"(I)Z",
			arg0
		);
	}
	jboolean Call_Details::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::telecom::PhoneAccountHandle Call_Details::getAccountHandle() const
	{
		return callObjectMethod(
			"getAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	jint Call_Details::getCallCapabilities() const
	{
		return callMethod<jint>(
			"getCallCapabilities",
			"()I"
		);
	}
	jint Call_Details::getCallProperties() const
	{
		return callMethod<jint>(
			"getCallProperties",
			"()I"
		);
	}
	JString Call_Details::getCallerDisplayName() const
	{
		return callObjectMethod(
			"getCallerDisplayName",
			"()Ljava/lang/String;"
		);
	}
	jint Call_Details::getCallerDisplayNamePresentation() const
	{
		return callMethod<jint>(
			"getCallerDisplayNamePresentation",
			"()I"
		);
	}
	jlong Call_Details::getConnectTimeMillis() const
	{
		return callMethod<jlong>(
			"getConnectTimeMillis",
			"()J"
		);
	}
	jlong Call_Details::getCreationTimeMillis() const
	{
		return callMethod<jlong>(
			"getCreationTimeMillis",
			"()J"
		);
	}
	android::telecom::DisconnectCause Call_Details::getDisconnectCause() const
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	android::os::Bundle Call_Details::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::telecom::GatewayInfo Call_Details::getGatewayInfo() const
	{
		return callObjectMethod(
			"getGatewayInfo",
			"()Landroid/telecom/GatewayInfo;"
		);
	}
	android::net::Uri Call_Details::getHandle() const
	{
		return callObjectMethod(
			"getHandle",
			"()Landroid/net/Uri;"
		);
	}
	jint Call_Details::getHandlePresentation() const
	{
		return callMethod<jint>(
			"getHandlePresentation",
			"()I"
		);
	}
	android::os::Bundle Call_Details::getIntentExtras() const
	{
		return callObjectMethod(
			"getIntentExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::telecom::StatusHints Call_Details::getStatusHints() const
	{
		return callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	jint Call_Details::getVideoState() const
	{
		return callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	jboolean Call_Details::hasProperty(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasProperty",
			"(I)Z",
			arg0
		);
	}
	jint Call_Details::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Call_Details::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telecom

