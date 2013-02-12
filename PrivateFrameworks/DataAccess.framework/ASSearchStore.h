/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableArray, NSNumber, NSString;

@interface ASSearchStore : ASItem {
    NSString *_range;
    NSMutableArray *_results;
    NSNumber *_status;
    NSNumber *_total;
}

@property(copy) NSString *range;
@property(retain) NSArray *results;
@property(copy) NSNumber *status;
@property(copy) NSNumber *total;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (void)addResult:(id)arg1;
- (id)asParseRules;
- (void)dealloc;
- (id)description;
- (id)range;
- (id)results;
- (void)setRange:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTotal:(id)arg1;
- (id)status;
- (id)total;

@end