#pragma once

#include "./RSRuntimeException.hpp"

class JString;

namespace android::renderscript
{
	class RSDriverException : public android::renderscript::RSRuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RSDriverException(const char *className, const char *sig, Ts...agv) : android::renderscript::RSRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		RSDriverException(QJniObject obj);
		
		// Constructors
		RSDriverException(JString arg0);
		
		// Methods
	};
} // namespace android::renderscript

