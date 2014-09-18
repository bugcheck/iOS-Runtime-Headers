/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVAccountInfoProvider>, <CoreDAVTaskManager>, NSError, NSSet, NSString;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask <CoreDAVContainerMultiGetSubmittable> {
    NSSet *_additionalPropElements;
    Class _appSpecificDataItemClass;
    NSString *_appSpecificDataProp;
    NSString *_appSpecificMultiGetCommand;
    NSString *_appSpecificMultiGetNameSpace;
    NSString *_appSpecificNamespace;
    NSSet *_deletedURLs;
    NSSet *_missingURLs;
    NSSet *_parsedContents;
    NSSet *_urls;
    bool_shouldIgnoreResponseErrors;
}

@property <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property(retain) NSSet * additionalPropElements;
@property(copy) id completionBlock;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSSet * deletedURLs;
@property(copy,readonly) NSString * description;
@property(readonly) NSError * error;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet * missingURLs;
@property(readonly) NSSet * parsedContents;
@property bool shouldIgnoreResponseErrors;
@property(readonly) Class superclass;
@property <CoreDAVTaskManager> * taskManager;
@property double timeoutInterval;

- (id)additionalPropElements;
- (id)copyAdditionalPropElements;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (id)deletedURLs;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 appSpecificDataItemClass:(Class)arg3;
- (id)missingURLs;
- (id)parsedContents;
- (id)requestBody;
- (void)setAdditionalPropElements:(id)arg1;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;
- (void)setShouldIgnoreResponseErrors:(bool)arg1;
- (bool)shouldIgnoreResponseErrors;

@end
