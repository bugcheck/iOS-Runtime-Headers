/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPUCompletionFooterViewDelegate>, MPStoreCompletionOffering, MPUItemOfferButton, NSString, UILabel, UISegmentedControl, UITapGestureRecognizer, UIView;

@interface MPUCompletionFooterView : UITableViewHeaderFooterView <SKUIItemOfferButtonDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    UIView *_bottomSeparatorView;
    NSString *_completeMyCollectionTitle;
    NSString *_completeSubtitleFormat;
    NSString *_completeTitleFormat;
    MPStoreCompletionOffering *_completionOffering;
    NSString *_completionTotalFormat;
    } _contentInsets;
    <MPUCompletionFooterViewDelegate> *_delegate;
    MPUItemOfferButton *_itemOfferButton;
    long long _preferredVariant;
    long long _style;
    UILabel *_subtitleLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSString *_title;
    UILabel *_titleLabel;
    UIView *_topSeparatorView;
    UISegmentedControl *_variantSegmentedControl;
    bool_purchasing;
    bool_showsVariants;
}

@property(retain) UIView * bottomSeparatorView;
@property(copy) NSString * completeMyCollectionTitle;
@property(copy) NSString * completeSubtitleFormat;
@property(copy) NSString * completeTitleFormat;
@property(retain) MPStoreCompletionOffering * completionOffering;
@property(copy) NSString * completionTotalFormat;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property(copy,readonly) NSString * debugDescription;
@property <MPUCompletionFooterViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) MPUItemOfferButton * itemOfferButton;
@property long long preferredVariant;
@property(getter=isPurchasing) bool purchasing;
@property bool showsVariants;
@property long long style;
@property(retain) UILabel * subtitleLabel;
@property(readonly) Class superclass;
@property(copy) NSString * title;
@property(retain) UILabel * titleLabel;
@property(retain) UIView * topSeparatorView;
@property(retain) UISegmentedControl * variantSegmentedControl;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)_buttonCancelConfirmationAction:(id)arg1;
- (void)_buttonPurchaseAction:(id)arg1;
- (void)_buttonShowConfirmationAction:(id)arg1;
- (void)_changedVariants:(id)arg1;
- (void)_configureViewsForCompletionOffering;
- (id)_createItemOfferButton;
- (void)_handleTapGesture:(id)arg1;
- (id)bottomSeparatorView;
- (id)completeMyCollectionTitle;
- (id)completeSubtitleFormat;
- (id)completeTitleFormat;
- (id)completionOffering;
- (id)completionTotalFormat;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)dealloc;
- (id)delegate;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isPurchasing;
- (id)itemOfferButton;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSeparatorsWithInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)layoutSubviews;
- (long long)preferredVariant;
- (void)setBottomSeparatorView:(id)arg1;
- (void)setCompleteMyCollectionTitle:(id)arg1;
- (void)setCompleteSubtitleFormat:(id)arg1;
- (void)setCompleteTitleFormat:(id)arg1;
- (void)setCompletionOffering:(id)arg1;
- (void)setCompletionTotalFormat:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemOfferButton:(id)arg1;
- (void)setPreferredVariant:(long long)arg1;
- (void)setPurchasing:(bool)arg1;
- (void)setShowsVariants:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopSeparatorView:(id)arg1;
- (void)setVariantSegmentedControl:(id)arg1;
- (bool)showsVariants;
- (long long)style;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;
- (id)topSeparatorView;
- (id)variantSegmentedControl;

@end
