#pragma once

#include "../util/AndroidException.hpp"

class JString;

namespace android::content
{
	class IntentFilter_MalformedMimeTypeException : public android::util::AndroidException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IntentFilter_MalformedMimeTypeException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		IntentFilter_MalformedMimeTypeException(QJniObject obj);
		
		// Constructors
		IntentFilter_MalformedMimeTypeException();
		IntentFilter_MalformedMimeTypeException(JString arg0);
		
		// Methods
	};
} // namespace android::content

