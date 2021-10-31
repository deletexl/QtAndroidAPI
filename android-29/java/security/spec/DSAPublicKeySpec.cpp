#include "../../math/BigInteger.hpp"
#include "./DSAPublicKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	DSAPublicKeySpec::DSAPublicKeySpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DSAPublicKeySpec::DSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3)
		: __JniBaseClass(
			"java.security.spec.DSAPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	QAndroidJniObject DSAPublicKeySpec::getG()
	{
		return callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAPublicKeySpec::getP()
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAPublicKeySpec::getQ()
	{
		return callObjectMethod(
			"getQ",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAPublicKeySpec::getY()
	{
		return callObjectMethod(
			"getY",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

