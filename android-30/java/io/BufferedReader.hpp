#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Reader.hpp"

namespace java::io
{
	class Reader;
}

namespace java::io
{
	class BufferedReader : public java::io::Reader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BufferedReader(const char *className, const char *sig, Ts...agv) : java::io::Reader(className, sig, std::forward<Ts>(agv)...) {}
		BufferedReader(QAndroidJniObject obj);
		
		// Constructors
		BufferedReader(java::io::Reader arg0);
		BufferedReader(java::io::Reader arg0, jint arg1);
		
		// Methods
		void close();
		__JniBaseClass lines();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jstring readLine();
		jboolean ready();
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace java::io
