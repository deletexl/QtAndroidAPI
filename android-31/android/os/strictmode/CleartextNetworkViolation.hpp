#pragma once

#include "./Violation.hpp"

namespace android::os::strictmode
{
	class CleartextNetworkViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CleartextNetworkViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		CleartextNetworkViolation(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

