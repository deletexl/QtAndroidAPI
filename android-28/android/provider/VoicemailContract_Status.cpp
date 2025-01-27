#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./VoicemailContract_Status.hpp"

namespace android::provider
{
	// Fields
	JString VoicemailContract_Status::CONFIGURATION_STATE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE",
			"Ljava/lang/String;"
		);
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_CAN_BE_CONFIGURED()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_CAN_BE_CONFIGURED"
		);
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_CONFIGURING()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_CONFIGURING"
		);
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_DISABLED()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_DISABLED"
		);
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_FAILED()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_FAILED"
		);
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_NOT_CONFIGURED()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_NOT_CONFIGURED"
		);
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_OK()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_OK"
		);
	}
	android::net::Uri VoicemailContract_Status::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString VoicemailContract_Status::DATA_CHANNEL_STATE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE",
			"Ljava/lang/String;"
		);
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_BAD_CONFIGURATION()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_BAD_CONFIGURATION"
		);
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_COMMUNICATION_ERROR()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_COMMUNICATION_ERROR"
		);
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_NO_CONNECTION()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_NO_CONNECTION"
		);
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED"
		);
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_OK()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_OK"
		);
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR"
		);
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_SERVER_ERROR()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_SERVER_ERROR"
		);
	}
	JString VoicemailContract_Status::DIR_TYPE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"DIR_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Status::ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE",
			"Ljava/lang/String;"
		);
	}
	jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING"
		);
	}
	jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_NO_CONNECTION()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE_NO_CONNECTION"
		);
	}
	jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_OK()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE_OK"
		);
	}
	JString VoicemailContract_Status::PHONE_ACCOUNT_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"PHONE_ACCOUNT_COMPONENT_NAME",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Status::PHONE_ACCOUNT_ID()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"PHONE_ACCOUNT_ID",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Status::QUOTA_OCCUPIED()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"QUOTA_OCCUPIED",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Status::QUOTA_TOTAL()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"QUOTA_TOTAL",
			"Ljava/lang/String;"
		);
	}
	jint VoicemailContract_Status::QUOTA_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"QUOTA_UNAVAILABLE"
		);
	}
	JString VoicemailContract_Status::SETTINGS_URI()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"SETTINGS_URI",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Status::SOURCE_PACKAGE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"SOURCE_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Status::SOURCE_TYPE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"SOURCE_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Status::VOICEMAIL_ACCESS_URI()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"VOICEMAIL_ACCESS_URI",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	VoicemailContract_Status::VoicemailContract_Status(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::Uri VoicemailContract_Status::buildSourceUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.VoicemailContract$Status",
			"buildSourceUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
} // namespace android::provider

