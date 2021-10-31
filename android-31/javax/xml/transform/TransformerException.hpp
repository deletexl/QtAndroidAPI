#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"

namespace java::io
{
	class PrintStream;
}
namespace java::io
{
	class PrintWriter;
}
namespace java::security
{
	class ProtectionDomain;
}

namespace javax::xml::transform
{
	class TransformerException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TransformerException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		TransformerException(QAndroidJniObject obj);
		
		// Constructors
		TransformerException(jstring arg0);
		TransformerException(jthrowable arg0);
		TransformerException(jstring arg0, jthrowable arg1);
		TransformerException(jstring arg0, __JniBaseClass arg1);
		TransformerException(jstring arg0, __JniBaseClass arg1, jthrowable arg2);
		
		// Methods
		jthrowable getCause();
		jthrowable getException();
		jstring getLocationAsString();
		__JniBaseClass getLocator();
		jstring getMessageAndLocation();
		jthrowable initCause(jthrowable arg0);
		void printStackTrace();
		void printStackTrace(java::io::PrintStream arg0);
		void printStackTrace(java::io::PrintWriter arg0);
		void setLocator(__JniBaseClass arg0);
	};
} // namespace javax::xml::transform
