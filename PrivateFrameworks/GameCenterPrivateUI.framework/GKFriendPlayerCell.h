/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKLabel, NSString;

@interface GKFriendPlayerCell : GKBasePlayerCell {
    GKLabel *_statusLabel;
    GKLabel *_whenLabel;
}

@property(retain) GKLabel * statusLabel;
@property(retain) GKLabel * whenLabel;
@property NSString * whenText;

+ (Class)cellClassForPlayer:(id)arg1;
+ (void)registerCellClassesWithCollectionView:(id)arg1;

- (void)dealloc;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setStatusLabel:(id)arg1;
- (void)setWhenLabel:(id)arg1;
- (void)setWhenText:(id)arg1;
- (id)statusLabel;
- (id)whenLabel;
- (id)whenText;

@end
