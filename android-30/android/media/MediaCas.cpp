#include "../content/Context.hpp"
#include "./MediaCas_Session.hpp"
#include "../os/Handler.hpp"
#include "./MediaCas.hpp"

namespace android::media
{
	// Fields
	jint MediaCas::PLUGIN_STATUS_PHYSICAL_MODULE_CHANGED()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"PLUGIN_STATUS_PHYSICAL_MODULE_CHANGED"
		);
	}
	jint MediaCas::PLUGIN_STATUS_SESSION_NUMBER_CHANGED()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"PLUGIN_STATUS_SESSION_NUMBER_CHANGED"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_AES128()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_AES128"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_AES_ECB()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_AES_ECB"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_AES_SCTE52()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_AES_SCTE52"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_DVB_CISSA_V1()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_DVB_CISSA_V1"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_DVB_CSA1()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_DVB_CSA1"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_DVB_CSA2()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_DVB_CSA2"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_DVB_CSA3_ENHANCE()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_DVB_CSA3_ENHANCE"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_DVB_CSA3_MINIMAL()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_DVB_CSA3_MINIMAL"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_DVB_CSA3_STANDARD()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_DVB_CSA3_STANDARD"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_DVB_IDSA()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_DVB_IDSA"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_MULTI2()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_MULTI2"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_RESERVED()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_RESERVED"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_TDES_ECB()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_TDES_ECB"
		);
	}
	jint MediaCas::SCRAMBLING_MODE_TDES_SCTE52()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SCRAMBLING_MODE_TDES_SCTE52"
		);
	}
	jint MediaCas::SESSION_USAGE_LIVE()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SESSION_USAGE_LIVE"
		);
	}
	jint MediaCas::SESSION_USAGE_PLAYBACK()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SESSION_USAGE_PLAYBACK"
		);
	}
	jint MediaCas::SESSION_USAGE_RECORD()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SESSION_USAGE_RECORD"
		);
	}
	jint MediaCas::SESSION_USAGE_TIMESHIFT()
	{
		return getStaticField<jint>(
			"android.media.MediaCas",
			"SESSION_USAGE_TIMESHIFT"
		);
	}
	
	// QAndroidJniObject forward
	MediaCas::MediaCas(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaCas::MediaCas(jint arg0)
		: __JniBaseClass(
			"android.media.MediaCas",
			"(I)V",
			arg0
		) {}
	MediaCas::MediaCas(android::content::Context arg0, jint arg1, jstring arg2, jint arg3)
		: __JniBaseClass(
			"android.media.MediaCas",
			"(Landroid/content/Context;ILjava/lang/String;I)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jarray MediaCas::enumeratePlugins()
	{
		return callStaticObjectMethod(
			"android.media.MediaCas",
			"enumeratePlugins",
			"()[Landroid/media/MediaCas$PluginDescriptor;"
		).object<jarray>();
	}
	jboolean MediaCas::isSystemIdSupported(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaCas",
			"isSystemIdSupported",
			"(I)Z",
			arg0
		);
	}
	void MediaCas::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::media::MediaCas_Session MediaCas::openSession()
	{
		return callObjectMethod(
			"openSession",
			"()Landroid/media/MediaCas$Session;"
		);
	}
	android::media::MediaCas_Session MediaCas::openSession(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"openSession",
			"(II)Landroid/media/MediaCas$Session;",
			arg0,
			arg1
		);
	}
	void MediaCas::processEmm(jbyteArray arg0)
	{
		callMethod<void>(
			"processEmm",
			"([B)V",
			arg0
		);
	}
	void MediaCas::processEmm(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"processEmm",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void MediaCas::provision(jstring arg0)
	{
		callMethod<void>(
			"provision",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaCas::refreshEntitlements(jint arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"refreshEntitlements",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	void MediaCas::sendEvent(jint arg0, jint arg1, jbyteArray arg2)
	{
		callMethod<void>(
			"sendEvent",
			"(II[B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void MediaCas::setEventListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setEventListener",
			"(Landroid/media/MediaCas$EventListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaCas::setPrivateData(jbyteArray arg0)
	{
		callMethod<void>(
			"setPrivateData",
			"([B)V",
			arg0
		);
	}
} // namespace android::media
