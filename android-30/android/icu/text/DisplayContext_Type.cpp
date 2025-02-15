#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./DisplayContext_Type.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::DisplayContext_Type DisplayContext_Type::CAPITALIZATION()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"CAPITALIZATION",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	android::icu::text::DisplayContext_Type DisplayContext_Type::DIALECT_HANDLING()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"DIALECT_HANDLING",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	android::icu::text::DisplayContext_Type DisplayContext_Type::DISPLAY_LENGTH()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"DISPLAY_LENGTH",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	android::icu::text::DisplayContext_Type DisplayContext_Type::SUBSTITUTE_HANDLING()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"SUBSTITUTE_HANDLING",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	
	// QJniObject forward
	DisplayContext_Type::DisplayContext_Type(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::DisplayContext_Type DisplayContext_Type::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayContext$Type",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayContext$Type;",
			arg0.object<jstring>()
		);
	}
	JArray DisplayContext_Type::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayContext$Type",
			"values",
			"()[Landroid/icu/text/DisplayContext$Type;"
		);
	}
} // namespace android::icu::text

