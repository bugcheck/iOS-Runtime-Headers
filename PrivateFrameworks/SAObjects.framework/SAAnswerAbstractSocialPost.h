/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSDate, NSString, NSURL;

@interface SAAnswerAbstractSocialPost : AceObject <SAAceSerializable> {
}

@property(copy) NSString * author;
@property(copy) NSString * authorTitle;
@property(copy) NSArray * comments;
@property(copy) NSDate * dateCreated;
@property(copy) NSDate * dateModified;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSURL * icon;
@property long long rank;
@property(readonly) Class superclass;
@property(copy) NSString * text;
@property(copy) NSString * title;

+ (id)abstractSocialPost;
+ (id)abstractSocialPostWithDictionary:(id)arg1 context:(id)arg2;

- (id)author;
- (id)authorTitle;
- (id)comments;
- (id)dateCreated;
- (id)dateModified;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)icon;
- (long long)rank;
- (void)setAuthor:(id)arg1;
- (void)setAuthorTitle:(id)arg1;
- (void)setComments:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDateModified:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setRank:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)text;
- (id)title;

@end
