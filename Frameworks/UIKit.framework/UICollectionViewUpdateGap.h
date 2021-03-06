/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, UICollectionViewUpdateItem;

@interface UICollectionViewUpdateGap : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _beginningRect;
    NSMutableArray *_deleteItems;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _endingRect;
    UICollectionViewUpdateItem *_firstUpdateItem;
    NSMutableArray *_insertItems;
    UICollectionViewUpdateItem *_lastUpdateItem;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } beginningRect;
@property(readonly) NSArray * deleteItems;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } endingRect;
@property(retain) UICollectionViewUpdateItem * firstUpdateItem;
@property(readonly) BOOL hasInserts;
@property(readonly) NSArray * insertItems;
@property(readonly) BOOL isDeleteBasedGap;
@property(readonly) BOOL isSectionBasedGap;
@property(retain) UICollectionViewUpdateItem * lastUpdateItem;
@property(readonly) NSArray * updateItems;

+ (id)gapWithUpdateItem:(id)arg1;

- (void)addUpdateItem:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })beginningRect;
- (void)dealloc;
- (id)deleteItems;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endingRect;
- (id)firstUpdateItem;
- (BOOL)hasInserts;
- (id)init;
- (id)insertItems;
- (BOOL)isDeleteBasedGap;
- (BOOL)isSectionBasedGap;
- (id)lastUpdateItem;
- (void)setBeginningRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEndingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFirstUpdateItem:(id)arg1;
- (void)setLastUpdateItem:(id)arg1;
- (id)updateItems;

@end
