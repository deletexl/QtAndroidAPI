#include "../../java/security/AlgorithmParameters.hpp"
#include "../../java/security/Provider.hpp"
#include "./ExemptionMechanismSpi.hpp"
#include "./ExemptionMechanism.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	ExemptionMechanism::ExemptionMechanism(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ExemptionMechanism::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;",
			arg0
		);
	}
	QAndroidJniObject ExemptionMechanism::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ExemptionMechanism::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/ExemptionMechanism;",
			arg0,
			arg1.object()
		);
	}
	jbyteArray ExemptionMechanism::genExemptionBlob()
	{
		return callObjectMethod(
			"genExemptionBlob",
			"()[B"
		).object<jbyteArray>();
	}
	jint ExemptionMechanism::genExemptionBlob(jbyteArray arg0)
	{
		return callMethod<jint>(
			"genExemptionBlob",
			"([B)I",
			arg0
		);
	}
	jint ExemptionMechanism::genExemptionBlob(jbyteArray arg0, jint arg1)
	{
		return callMethod<jint>(
			"genExemptionBlob",
			"([BI)I",
			arg0,
			arg1
		);
	}
	jstring ExemptionMechanism::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ExemptionMechanism::getOutputSize(jint arg0)
	{
		return callMethod<jint>(
			"getOutputSize",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject ExemptionMechanism::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void ExemptionMechanism::init(__JniBaseClass arg0)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;)V",
			arg0.object()
		);
	}
	void ExemptionMechanism::init(__JniBaseClass arg0, java::security::AlgorithmParameters arg1)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/AlgorithmParameters;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ExemptionMechanism::init(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean ExemptionMechanism::isCryptoAllowed(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isCryptoAllowed",
			"(Ljava/security/Key;)Z",
			arg0.object()
		);
	}
} // namespace javax::crypto

