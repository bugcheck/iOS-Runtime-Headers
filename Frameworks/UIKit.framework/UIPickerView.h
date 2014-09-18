/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIPickerViewDataSource>, <UIPickerViewDelegate>, CALayer, NSMutableArray, NSString, UIColor, UIImageView, UIView, _UIPickerViewTestParameters;

@interface UIPickerView : UIView <UIPickerTableViewContainerDelegate, UITableViewDelegate, UIPickerViewScrollTesting, NSCoding, UITableViewDataSource> {
    struct { 
        unsigned int needsLayout : 1; 
        unsigned int delegateRespondsToNumberOfComponentsInPickerView : 1; 
        unsigned int delegateRespondsToNumberOfRowsInComponent : 1; 
        unsigned int delegateRespondsToDidSelectRow : 1; 
        unsigned int delegateRespondsToViewForRow : 1; 
        unsigned int delegateRespondsToTitleForRow : 1; 
        unsigned int delegateRespondsToAttributedTitleForRow : 1; 
        unsigned int delegateRespondsToWidthForComponent : 1; 
        unsigned int delegateRespondsToRowHeightForComponent : 1; 
        unsigned int showsSelectionBar : 1; 
        unsigned int allowsMultipleSelection : 1; 
        unsigned int allowSelectingCells : 1; 
        unsigned int soundsDisabled : 1; 
        unsigned int usesCheckedSelection : 1; 
        unsigned int skipsBackground : 1; 
    UIView *_backgroundView;
    UIImageView *_bottomGradient;
    UIView *_bottomLineView;
    _UIPickerViewTestParameters *_currentTestParameters;
    <UIPickerViewDataSource> *_dataSource;
    <UIPickerViewDelegate> *_delegate;
    NSMutableArray *_dividers;
    UIView *_foregroundView;
    CALayer *_maskGradientLayer;
    long long _numberOfComponents;
    } _pickerViewFlags;
    NSMutableArray *_selectionBars;
    NSMutableArray *_tables;
    UIColor *_textColor;
    UIColor *_textShadowColor;
    UIView *_topFrame;
    UIImageView *_topGradient;
    UIView *_topLineView;
    bool_isInLayoutSubviews;
    bool_magnifierEnabled;
    bool_usesModernStyle;
}

@property(setter=_setInLayoutSubviews:) bool _isInLayoutSubviews;
@property(setter=_setMagnifierEnabled:) bool _magnifierEnabled;
@property <UIPickerViewDataSource> * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property <UIPickerViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(getter=_highlightColor,setter=_setHighlightColor:,retain) UIColor * highlightColor;
@property(readonly) long long numberOfComponents;
@property bool showsSelectionIndicator;
@property(readonly) Class superclass;
@property(getter=_textColor,setter=_setTextColor:,retain) UIColor * textColor;
@property(getter=_textShadowColor,setter=_setTextShadowColor:,retain) UIColor * textShadowColor;
@property(getter=_usesModernStyle,setter=_setUsesModernStyle:) bool usesModernStyle;

+ (id)_modernCenterCellFont;
+ (id)_modernNonCenterCellFont;
+ (struct CGSize { double x1; double x2; })defaultSizeForCurrentOrientation;
+ (struct CGSize { double x1; double x2; })sizeForCurrentOrientationThatFits:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forInterfaceOrientation:(long long)arg2;

- (void)_UIAppearance_setBackgroundColor:(id)arg1;
- (void)_addMagnifierLinesForRowHeight:(double)arg1;
- (void)_completeCurrentTest;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)_contentView;
- (id)_createColumnWithTableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 rowHeight:(double)arg2;
- (id)_createTableWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forComponent:(long long)arg2;
- (id)_createViewForPickerPiece:(int)arg1;
- (id)_delegateAttributedTitleForRow:(long long)arg1 forComponent:(long long)arg2;
- (long long)_delegateNumberOfComponents;
- (long long)_delegateNumberOfRowsInComponent:(long long)arg1;
- (double)_delegateRowHeightForComponent:(long long)arg1;
- (id)_delegateTitleForRow:(long long)arg1 forComponent:(long long)arg2;
- (double)_delegateWidthForComponent:(long long)arg1 ofCount:(int)arg2 withSizeLeft:(double)arg3;
- (bool)_drawsBackground;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_effectiveTableViewFrameForColumn:(long long)arg1;
- (id)_highlightColor;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isInLayoutSubviews;
- (bool)_isLandscapeOrientation;
- (void)_iterateOnCurrentTest;
- (bool)_magnifierEnabled;
- (void)_noteScrollingFinishedForComponent:(long long)arg1;
- (id)_orientationImageSuffix;
- (void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_perspectiveTransform;
- (id)_popoverSuffix;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_resetSelectionOfTables;
- (void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(bool)arg3 notify:(bool)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionBarRectForHeight:(double)arg1;
- (id)_selectionBarSuffix;
- (void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(bool)arg3;
- (void)_sendSelectionChangedForComponent:(long long)arg1 notify:(bool)arg2;
- (void)_sendSelectionChangedFromTable:(id)arg1 notify:(bool)arg2;
- (void)_setDrawsBackground:(bool)arg1;
- (void)_setHighlightColor:(id)arg1;
- (void)_setInLayoutSubviews:(bool)arg1;
- (void)_setMagnifierEnabled:(bool)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_setTextShadowColor:(id)arg1;
- (void)_setUsesCheckedSelection:(bool)arg1;
- (void)_setUsesModernStyle:(bool)arg1;
- (bool)_shouldDrawWithModernStyle;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)_soundsEnabled;
- (double)_tableRowHeight;
- (id)_textColor;
- (id)_textShadowColor;
- (void)_updateSelectedRows;
- (void)_updateSound;
- (void)_updateWithOldSize:(struct CGSize { double x1; double x2; })arg1 newSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)_usesCheckSelection;
- (bool)_usesCheckedSelection;
- (bool)_usesModernStyle;
- (double)_wheelShift;
- (bool)allowsMultipleSelection;
- (long long)columnForTableView:(id)arg1;
- (id)createDividerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)dataSource;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultSize;
- (id)delegate;
- (void)didMoveToWindow;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)imageForPickerPiece:(int)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElementByDefault;
- (void)layoutSubviews;
- (long long)numberOfColumns;
- (long long)numberOfComponents;
- (long long)numberOfRowsInColumn:(long long)arg1;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (id)pickerImageNamePrefix;
- (void)reload;
- (void)reloadAllComponents;
- (void)reloadAllPickerPieces;
- (void)reloadComponent:(long long)arg1;
- (void)reloadData;
- (void)reloadDataForColumn:(int)arg1;
- (struct CGSize { double x1; double x2; })rowSizeForComponent:(long long)arg1;
- (double)scrollAnimationDuration;
- (void)selectRow:(int)arg1 inColumn:(int)arg2 animated:(bool)arg3;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(bool)arg3;
- (int)selectedRowForColumn:(int)arg1;
- (long long)selectedRowInComponent:(long long)arg1;
- (void)setAllowsMultipleSelection:(bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setNeedsLayout;
- (void)setShowsSelectionIndicator:(bool)arg1;
- (void)setSoundsEnabled:(bool)arg1;
- (bool)showsSelectionIndicator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableViewForColumn:(long long)arg1;
- (id)viewForRow:(long long)arg1 forComponent:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleRowsForColumn:(int)arg1;

@end
