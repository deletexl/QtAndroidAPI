#pragma once

#include "../../../java/lang/RuntimeException.hpp"

class JString;

namespace android::icu::util
{
	class IllformedLocaleException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllformedLocaleException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		IllformedLocaleException(QJniObject obj);
		
		// Constructors
		IllformedLocaleException();
		IllformedLocaleException(JString arg0);
		IllformedLocaleException(JString arg0, jint arg1);
		
		// Methods
		jint getErrorIndex() const;
	};
} // namespace android::icu::util

