#pragma once

#include "../../java/lang/Exception.hpp"

class JString;

namespace android::media
{
	class MediaCasException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCasException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		MediaCasException(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

