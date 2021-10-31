#include "./Writer.hpp"
#include "../lang/StringBuffer.hpp"
#include "./StringWriter.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	StringWriter::StringWriter(QAndroidJniObject obj) : java::io::Writer(obj) {}
	
	// Constructors
	StringWriter::StringWriter()
		: java::io::Writer(
			"java.io.StringWriter",
			"()V"
		) {}
	StringWriter::StringWriter(jint arg0)
		: java::io::Writer(
			"java.io.StringWriter",
			"(I)V",
			arg0
		) {}
	
	// Methods
	java::io::StringWriter StringWriter::append(jchar arg0)
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/io/StringWriter;",
			arg0
		);
	}
	java::io::StringWriter StringWriter::append(jstring arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/StringWriter;",
			arg0
		);
	}
	java::io::StringWriter StringWriter::append(jstring arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;",
			arg0,
			arg1,
			arg2
		);
	}
	void StringWriter::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void StringWriter::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	java::lang::StringBuffer StringWriter::getBuffer()
	{
		return callObjectMethod(
			"getBuffer",
			"()Ljava/lang/StringBuffer;"
		);
	}
	jstring StringWriter::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void StringWriter::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void StringWriter::write(jstring arg0)
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StringWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void StringWriter::write(jstring arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io

