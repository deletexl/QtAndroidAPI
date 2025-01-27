#include "../../../JIntArray.hpp"
#include "../../content/Context.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuilder.hpp"
#include "../../../java/util/Formatter.hpp"
#include "./DateUtils.hpp"

namespace android::text::format
{
	// Fields
	JString DateUtils::ABBREV_MONTH_FORMAT()
	{
		return getStaticObjectField(
			"android.text.format.DateUtils",
			"ABBREV_MONTH_FORMAT",
			"Ljava/lang/String;"
		);
	}
	JString DateUtils::ABBREV_WEEKDAY_FORMAT()
	{
		return getStaticObjectField(
			"android.text.format.DateUtils",
			"ABBREV_WEEKDAY_FORMAT",
			"Ljava/lang/String;"
		);
	}
	jlong DateUtils::DAY_IN_MILLIS()
	{
		return getStaticField<jlong>(
			"android.text.format.DateUtils",
			"DAY_IN_MILLIS"
		);
	}
	jint DateUtils::FORMAT_12HOUR()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_12HOUR"
		);
	}
	jint DateUtils::FORMAT_24HOUR()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_24HOUR"
		);
	}
	jint DateUtils::FORMAT_ABBREV_ALL()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_ABBREV_ALL"
		);
	}
	jint DateUtils::FORMAT_ABBREV_MONTH()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_ABBREV_MONTH"
		);
	}
	jint DateUtils::FORMAT_ABBREV_RELATIVE()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_ABBREV_RELATIVE"
		);
	}
	jint DateUtils::FORMAT_ABBREV_TIME()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_ABBREV_TIME"
		);
	}
	jint DateUtils::FORMAT_ABBREV_WEEKDAY()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_ABBREV_WEEKDAY"
		);
	}
	jint DateUtils::FORMAT_CAP_AMPM()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_CAP_AMPM"
		);
	}
	jint DateUtils::FORMAT_CAP_MIDNIGHT()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_CAP_MIDNIGHT"
		);
	}
	jint DateUtils::FORMAT_CAP_NOON()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_CAP_NOON"
		);
	}
	jint DateUtils::FORMAT_CAP_NOON_MIDNIGHT()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_CAP_NOON_MIDNIGHT"
		);
	}
	jint DateUtils::FORMAT_NO_MIDNIGHT()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_NO_MIDNIGHT"
		);
	}
	jint DateUtils::FORMAT_NO_MONTH_DAY()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_NO_MONTH_DAY"
		);
	}
	jint DateUtils::FORMAT_NO_NOON()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_NO_NOON"
		);
	}
	jint DateUtils::FORMAT_NO_NOON_MIDNIGHT()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_NO_NOON_MIDNIGHT"
		);
	}
	jint DateUtils::FORMAT_NO_YEAR()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_NO_YEAR"
		);
	}
	jint DateUtils::FORMAT_NUMERIC_DATE()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_NUMERIC_DATE"
		);
	}
	jint DateUtils::FORMAT_SHOW_DATE()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_SHOW_DATE"
		);
	}
	jint DateUtils::FORMAT_SHOW_TIME()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_SHOW_TIME"
		);
	}
	jint DateUtils::FORMAT_SHOW_WEEKDAY()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_SHOW_WEEKDAY"
		);
	}
	jint DateUtils::FORMAT_SHOW_YEAR()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_SHOW_YEAR"
		);
	}
	jint DateUtils::FORMAT_UTC()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_UTC"
		);
	}
	jlong DateUtils::HOUR_IN_MILLIS()
	{
		return getStaticField<jlong>(
			"android.text.format.DateUtils",
			"HOUR_IN_MILLIS"
		);
	}
	JString DateUtils::HOUR_MINUTE_24()
	{
		return getStaticObjectField(
			"android.text.format.DateUtils",
			"HOUR_MINUTE_24",
			"Ljava/lang/String;"
		);
	}
	jint DateUtils::LENGTH_LONG()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"LENGTH_LONG"
		);
	}
	jint DateUtils::LENGTH_MEDIUM()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"LENGTH_MEDIUM"
		);
	}
	jint DateUtils::LENGTH_SHORT()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"LENGTH_SHORT"
		);
	}
	jint DateUtils::LENGTH_SHORTER()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"LENGTH_SHORTER"
		);
	}
	jint DateUtils::LENGTH_SHORTEST()
	{
		return getStaticField<jint>(
			"android.text.format.DateUtils",
			"LENGTH_SHORTEST"
		);
	}
	jlong DateUtils::MINUTE_IN_MILLIS()
	{
		return getStaticField<jlong>(
			"android.text.format.DateUtils",
			"MINUTE_IN_MILLIS"
		);
	}
	JString DateUtils::MONTH_DAY_FORMAT()
	{
		return getStaticObjectField(
			"android.text.format.DateUtils",
			"MONTH_DAY_FORMAT",
			"Ljava/lang/String;"
		);
	}
	JString DateUtils::MONTH_FORMAT()
	{
		return getStaticObjectField(
			"android.text.format.DateUtils",
			"MONTH_FORMAT",
			"Ljava/lang/String;"
		);
	}
	JString DateUtils::NUMERIC_MONTH_FORMAT()
	{
		return getStaticObjectField(
			"android.text.format.DateUtils",
			"NUMERIC_MONTH_FORMAT",
			"Ljava/lang/String;"
		);
	}
	jlong DateUtils::SECOND_IN_MILLIS()
	{
		return getStaticField<jlong>(
			"android.text.format.DateUtils",
			"SECOND_IN_MILLIS"
		);
	}
	JString DateUtils::WEEKDAY_FORMAT()
	{
		return getStaticObjectField(
			"android.text.format.DateUtils",
			"WEEKDAY_FORMAT",
			"Ljava/lang/String;"
		);
	}
	jlong DateUtils::WEEK_IN_MILLIS()
	{
		return getStaticField<jlong>(
			"android.text.format.DateUtils",
			"WEEK_IN_MILLIS"
		);
	}
	JString DateUtils::YEAR_FORMAT()
	{
		return getStaticObjectField(
			"android.text.format.DateUtils",
			"YEAR_FORMAT",
			"Ljava/lang/String;"
		);
	}
	JString DateUtils::YEAR_FORMAT_TWO_DIGITS()
	{
		return getStaticObjectField(
			"android.text.format.DateUtils",
			"YEAR_FORMAT_TWO_DIGITS",
			"Ljava/lang/String;"
		);
	}
	jlong DateUtils::YEAR_IN_MILLIS()
	{
		return getStaticField<jlong>(
			"android.text.format.DateUtils",
			"YEAR_IN_MILLIS"
		);
	}
	JIntArray DateUtils::sameMonthTable()
	{
		return getStaticObjectField(
			"android.text.format.DateUtils",
			"sameMonthTable",
			"[I"
		);
	}
	JIntArray DateUtils::sameYearTable()
	{
		return getStaticObjectField(
			"android.text.format.DateUtils",
			"sameYearTable",
			"[I"
		);
	}
	
	// QJniObject forward
	DateUtils::DateUtils(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DateUtils::DateUtils()
		: JObject(
			"android.text.format.DateUtils",
			"()V"
		) {}
	
	// Methods
	JString DateUtils::formatDateRange(android::content::Context arg0, jlong arg1, jlong arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatDateRange",
			"(Landroid/content/Context;JJI)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	java::util::Formatter DateUtils::formatDateRange(android::content::Context arg0, java::util::Formatter arg1, jlong arg2, jlong arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatDateRange",
			"(Landroid/content/Context;Ljava/util/Formatter;JJI)Ljava/util/Formatter;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	java::util::Formatter DateUtils::formatDateRange(android::content::Context arg0, java::util::Formatter arg1, jlong arg2, jlong arg3, jint arg4, JString arg5)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatDateRange",
			"(Landroid/content/Context;Ljava/util/Formatter;JJILjava/lang/String;)Ljava/util/Formatter;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5.object<jstring>()
		);
	}
	JString DateUtils::formatDateTime(android::content::Context arg0, jlong arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatDateTime",
			"(Landroid/content/Context;JI)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	JString DateUtils::formatElapsedTime(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatElapsedTime",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	JString DateUtils::formatElapsedTime(java::lang::StringBuilder arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatElapsedTime",
			"(Ljava/lang/StringBuilder;J)Ljava/lang/String;",
			arg0.object(),
			arg1
		);
	}
	JString DateUtils::formatSameDayTime(jlong arg0, jlong arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatSameDayTime",
			"(JJII)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	JString DateUtils::getAMPMString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getAMPMString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString DateUtils::getDayOfWeekString(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getDayOfWeekString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	JString DateUtils::getMonthString(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getMonthString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	JString DateUtils::getRelativeDateTimeString(android::content::Context arg0, jlong arg1, jlong arg2, jlong arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getRelativeDateTimeString",
			"(Landroid/content/Context;JJJI)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	JString DateUtils::getRelativeTimeSpanString(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getRelativeTimeSpanString",
			"(J)Ljava/lang/CharSequence;",
			arg0
		);
	}
	JString DateUtils::getRelativeTimeSpanString(android::content::Context arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getRelativeTimeSpanString",
			"(Landroid/content/Context;J)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1
		);
	}
	JString DateUtils::getRelativeTimeSpanString(android::content::Context arg0, jlong arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getRelativeTimeSpanString",
			"(Landroid/content/Context;JZ)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	JString DateUtils::getRelativeTimeSpanString(jlong arg0, jlong arg1, jlong arg2)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getRelativeTimeSpanString",
			"(JJJ)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2
		);
	}
	JString DateUtils::getRelativeTimeSpanString(jlong arg0, jlong arg1, jlong arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getRelativeTimeSpanString",
			"(JJJI)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean DateUtils::isToday(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.format.DateUtils",
			"isToday",
			"(J)Z",
			arg0
		);
	}
} // namespace android::text::format

