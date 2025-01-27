#pragma once

#include "../JObject.hpp"

namespace android
{
	class R_bool : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit R_bool(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_bool(QJniObject obj);
		
		// Constructors
		R_bool();
		
		// Methods
	};
} // namespace android

