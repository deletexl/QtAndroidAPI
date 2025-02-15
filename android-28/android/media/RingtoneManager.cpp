#include "../app/Activity.hpp"
#include "../content/Context.hpp"
#include "./Ringtone.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./RingtoneManager.hpp"

namespace android::media
{
	// Fields
	JString RingtoneManager::ACTION_RINGTONE_PICKER()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"ACTION_RINGTONE_PICKER",
			"Ljava/lang/String;"
		);
	}
	JString RingtoneManager::EXTRA_RINGTONE_DEFAULT_URI()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_DEFAULT_URI",
			"Ljava/lang/String;"
		);
	}
	JString RingtoneManager::EXTRA_RINGTONE_EXISTING_URI()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_EXISTING_URI",
			"Ljava/lang/String;"
		);
	}
	JString RingtoneManager::EXTRA_RINGTONE_INCLUDE_DRM()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_INCLUDE_DRM",
			"Ljava/lang/String;"
		);
	}
	JString RingtoneManager::EXTRA_RINGTONE_PICKED_URI()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_PICKED_URI",
			"Ljava/lang/String;"
		);
	}
	JString RingtoneManager::EXTRA_RINGTONE_SHOW_DEFAULT()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_SHOW_DEFAULT",
			"Ljava/lang/String;"
		);
	}
	JString RingtoneManager::EXTRA_RINGTONE_SHOW_SILENT()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_SHOW_SILENT",
			"Ljava/lang/String;"
		);
	}
	JString RingtoneManager::EXTRA_RINGTONE_TITLE()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_TITLE",
			"Ljava/lang/String;"
		);
	}
	JString RingtoneManager::EXTRA_RINGTONE_TYPE()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_TYPE",
			"Ljava/lang/String;"
		);
	}
	jint RingtoneManager::ID_COLUMN_INDEX()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"ID_COLUMN_INDEX"
		);
	}
	jint RingtoneManager::TITLE_COLUMN_INDEX()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"TITLE_COLUMN_INDEX"
		);
	}
	jint RingtoneManager::TYPE_ALARM()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_ALARM"
		);
	}
	jint RingtoneManager::TYPE_ALL()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_ALL"
		);
	}
	jint RingtoneManager::TYPE_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_NOTIFICATION"
		);
	}
	jint RingtoneManager::TYPE_RINGTONE()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_RINGTONE"
		);
	}
	jint RingtoneManager::URI_COLUMN_INDEX()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"URI_COLUMN_INDEX"
		);
	}
	
	// QJniObject forward
	RingtoneManager::RingtoneManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	RingtoneManager::RingtoneManager(android::app::Activity arg0)
		: JObject(
			"android.media.RingtoneManager",
			"(Landroid/app/Activity;)V",
			arg0.object()
		) {}
	RingtoneManager::RingtoneManager(android::content::Context arg0)
		: JObject(
			"android.media.RingtoneManager",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::net::Uri RingtoneManager::getActualDefaultRingtoneUri(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getActualDefaultRingtoneUri",
			"(Landroid/content/Context;I)Landroid/net/Uri;",
			arg0.object(),
			arg1
		);
	}
	jint RingtoneManager::getDefaultType(android::net::Uri arg0)
	{
		return callStaticMethod<jint>(
			"android.media.RingtoneManager",
			"getDefaultType",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	android::net::Uri RingtoneManager::getDefaultUri(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getDefaultUri",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	android::media::Ringtone RingtoneManager::getRingtone(android::content::Context arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getRingtone",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/Ringtone;",
			arg0.object(),
			arg1.object()
		);
	}
	android::net::Uri RingtoneManager::getValidRingtoneUri(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getValidRingtoneUri",
			"(Landroid/content/Context;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	jboolean RingtoneManager::isDefault(android::net::Uri arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.RingtoneManager",
			"isDefault",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	void RingtoneManager::setActualDefaultRingtoneUri(android::content::Context arg0, jint arg1, android::net::Uri arg2)
	{
		callStaticMethod<void>(
			"android.media.RingtoneManager",
			"setActualDefaultRingtoneUri",
			"(Landroid/content/Context;ILandroid/net/Uri;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	JObject RingtoneManager::getCursor() const
	{
		return callObjectMethod(
			"getCursor",
			"()Landroid/database/Cursor;"
		);
	}
	jboolean RingtoneManager::getIncludeDrm() const
	{
		return callMethod<jboolean>(
			"getIncludeDrm",
			"()Z"
		);
	}
	android::media::Ringtone RingtoneManager::getRingtone(jint arg0) const
	{
		return callObjectMethod(
			"getRingtone",
			"(I)Landroid/media/Ringtone;",
			arg0
		);
	}
	jint RingtoneManager::getRingtonePosition(android::net::Uri arg0) const
	{
		return callMethod<jint>(
			"getRingtonePosition",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	android::net::Uri RingtoneManager::getRingtoneUri(jint arg0) const
	{
		return callObjectMethod(
			"getRingtoneUri",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	jboolean RingtoneManager::getStopPreviousRingtone() const
	{
		return callMethod<jboolean>(
			"getStopPreviousRingtone",
			"()Z"
		);
	}
	jint RingtoneManager::inferStreamType() const
	{
		return callMethod<jint>(
			"inferStreamType",
			"()I"
		);
	}
	void RingtoneManager::setIncludeDrm(jboolean arg0) const
	{
		callMethod<void>(
			"setIncludeDrm",
			"(Z)V",
			arg0
		);
	}
	void RingtoneManager::setStopPreviousRingtone(jboolean arg0) const
	{
		callMethod<void>(
			"setStopPreviousRingtone",
			"(Z)V",
			arg0
		);
	}
	void RingtoneManager::setType(jint arg0) const
	{
		callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
	void RingtoneManager::stopPreviousRingtone() const
	{
		callMethod<void>(
			"stopPreviousRingtone",
			"()V"
		);
	}
} // namespace android::media

