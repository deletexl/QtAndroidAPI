#include "../../JString.hpp"
#include "./AlarmClock.hpp"

namespace android::provider
{
	// Fields
	JString AlarmClock::ACTION_DISMISS_ALARM()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_DISMISS_ALARM",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::ACTION_DISMISS_TIMER()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_DISMISS_TIMER",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::ACTION_SET_ALARM()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SET_ALARM",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::ACTION_SET_TIMER()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SET_TIMER",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::ACTION_SHOW_ALARMS()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SHOW_ALARMS",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::ACTION_SHOW_TIMERS()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SHOW_TIMERS",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::ACTION_SNOOZE_ALARM()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SNOOZE_ALARM",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::ALARM_SEARCH_MODE_ALL()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"ALARM_SEARCH_MODE_ALL",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::ALARM_SEARCH_MODE_LABEL()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"ALARM_SEARCH_MODE_LABEL",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::ALARM_SEARCH_MODE_NEXT()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"ALARM_SEARCH_MODE_NEXT",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::ALARM_SEARCH_MODE_TIME()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"ALARM_SEARCH_MODE_TIME",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::EXTRA_ALARM_SEARCH_MODE()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_ALARM_SEARCH_MODE",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::EXTRA_ALARM_SNOOZE_DURATION()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_ALARM_SNOOZE_DURATION",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::EXTRA_DAYS()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_DAYS",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::EXTRA_HOUR()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_HOUR",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::EXTRA_IS_PM()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_IS_PM",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::EXTRA_LENGTH()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_LENGTH",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::EXTRA_MESSAGE()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::EXTRA_MINUTES()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_MINUTES",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::EXTRA_RINGTONE()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_RINGTONE",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::EXTRA_SKIP_UI()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_SKIP_UI",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::EXTRA_VIBRATE()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_VIBRATE",
			"Ljava/lang/String;"
		);
	}
	JString AlarmClock::VALUE_RINGTONE_SILENT()
	{
		return getStaticObjectField(
			"android.provider.AlarmClock",
			"VALUE_RINGTONE_SILENT",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	AlarmClock::AlarmClock(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AlarmClock::AlarmClock()
		: JObject(
			"android.provider.AlarmClock",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

