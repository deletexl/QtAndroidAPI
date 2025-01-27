#pragma once

#include "./Violation.hpp"

namespace android::content
{
	class Intent;
}

namespace android::os::strictmode
{
	class UnsafeIntentLaunchViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnsafeIntentLaunchViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		UnsafeIntentLaunchViolation(QJniObject obj);
		
		// Constructors
		UnsafeIntentLaunchViolation(android::content::Intent arg0);
		
		// Methods
		android::content::Intent getIntent() const;
	};
} // namespace android::os::strictmode

