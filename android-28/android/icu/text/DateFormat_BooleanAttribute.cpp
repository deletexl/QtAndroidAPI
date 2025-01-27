#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./DateFormat_BooleanAttribute.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::DateFormat_BooleanAttribute DateFormat_BooleanAttribute::PARSE_ALLOW_NUMERIC()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_ALLOW_NUMERIC",
			"Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
	android::icu::text::DateFormat_BooleanAttribute DateFormat_BooleanAttribute::PARSE_ALLOW_WHITESPACE()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_ALLOW_WHITESPACE",
			"Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
	android::icu::text::DateFormat_BooleanAttribute DateFormat_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_MULTIPLE_PATTERNS_FOR_MATCH",
			"Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
	android::icu::text::DateFormat_BooleanAttribute DateFormat_BooleanAttribute::PARSE_PARTIAL_LITERAL_MATCH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_PARTIAL_LITERAL_MATCH",
			"Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
	android::icu::text::DateFormat_BooleanAttribute DateFormat_BooleanAttribute::PARSE_PARTIAL_MATCH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_PARTIAL_MATCH",
			"Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
	
	// QJniObject forward
	DateFormat_BooleanAttribute::DateFormat_BooleanAttribute(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::DateFormat_BooleanAttribute DateFormat_BooleanAttribute::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat$BooleanAttribute",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DateFormat$BooleanAttribute;",
			arg0.object<jstring>()
		);
	}
	JArray DateFormat_BooleanAttribute::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat$BooleanAttribute",
			"values",
			"()[Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
} // namespace android::icu::text

