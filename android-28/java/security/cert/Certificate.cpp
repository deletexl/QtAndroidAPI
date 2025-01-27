#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Provider.hpp"
#include "./Certificate.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	Certificate::Certificate(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Certificate::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray Certificate::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JObject Certificate::getPublicKey() const
	{
		return callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	JString Certificate::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	jint Certificate::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Certificate::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Certificate::verify(JObject arg0) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	void Certificate::verify(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void Certificate::verify(JObject arg0, java::security::Provider arg1) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Provider;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security::cert

