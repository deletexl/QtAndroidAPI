#pragma once

#include "./Observable.hpp"

namespace android::database
{
	class DataSetObservable : public android::database::Observable
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DataSetObservable(const char *className, const char *sig, Ts...agv) : android::database::Observable(className, sig, std::forward<Ts>(agv)...) {}
		DataSetObservable(QJniObject obj);
		
		// Constructors
		DataSetObservable();
		
		// Methods
		void notifyChanged() const;
		void notifyInvalidated() const;
	};
} // namespace android::database

