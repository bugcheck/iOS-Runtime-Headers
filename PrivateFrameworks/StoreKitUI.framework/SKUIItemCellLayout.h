/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUICellImageView, SKUIItemOffer, SKUIItemOfferButton, SKUIItemOfferButtonAppearance, SKUIItemState, UIImage, UILabel, UIView;

@interface SKUIItemCellLayout : SKUICellLayout <SKUIItemOfferButtonDelegate> {
    SKUICellImageView *_iconImageView;
    SKUIItemOffer *_itemOffer;
    SKUIItemOfferButton *_itemOfferButton;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    UILabel *_itemOfferNoticeLabel;
    SKUIItemState *_itemState;
    UIView *_removeControlView;
    bool_hidesItemOfferButton;
    bool_highlighted;
    bool_iconImageHidden;
    bool_restricted;
    bool_selected;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool displaysItemOfferButton;
@property(readonly) unsigned long long hash;
@property(getter=isHighlighted) bool highlighted;
@property(retain) UIImage * iconImage;
@property(getter=isIconImageHidden) bool iconImageHidden;
@property(readonly) UIView * iconImageView;
@property(retain) SKUIItemOffer * itemOffer;
@property(readonly) SKUIItemOfferButton * itemOfferButton;
@property(retain) SKUIItemOfferButtonAppearance * itemOfferButtonAppearance;
@property(readonly) UILabel * itemOfferNoticeLabel;
@property(copy) NSString * itemOfferNoticeString;
@property(copy) SKUIItemState * itemState;
@property(readonly) UIView * removeControlView;
@property(getter=isRestricted) bool restricted;
@property(getter=isSelected) bool selected;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowItemOfferNotice;
- (void)_cancelItemOfferConfirmationAction:(id)arg1;
- (void)_getParentTableView:(id*)arg1 collectionView:(id*)arg2;
- (void)_itemOfferConfirmAction:(id)arg1;
- (id)_parentCollectionViewCell;
- (void)_reloadItemOfferButton:(bool)arg1;
- (void)_reloadItemOfferVisibility;
- (void)_showItemOfferConfirmationAction:(id)arg1;
- (bool)_useCloudButtonForItemState:(id)arg1;
- (void)dealloc;
- (bool)displaysItemOfferButton;
- (id)iconImage;
- (id)iconImageView;
- (bool)isHighlighted;
- (bool)isIconImageHidden;
- (bool)isRestricted;
- (bool)isSelected;
- (id)itemOffer;
- (id)itemOfferButton;
- (id)itemOfferButtonAppearance;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (id)itemOfferNoticeLabel;
- (id)itemOfferNoticeString;
- (id)itemState;
- (void)layoutForItemOfferChange;
- (void)prepareForReuse;
- (id)removeControlView;
- (void)resetLayout;
- (void)setBackgroundColor:(id)arg1;
- (void)setDisplaysItemOfferButton:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconImageHidden:(bool)arg1;
- (void)setItemOffer:(id)arg1;
- (void)setItemOfferButtonAppearance:(id)arg1;
- (void)setItemOfferNoticeString:(id)arg1;
- (void)setItemState:(id)arg1 animated:(bool)arg2;
- (void)setItemState:(id)arg1;
- (void)setRestricted:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
