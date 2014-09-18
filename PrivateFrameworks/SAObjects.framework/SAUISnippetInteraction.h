/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAUISnippetInteraction : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * refId;
@property(copy) NSString * requestId;
@property(copy) NSString * snippetId;
@property(readonly) Class superclass;

+ (id)snippetInteraction;
+ (id)snippetInteractionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (void)setSnippetId:(id)arg1;
- (id)snippetId;

@end
