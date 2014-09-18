/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAUpdateRestrictions : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * refId;
@property(copy) NSArray * restrictionsToAdd;
@property(copy) NSArray * restrictionsToRemove;
@property(readonly) Class superclass;

+ (id)updateRestrictions;
+ (id)updateRestrictionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)restrictionsToAdd;
- (id)restrictionsToRemove;
- (void)setRestrictionsToAdd:(id)arg1;
- (void)setRestrictionsToRemove:(id)arg1;

@end
