#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NumberFormat_Field.hpp"

namespace java::text
{
	// Fields
	java::text::NumberFormat_Field NumberFormat_Field::CURRENCY()
	{
		return getStaticObjectField(
			"java.text.NumberFormat$Field",
			"CURRENCY",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	java::text::NumberFormat_Field NumberFormat_Field::DECIMAL_SEPARATOR()
	{
		return getStaticObjectField(
			"java.text.NumberFormat$Field",
			"DECIMAL_SEPARATOR",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	java::text::NumberFormat_Field NumberFormat_Field::EXPONENT()
	{
		return getStaticObjectField(
			"java.text.NumberFormat$Field",
			"EXPONENT",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	java::text::NumberFormat_Field NumberFormat_Field::EXPONENT_SIGN()
	{
		return getStaticObjectField(
			"java.text.NumberFormat$Field",
			"EXPONENT_SIGN",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	java::text::NumberFormat_Field NumberFormat_Field::EXPONENT_SYMBOL()
	{
		return getStaticObjectField(
			"java.text.NumberFormat$Field",
			"EXPONENT_SYMBOL",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	java::text::NumberFormat_Field NumberFormat_Field::FRACTION()
	{
		return getStaticObjectField(
			"java.text.NumberFormat$Field",
			"FRACTION",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	java::text::NumberFormat_Field NumberFormat_Field::GROUPING_SEPARATOR()
	{
		return getStaticObjectField(
			"java.text.NumberFormat$Field",
			"GROUPING_SEPARATOR",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	java::text::NumberFormat_Field NumberFormat_Field::INTEGER()
	{
		return getStaticObjectField(
			"java.text.NumberFormat$Field",
			"INTEGER",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	java::text::NumberFormat_Field NumberFormat_Field::PERCENT()
	{
		return getStaticObjectField(
			"java.text.NumberFormat$Field",
			"PERCENT",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	java::text::NumberFormat_Field NumberFormat_Field::PERMILLE()
	{
		return getStaticObjectField(
			"java.text.NumberFormat$Field",
			"PERMILLE",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	java::text::NumberFormat_Field NumberFormat_Field::PREFIX()
	{
		return getStaticObjectField(
			"java.text.NumberFormat$Field",
			"PREFIX",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	java::text::NumberFormat_Field NumberFormat_Field::SIGN()
	{
		return getStaticObjectField(
			"java.text.NumberFormat$Field",
			"SIGN",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	java::text::NumberFormat_Field NumberFormat_Field::SUFFIX()
	{
		return getStaticObjectField(
			"java.text.NumberFormat$Field",
			"SUFFIX",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	
	// QJniObject forward
	NumberFormat_Field::NumberFormat_Field(QJniObject obj) : java::text::Format_Field(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::text

