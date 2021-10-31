#include "./CertPath.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertPath::CertPath(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CertPath::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CertPath::getCertificates()
	{
		return callObjectMethod(
			"getCertificates",
			"()Ljava/util/List;"
		);
	}
	jbyteArray CertPath::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray CertPath::getEncoded(jstring arg0)
	{
		return callObjectMethod(
			"getEncoded",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	QAndroidJniObject CertPath::getEncodings()
	{
		return callObjectMethod(
			"getEncodings",
			"()Ljava/util/Iterator;"
		);
	}
	jstring CertPath::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CertPath::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CertPath::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

