#include "../../JString.hpp"
#include "../lang/StringBuffer.hpp"
#include "./IDN.hpp"

namespace java::net
{
	// Fields
	jint IDN::ALLOW_UNASSIGNED()
	{
		return getStaticField<jint>(
			"java.net.IDN",
			"ALLOW_UNASSIGNED"
		);
	}
	jint IDN::USE_STD3_ASCII_RULES()
	{
		return getStaticField<jint>(
			"java.net.IDN",
			"USE_STD3_ASCII_RULES"
		);
	}
	
	// QJniObject forward
	IDN::IDN(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString IDN::toASCII(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.IDN",
			"toASCII",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString IDN::toASCII(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.net.IDN",
			"toASCII",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString IDN::toUnicode(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.IDN",
			"toUnicode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString IDN::toUnicode(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.net.IDN",
			"toUnicode",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace java::net

