#pragma once

#include "../../../java/lang/Exception.hpp"

class JString;
class JThrowable;

namespace org::xmlpull::v1
{
	class XmlPullParserException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit XmlPullParserException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		XmlPullParserException(QJniObject obj);
		
		// Constructors
		XmlPullParserException(JString arg0);
		XmlPullParserException(JString arg0, JObject arg1, JThrowable arg2);
		
		// Methods
		jint getColumnNumber() const;
		JThrowable getDetail() const;
		jint getLineNumber() const;
		void printStackTrace() const;
	};
} // namespace org::xmlpull::v1

