/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSDictionary, NSSet;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask {
    NSDictionary *_extraAttributes;
    NSSet *_searchItems;
    bool_applyToPrincipalCollectionSet;
}

@property bool applyToPrincipalCollectionSet;
@property(retain) NSDictionary * extraAttributes;
@property(retain) NSSet * searchItems;

- (bool)applyToPrincipalCollectionSet;
- (void)dealloc;
- (id)extraAttributes;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2;
- (id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(bool)arg4 extraAttributes:(id)arg5;
- (id)requestBody;
- (id)searchItems;
- (void)setApplyToPrincipalCollectionSet:(bool)arg1;
- (void)setExtraAttributes:(id)arg1;
- (void)setSearchItems:(id)arg1;

@end
