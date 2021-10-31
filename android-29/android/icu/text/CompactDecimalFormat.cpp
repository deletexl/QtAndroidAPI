#include "./CompactDecimalFormat_CompactStyle.hpp"
#include "../util/CurrencyAmount.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/lang/Number.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CompactDecimalFormat.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	CompactDecimalFormat::CompactDecimalFormat(QAndroidJniObject obj) : android::icu::text::DecimalFormat(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject CompactDecimalFormat::getInstance(android::icu::util::ULocale arg0, android::icu::text::CompactDecimalFormat_CompactStyle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/CompactDecimalFormat$CompactStyle;)Landroid/icu/text/CompactDecimalFormat;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompactDecimalFormat::getInstance(java::util::Locale arg0, android::icu::text::CompactDecimalFormat_CompactStyle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat",
			"getInstance",
			"(Ljava/util/Locale;Landroid/icu/text/CompactDecimalFormat$CompactStyle;)Landroid/icu/text/CompactDecimalFormat;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompactDecimalFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject CompactDecimalFormat::parseCurrency(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseCurrency",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;",
			arg0,
			arg1.object()
		);
	}
} // namespace android::icu::text

