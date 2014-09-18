/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAStructuredDictationItem : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSArray * resultOptions;
@property(readonly) Class superclass;

+ (id)structuredDictationItem;
+ (id)structuredDictationItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)af_locationTranscriptionResults;
- (id)af_personTranscriptionResults;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)resultOptions;
- (void)setResultOptions:(id)arg1;

@end
