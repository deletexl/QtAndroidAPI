#include "../../JDoubleArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../lang/Number.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.hpp"
#include "./FieldPosition.hpp"
#include "./ParsePosition.hpp"
#include "./ChoiceFormat.hpp"

namespace java::text
{
	// Fields
	
	// QJniObject forward
	ChoiceFormat::ChoiceFormat(QJniObject obj) : java::text::NumberFormat(obj) {}
	
	// Constructors
	ChoiceFormat::ChoiceFormat(JString arg0)
		: java::text::NumberFormat(
			"java.text.ChoiceFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ChoiceFormat::ChoiceFormat(JDoubleArray arg0, JArray arg1)
		: java::text::NumberFormat(
			"java.text.ChoiceFormat",
			"([D[Ljava/lang/String;)V",
			arg0.object<jdoubleArray>(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	jdouble ChoiceFormat::nextDouble(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"nextDouble",
			"(D)D",
			arg0
		);
	}
	jdouble ChoiceFormat::nextDouble(jdouble arg0, jboolean arg1)
	{
		return callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"nextDouble",
			"(DZ)D",
			arg0,
			arg1
		);
	}
	jdouble ChoiceFormat::previousDouble(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"previousDouble",
			"(D)D",
			arg0
		);
	}
	void ChoiceFormat::applyPattern(JString arg0) const
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JObject ChoiceFormat::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean ChoiceFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::lang::StringBuffer ChoiceFormat::format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer ChoiceFormat::format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	JObjectArray ChoiceFormat::getFormats() const
	{
		return callObjectMethod(
			"getFormats",
			"()[Ljava/lang/Object;"
		);
	}
	JDoubleArray ChoiceFormat::getLimits() const
	{
		return callObjectMethod(
			"getLimits",
			"()[D"
		);
	}
	jint ChoiceFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::lang::Number ChoiceFormat::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void ChoiceFormat::setChoices(JDoubleArray arg0, JArray arg1) const
	{
		callMethod<void>(
			"setChoices",
			"([D[Ljava/lang/String;)V",
			arg0.object<jdoubleArray>(),
			arg1.object<jarray>()
		);
	}
	JString ChoiceFormat::toPattern() const
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

