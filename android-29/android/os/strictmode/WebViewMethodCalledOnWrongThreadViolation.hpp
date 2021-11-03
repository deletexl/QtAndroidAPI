#pragma once

#include "./Violation.hpp"

class JThrowable;

namespace android::os::strictmode
{
	class WebViewMethodCalledOnWrongThreadViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebViewMethodCalledOnWrongThreadViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		WebViewMethodCalledOnWrongThreadViolation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

