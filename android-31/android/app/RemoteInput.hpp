#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::app
{
	class RemoteInput : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint EDIT_CHOICES_BEFORE_SENDING_AUTO();
		static jint EDIT_CHOICES_BEFORE_SENDING_DISABLED();
		static jint EDIT_CHOICES_BEFORE_SENDING_ENABLED();
		static JString EXTRA_RESULTS_DATA();
		static JString RESULTS_CLIP_LABEL();
		static jint SOURCE_CHOICE();
		static jint SOURCE_FREE_FORM_INPUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteInput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteInput(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void addDataResultToIntent(android::app::RemoteInput arg0, android::content::Intent arg1, JObject arg2);
		static void addResultsToIntent(JArray arg0, android::content::Intent arg1, android::os::Bundle arg2);
		static JObject getDataResultsFromIntent(android::content::Intent arg0, JString arg1);
		static android::os::Bundle getResultsFromIntent(android::content::Intent arg0);
		static jint getResultsSource(android::content::Intent arg0);
		static void setResultsSource(android::content::Intent arg0, jint arg1);
		jint describeContents() const;
		jboolean getAllowFreeFormInput() const;
		JObject getAllowedDataTypes() const;
		JArray getChoices() const;
		jint getEditChoicesBeforeSending() const;
		android::os::Bundle getExtras() const;
		JString getLabel() const;
		JString getResultKey() const;
		jboolean isDataOnly() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

