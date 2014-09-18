/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class IKAppDocument, NSHashTable, NSOperationQueue, NSString, SKUIClientContext, SUAudioPlayer;

@interface SKUIPreviewDocumentController : NSObject <IKAppDocumentDelegate> {
    SUAudioPlayer *_audioPlayer;
    SKUIClientContext *_clientContext;
    IKAppDocument *_document;
    NSOperationQueue *_operationQueue;
    NSHashTable *_viewControllers;
}

@property(retain) SKUIClientContext * clientContext;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(getter=isPreviewActive,readonly) bool previewActive;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (void)_connectToAudioPlayer;
- (id)_operationQueue;
- (void)_playerSessionsDidChangeNotification:(id)arg1;
- (void)_reloadViewControllersWithPreviewStatus:(id)arg1 animated:(bool)arg2;
- (id)clientContext;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (bool)isPreviewActive;
- (id)newPreviewOverlayViewControllerWithBackgroundStyle:(long long)arg1;
- (void)setClientContext:(id)arg1;

@end
