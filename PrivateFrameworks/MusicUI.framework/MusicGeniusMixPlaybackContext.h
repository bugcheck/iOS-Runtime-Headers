/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MPMediaItem, MPMediaPlaylist, NSMutableArray, NSString;

@interface MusicGeniusMixPlaybackContext : MusicQueryPlaybackContext <MusicGeniusMixQueueFeederDataSource> {
    NSMutableArray *_indexedSubQueries;
    MPMediaPlaylist *_mixPlaylist;
    MPMediaItem *_requiredInitialMediaItem;
    bool_finite;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) MPMediaPlaylist * mixPlaylist;
@property(retain) MPMediaItem * requiredInitialMediaItem;
@property(readonly) Class superclass;

+ (Class)queueFeederClass;

- (void).cxx_destruct;
- (void)_enumerateItemsBySubQueryUsingBlock:(id)arg1;
- (id)_generateNewItemsQuery:(id*)arg1 index:(unsigned long long)arg2;
- (unsigned long long)_indexOfSubQueryWithSubQueryIndex:(unsigned long long)arg1 searchOptions:(unsigned long long)arg2;
- (id)_queryForMediaItemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned long long)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)geniusMixQueueFeederMediaItemCount:(id)arg1;
- (id)initWithGeniusMixPlaylist:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id*)arg3;
- (id)mixPlaylist;
- (id)query;
- (id)requiredInitialMediaItem;
- (void)setRequiredInitialMediaItem:(id)arg1;

@end
