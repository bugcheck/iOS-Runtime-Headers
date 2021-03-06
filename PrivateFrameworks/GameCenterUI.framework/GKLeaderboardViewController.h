/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class <GKLeaderboardViewControllerDelegate>, NSString;

@interface GKLeaderboardViewController : GKGameCenterViewController {
    <GKLeaderboardViewControllerDelegate> *_leaderboardDelegate;
}

@property(copy) NSString * category;
@property <GKLeaderboardViewControllerDelegate> * leaderboardDelegate;
@property int timeScope;

- (id)category;
- (id)init;
- (id)leaderboardDelegate;
- (void)notifyDelegateOnWillFinish;
- (void)setCategory:(id)arg1;
- (void)setLeaderboardDelegate:(id)arg1;
- (void)setTimeScope:(int)arg1;
- (int)timeScope;

@end
