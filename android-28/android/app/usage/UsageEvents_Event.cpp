#include "../../content/res/Configuration.hpp"
#include "../../../JString.hpp"
#include "./UsageEvents_Event.hpp"

namespace android::app::usage
{
	// Fields
	jint UsageEvents_Event::CONFIGURATION_CHANGE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"CONFIGURATION_CHANGE"
		);
	}
	jint UsageEvents_Event::KEYGUARD_HIDDEN()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"KEYGUARD_HIDDEN"
		);
	}
	jint UsageEvents_Event::KEYGUARD_SHOWN()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"KEYGUARD_SHOWN"
		);
	}
	jint UsageEvents_Event::MOVE_TO_BACKGROUND()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"MOVE_TO_BACKGROUND"
		);
	}
	jint UsageEvents_Event::MOVE_TO_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"MOVE_TO_FOREGROUND"
		);
	}
	jint UsageEvents_Event::NONE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"NONE"
		);
	}
	jint UsageEvents_Event::SCREEN_INTERACTIVE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SCREEN_INTERACTIVE"
		);
	}
	jint UsageEvents_Event::SCREEN_NON_INTERACTIVE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SCREEN_NON_INTERACTIVE"
		);
	}
	jint UsageEvents_Event::SHORTCUT_INVOCATION()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SHORTCUT_INVOCATION"
		);
	}
	jint UsageEvents_Event::STANDBY_BUCKET_CHANGED()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"STANDBY_BUCKET_CHANGED"
		);
	}
	jint UsageEvents_Event::USER_INTERACTION()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"USER_INTERACTION"
		);
	}
	
	// QJniObject forward
	UsageEvents_Event::UsageEvents_Event(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	UsageEvents_Event::UsageEvents_Event()
		: JObject(
			"android.app.usage.UsageEvents$Event",
			"()V"
		) {}
	
	// Methods
	jint UsageEvents_Event::getAppStandbyBucket() const
	{
		return callMethod<jint>(
			"getAppStandbyBucket",
			"()I"
		);
	}
	JString UsageEvents_Event::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	android::content::res::Configuration UsageEvents_Event::getConfiguration() const
	{
		return callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;"
		);
	}
	jint UsageEvents_Event::getEventType() const
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	JString UsageEvents_Event::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	JString UsageEvents_Event::getShortcutId() const
	{
		return callObjectMethod(
			"getShortcutId",
			"()Ljava/lang/String;"
		);
	}
	jlong UsageEvents_Event::getTimeStamp() const
	{
		return callMethod<jlong>(
			"getTimeStamp",
			"()J"
		);
	}
} // namespace android::app::usage

