#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./MessageDigestSpi.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	MessageDigestSpi::MessageDigestSpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MessageDigestSpi::MessageDigestSpi()
		: JObject(
			"java.security.MessageDigestSpi",
			"()V"
		) {}
	
	// Methods
	JObject MessageDigestSpi::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::security

