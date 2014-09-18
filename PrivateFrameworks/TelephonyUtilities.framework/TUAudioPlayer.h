/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class <TUAudioPlayerDelegateProtocol>;

@interface TUAudioPlayer : NSObject {
    <TUAudioPlayerDelegateProtocol> *_delegate;
}

@property <TUAudioPlayerDelegateProtocol> * delegate;
@property(readonly) bool playingSound;

- (void)dealloc;
- (id)delegate;
- (void)playSelectedSound;
- (void)playSound:(int)arg1 numOfLoops:(int)arg2 pauseDuration:(double)arg3;
- (bool)playingSound;
- (void)setDelegate:(id)arg1;
- (void)stop;

@end
