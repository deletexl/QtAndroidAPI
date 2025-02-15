#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./X509EncodedKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	X509EncodedKeySpec::X509EncodedKeySpec(QJniObject obj) : java::security::spec::EncodedKeySpec(obj) {}
	
	// Constructors
	X509EncodedKeySpec::X509EncodedKeySpec(JByteArray arg0)
		: java::security::spec::EncodedKeySpec(
			"java.security.spec.X509EncodedKeySpec",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	X509EncodedKeySpec::X509EncodedKeySpec(JByteArray arg0, JString arg1)
		: java::security::spec::EncodedKeySpec(
			"java.security.spec.X509EncodedKeySpec",
			"([BLjava/lang/String;)V",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JByteArray X509EncodedKeySpec::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JString X509EncodedKeySpec::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::spec

