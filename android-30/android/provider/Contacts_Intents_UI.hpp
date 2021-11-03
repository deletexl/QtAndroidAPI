#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class Contacts_Intents_UI : public JObject
	{
	public:
		// Fields
		static jstring FILTER_CONTACTS_ACTION();
		static jstring FILTER_TEXT_EXTRA_KEY();
		static jstring GROUP_NAME_EXTRA_KEY();
		static jstring LIST_ALL_CONTACTS_ACTION();
		static jstring LIST_CONTACTS_WITH_PHONES_ACTION();
		static jstring LIST_DEFAULT();
		static jstring LIST_FREQUENT_ACTION();
		static jstring LIST_GROUP_ACTION();
		static jstring LIST_STARRED_ACTION();
		static jstring LIST_STREQUENT_ACTION();
		static jstring TITLE_EXTRA_KEY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_Intents_UI(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Intents_UI(QAndroidJniObject obj);
		
		// Constructors
		Contacts_Intents_UI();
		
		// Methods
	};
} // namespace android::provider

