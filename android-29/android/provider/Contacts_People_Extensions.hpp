#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class Contacts_People_Extensions : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		static JString DEFAULT_SORT_ORDER();
		static JString PERSON_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit Contacts_People_Extensions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_People_Extensions(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

