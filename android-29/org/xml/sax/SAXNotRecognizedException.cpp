#include "./SAXNotRecognizedException.hpp"

namespace org::xml::sax
{
	// Fields
	
	// QAndroidJniObject forward
	SAXNotRecognizedException::SAXNotRecognizedException(QAndroidJniObject obj) : org::xml::sax::SAXException(obj) {}
	
	// Constructors
	SAXNotRecognizedException::SAXNotRecognizedException()
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXNotRecognizedException",
			"()V"
		) {}
	SAXNotRecognizedException::SAXNotRecognizedException(jstring arg0)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXNotRecognizedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace org::xml::sax

