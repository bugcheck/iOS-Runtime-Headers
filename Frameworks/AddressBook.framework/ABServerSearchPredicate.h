/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class <ABPredicateDelegate>, DAContactsSearchQuery, DADConnection, NSConditionLock, NSMutableArray, NSString;

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer> {
    NSString *_accountIdentifier;
    DADConnection *_connection;
    <ABPredicateDelegate> *_delegate;
    NSConditionLock *_doneLock;
    int _error;
    DAContactsSearchQuery *_searchQuery;
    NSMutableArray *_searchResults;
    NSString *_searchString;
    void *_source;
    bool_includePhotosInResults;
    bool_includeSourceInResults;
}

@property(copy) NSString * accountIdentifier;
@property(retain) DADConnection * connection;
@property <ABPredicateDelegate> * delegate;
@property(readonly) int error;
@property bool includePhotosInResults;
@property bool includeSourceInResults;
@property(copy) NSString * searchString;
@property void* source;

- (int)_errorForDAStatusCode:(long long)arg1;
- (void)_searchQueryIsDone;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg1 inAddressBook:(void*)arg2 withDelegate:(id)arg3;
- (id)accountIdentifier;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (int)error;
- (bool)includePhotosInResults;
- (bool)includeSourceInResults;
- (id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(bool)arg4 includePhotosInResults:(bool)arg5;
- (id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(bool)arg4;
- (id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3;
- (void)runPredicate;
- (void)runPredicateWithDelegate:(id)arg1;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (id)searchString;
- (void)setAccountIdentifier:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIncludePhotosInResults:(bool)arg1;
- (void)setIncludeSourceInResults:(bool)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSource:(void*)arg1;
- (void*)source;

@end
