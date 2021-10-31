#include "../../nio/ByteBuffer.hpp"
#include "./CRC32.hpp"

namespace java::util::zip
{
	// Fields
	
	// QAndroidJniObject forward
	CRC32::CRC32(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CRC32::CRC32()
		: __JniBaseClass(
			"java.util.zip.CRC32",
			"()V"
		) {}
	
	// Methods
	jlong CRC32::getValue()
	{
		return callMethod<jlong>(
			"getValue",
			"()J"
		);
	}
	void CRC32::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void CRC32::update(jint arg0)
	{
		callMethod<void>(
			"update",
			"(I)V",
			arg0
		);
	}
	void CRC32::update(java::nio::ByteBuffer arg0)
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void CRC32::update(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"update",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::zip
