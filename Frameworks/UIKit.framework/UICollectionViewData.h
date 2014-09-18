/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, UICollectionView, UICollectionViewLayout;

@interface UICollectionViewData : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGSize { 
        double width; 
        double height; 
    struct { 
        unsigned int contentSizeIsValid : 1; 
        unsigned int itemCountsAreValid : 1; 
        unsigned int layoutIsPrepared : 1; 
        unsigned int layoutLocked : 1; 
    NSMutableArray *_clonedCellAttributes;
    NSMutableArray *_clonedDecorationAttributes;
    NSMutableArray *_clonedSupplementaryAttributes;
    UICollectionView *_collectionView;
    } _collectionViewDataFlags;
    } _contentSize;
    NSMutableDictionary *_decorationLayoutAttributes;
    NSMutableIndexSet *_globalIndexesOfItemsAwaitingValidation;
    id *_globalItems;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    long long _lastResultForNumberOfItemsBeforeSection;
    long long _lastSectionTestedForNumberOfItemsBeforeSection;
    UICollectionViewLayout *_layout;
    long long _numItems;
    long long _numSections;
    NSMapTable *_screenPageMap;
    long long *_sectionItemCounts;
    NSMutableDictionary *_supplementaryLayoutAttributes;
    } _validLayoutRect;
}

@property(readonly) NSArray * clonedCellAttributes;
@property(readonly) NSArray * clonedDecorationAttributes;
@property(readonly) NSArray * clonedSupplementaryAttributes;
@property(readonly) bool layoutIsPrepared;
@property(getter=isLayoutLocked) bool layoutLocked;

+ (void)initialize;

- (void)_loadEverything;
- (void)_prepareToLoadData;
- (id)_screenPageForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setLayoutAttributes:(id)arg1 atGlobalItemIndex:(int)arg2;
- (void)_setupMutableIndexPath:(id*)arg1 forGlobalItemIndex:(int)arg2;
- (void)_updateItemCounts;
- (void)_validateContentSize;
- (void)_validateItemCounts;
- (id)clonedCellAttributes;
- (id)clonedDecorationAttributes;
- (id)clonedSupplementaryAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collectionViewContentRect;
- (void)dealloc;
- (id)existingSupplementaryLayoutAttributes;
- (id)existingSupplementaryLayoutAttributesInSection:(long long)arg1;
- (long long)globalIndexForItemAtIndexPath:(id)arg1;
- (id)indexPathForItemAtGlobalIndex:(long long)arg1;
- (id)initWithCollectionView:(id)arg1 layout:(id)arg2;
- (void)invalidate:(bool)arg1;
- (void)invalidateDecorationIndexPaths:(id)arg1;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (void)invalidateSupplementaryIndexPaths:(id)arg1;
- (bool)isLayoutLocked;
- (id)knownDecorationElementKinds;
- (id)knownSupplementaryElementKinds;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForElementsInSection:(long long)arg1;
- (id)layoutAttributesForGlobalItemIndex:(long long)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (bool)layoutIsPrepared;
- (long long)numberOfItems;
- (long long)numberOfItemsBeforeSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForGlobalItemIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForItemAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setLayoutLocked:(bool)arg1;
- (void)validateDecorationViews;
- (void)validateLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)validateSupplementaryViews;

@end
