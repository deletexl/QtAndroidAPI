#include "./Reader.hpp"
#include "./PushbackReader.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	PushbackReader::PushbackReader(QAndroidJniObject obj) : java::io::FilterReader(obj) {}
	
	// Constructors
	PushbackReader::PushbackReader(java::io::Reader arg0)
		: java::io::FilterReader(
			"java.io.PushbackReader",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	PushbackReader::PushbackReader(java::io::Reader arg0, jint arg1)
		: java::io::FilterReader(
			"java.io.PushbackReader",
			"(Ljava/io/Reader;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void PushbackReader::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PushbackReader::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean PushbackReader::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint PushbackReader::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint PushbackReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PushbackReader::ready()
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void PushbackReader::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong PushbackReader::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	void PushbackReader::unread(jcharArray arg0)
	{
		callMethod<void>(
			"unread",
			"([C)V",
			arg0
		);
	}
	void PushbackReader::unread(jint arg0)
	{
		callMethod<void>(
			"unread",
			"(I)V",
			arg0
		);
	}
	void PushbackReader::unread(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"unread",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io
