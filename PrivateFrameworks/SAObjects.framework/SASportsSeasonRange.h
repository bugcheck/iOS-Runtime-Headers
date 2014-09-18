/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSString;

@interface SASportsSeasonRange : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSDate * end;
@property(readonly) unsigned long long hash;
@property(copy) NSString * seasonType;
@property(copy) NSDate * start;
@property(readonly) Class superclass;

+ (id)seasonRange;
+ (id)seasonRangeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)end;
- (id)groupIdentifier;
- (id)seasonType;
- (void)setEnd:(id)arg1;
- (void)setSeasonType:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;

@end
