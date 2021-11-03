#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class PrintStream;
}

namespace android::util
{
	class PrintStreamPrinter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintStreamPrinter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintStreamPrinter(QAndroidJniObject obj);
		
		// Constructors
		PrintStreamPrinter(java::io::PrintStream arg0);
		
		// Methods
		void println(jstring arg0);
	};
} // namespace android::util

