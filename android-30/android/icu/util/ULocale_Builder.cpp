#include "./ULocale.hpp"
#include "../../../JString.hpp"
#include "./ULocale_Builder.hpp"

namespace android::icu::util
{
	// Fields
	
	// QJniObject forward
	ULocale_Builder::ULocale_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ULocale_Builder::ULocale_Builder()
		: JObject(
			"android.icu.util.ULocale$Builder",
			"()V"
		) {}
	
	// Methods
	android::icu::util::ULocale_Builder ULocale_Builder::addUnicodeLocaleAttribute(JString arg0) const
	{
		return callObjectMethod(
			"addUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0.object<jstring>()
		);
	}
	android::icu::util::ULocale ULocale_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Landroid/icu/util/ULocale$Builder;"
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::clearExtensions() const
	{
		return callObjectMethod(
			"clearExtensions",
			"()Landroid/icu/util/ULocale$Builder;"
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::removeUnicodeLocaleAttribute(JString arg0) const
	{
		return callObjectMethod(
			"removeUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0.object<jstring>()
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setExtension(jchar arg0, JString arg1) const
	{
		return callObjectMethod(
			"setExtension",
			"(CLjava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0,
			arg1.object<jstring>()
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setLanguage(JString arg0) const
	{
		return callObjectMethod(
			"setLanguage",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0.object<jstring>()
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setLanguageTag(JString arg0) const
	{
		return callObjectMethod(
			"setLanguageTag",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0.object<jstring>()
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setLocale(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"setLocale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale$Builder;",
			arg0.object()
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setRegion(JString arg0) const
	{
		return callObjectMethod(
			"setRegion",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0.object<jstring>()
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setScript(JString arg0) const
	{
		return callObjectMethod(
			"setScript",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0.object<jstring>()
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setUnicodeLocaleKeyword(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"setUnicodeLocaleKeyword",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setVariant(JString arg0) const
	{
		return callObjectMethod(
			"setVariant",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::icu::util

