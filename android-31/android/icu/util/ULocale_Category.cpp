#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./ULocale_Category.hpp"

namespace android::icu::util
{
	// Fields
	android::icu::util::ULocale_Category ULocale_Category::DISPLAY()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale$Category",
			"DISPLAY",
			"Landroid/icu/util/ULocale$Category;"
		);
	}
	android::icu::util::ULocale_Category ULocale_Category::FORMAT()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale$Category",
			"FORMAT",
			"Landroid/icu/util/ULocale$Category;"
		);
	}
	
	// QJniObject forward
	ULocale_Category::ULocale_Category(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::util::ULocale_Category ULocale_Category::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale$Category",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Category;",
			arg0.object<jstring>()
		);
	}
	JArray ULocale_Category::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale$Category",
			"values",
			"()[Landroid/icu/util/ULocale$Category;"
		);
	}
} // namespace android::icu::util

