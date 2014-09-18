/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SANoteCreate : SADomainCommand {
}

@property(copy) NSString * contents;

+ (id)create;
+ (id)createWithDictionary:(id)arg1 context:(id)arg2;

- (id)contents;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setContents:(id)arg1;

@end
