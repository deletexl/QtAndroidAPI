#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace java::text
{
	class ParseException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParseException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ParseException(QAndroidJniObject obj);
		
		// Constructors
		ParseException(jstring arg0, jint arg1);
		
		// Methods
		jint getErrorOffset();
	};
} // namespace java::text
