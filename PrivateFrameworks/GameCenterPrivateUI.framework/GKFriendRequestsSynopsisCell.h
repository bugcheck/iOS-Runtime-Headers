/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKLabel, GKPlayerMultiPhotoView, NSDictionary, UIImageView;

@interface GKFriendRequestsSynopsisCell : GKCollectionViewCell {
    UIImageView *_caretView;
    GKPlayerMultiPhotoView *_iconView;
    NSDictionary *_metricsOverrides;
    GKLabel *_subtitleLabel;
    GKLabel *_titleLabel;
}

@property(retain) UIImageView * caretView;
@property(retain) GKPlayerMultiPhotoView * iconView;
@property(retain) NSDictionary * metricsOverrides;
@property(retain) GKLabel * subtitleLabel;
@property(retain) GKLabel * titleLabel;

+ (id)padMetrics;
+ (id)phoneMetrics;
+ (void)registerCellClassesWithCollectionView:(id)arg1;

- (bool)canRemoveItem;
- (id)caretView;
- (void)dealloc;
- (void)didUpdateModel;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)metricsOverrides;
- (id)players;
- (void)prepareForReuse;
- (void)setCaretView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setMetricsOverrides:(id)arg1;
- (void)setPlayers:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end
