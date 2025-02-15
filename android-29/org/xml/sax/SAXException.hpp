#pragma once

#include "../../../java/lang/Exception.hpp"

class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang
{
	class Exception;
}
class JString;
class JThrowable;

namespace org::xml::sax
{
	class SAXException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SAXException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		SAXException(QJniObject obj);
		
		// Constructors
		SAXException();
		SAXException(java::lang::Exception arg0);
		SAXException(JString arg0);
		SAXException(JString arg0, java::lang::Exception arg1);
		
		// Methods
		JThrowable getCause() const;
		java::lang::Exception getException() const;
		JString getMessage() const;
		JString toString() const;
	};
} // namespace org::xml::sax

