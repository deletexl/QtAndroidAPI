#include "../../../JByteArray.hpp"
#include "../../nio/ByteBuffer.hpp"
#include "./CRC32.hpp"

namespace java::util::zip
{
	// Fields
	
	// QJniObject forward
	CRC32::CRC32(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CRC32::CRC32()
		: JObject(
			"java.util.zip.CRC32",
			"()V"
		) {}
	
	// Methods
	jlong CRC32::getValue() const
	{
		return callMethod<jlong>(
			"getValue",
			"()J"
		);
	}
	void CRC32::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void CRC32::update(jint arg0) const
	{
		callMethod<void>(
			"update",
			"(I)V",
			arg0
		);
	}
	void CRC32::update(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void CRC32::update(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"update",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

