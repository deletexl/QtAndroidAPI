#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MacSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	MacSpi::MacSpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MacSpi::MacSpi()
		: JObject(
			"javax.crypto.MacSpi",
			"()V"
		) {}
	
	// Methods
	JObject MacSpi::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
} // namespace javax::crypto

