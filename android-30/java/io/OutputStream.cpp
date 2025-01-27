#include "../../JByteArray.hpp"
#include "./OutputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	OutputStream::OutputStream(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	OutputStream::OutputStream()
		: JObject(
			"java.io.OutputStream",
			"()V"
		) {}
	
	// Methods
	java::io::OutputStream OutputStream::nullOutputStream()
	{
		return callStaticObjectMethod(
			"java.io.OutputStream",
			"nullOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	void OutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void OutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void OutputStream::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void OutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void OutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

