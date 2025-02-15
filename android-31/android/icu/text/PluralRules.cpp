#include "../number/FormattedNumber.hpp"
#include "./PluralRules_PluralType.hpp"
#include "../util/ULocale.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./PluralRules.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::PluralRules PluralRules::DEFAULT()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"DEFAULT",
			"Landroid/icu/text/PluralRules;"
		);
	}
	JString PluralRules::KEYWORD_FEW()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_FEW",
			"Ljava/lang/String;"
		);
	}
	JString PluralRules::KEYWORD_MANY()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_MANY",
			"Ljava/lang/String;"
		);
	}
	JString PluralRules::KEYWORD_ONE()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_ONE",
			"Ljava/lang/String;"
		);
	}
	JString PluralRules::KEYWORD_OTHER()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_OTHER",
			"Ljava/lang/String;"
		);
	}
	JString PluralRules::KEYWORD_TWO()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_TWO",
			"Ljava/lang/String;"
		);
	}
	JString PluralRules::KEYWORD_ZERO()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_ZERO",
			"Ljava/lang/String;"
		);
	}
	jdouble PluralRules::NO_UNIQUE_VALUE()
	{
		return getStaticField<jdouble>(
			"android.icu.text.PluralRules",
			"NO_UNIQUE_VALUE"
		);
	}
	
	// QJniObject forward
	PluralRules::PluralRules(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::PluralRules PluralRules::createRules(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"createRules",
			"(Ljava/lang/String;)Landroid/icu/text/PluralRules;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::PluralRules PluralRules::forLocale(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/PluralRules;",
			arg0.object()
		);
	}
	android::icu::text::PluralRules PluralRules::forLocale(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Ljava/util/Locale;)Landroid/icu/text/PluralRules;",
			arg0.object()
		);
	}
	android::icu::text::PluralRules PluralRules::forLocale(android::icu::util::ULocale arg0, android::icu::text::PluralRules_PluralType arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::text::PluralRules PluralRules::forLocale(java::util::Locale arg0, android::icu::text::PluralRules_PluralType arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Ljava/util/Locale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::text::PluralRules PluralRules::parseDescription(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"parseDescription",
			"(Ljava/lang/String;)Landroid/icu/text/PluralRules;",
			arg0.object<jstring>()
		);
	}
	jboolean PluralRules::equals(android::icu::text::PluralRules arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/icu/text/PluralRules;)Z",
			arg0.object()
		);
	}
	jboolean PluralRules::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject PluralRules::getAllKeywordValues(JString arg0) const
	{
		return callObjectMethod(
			"getAllKeywordValues",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0.object<jstring>()
		);
	}
	JObject PluralRules::getKeywords() const
	{
		return callObjectMethod(
			"getKeywords",
			"()Ljava/util/Set;"
		);
	}
	JObject PluralRules::getSamples(JString arg0) const
	{
		return callObjectMethod(
			"getSamples",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0.object<jstring>()
		);
	}
	jdouble PluralRules::getUniqueKeywordValue(JString arg0) const
	{
		return callMethod<jdouble>(
			"getUniqueKeywordValue",
			"(Ljava/lang/String;)D",
			arg0.object<jstring>()
		);
	}
	jint PluralRules::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PluralRules::select(android::icu::number::FormattedNumber arg0) const
	{
		return callObjectMethod(
			"select",
			"(Landroid/icu/number/FormattedNumber;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString PluralRules::select(jdouble arg0) const
	{
		return callObjectMethod(
			"select",
			"(D)Ljava/lang/String;",
			arg0
		);
	}
	JString PluralRules::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

