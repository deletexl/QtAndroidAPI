#pragma once

#include "./Activity.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class AliasActivity : public android::app::Activity
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AliasActivity(const char *className, const char *sig, Ts...agv) : android::app::Activity(className, sig, std::forward<Ts>(agv)...) {}
		AliasActivity(QJniObject obj);
		
		// Constructors
		AliasActivity();
		
		// Methods
	};
} // namespace android::app

