#include "../Provider.hpp"
#include "./Certificate.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	Certificate::Certificate(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Certificate::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray Certificate::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	__JniBaseClass Certificate::getPublicKey()
	{
		return callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	jstring Certificate::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Certificate::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Certificate::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Certificate::verify(__JniBaseClass arg0)
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	void Certificate::verify(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void Certificate::verify(__JniBaseClass arg0, java::security::Provider arg1)
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Provider;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security::cert

