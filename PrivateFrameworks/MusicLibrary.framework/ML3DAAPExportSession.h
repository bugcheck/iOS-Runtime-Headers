/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class DKDAAPWriter;

@interface ML3DAAPExportSession : ML3ExportSession {
    unsigned int _currentListingContainerCode;
    unsigned int _currentSongsContainerCode;
    DKDAAPWriter *_daapWriter;
}

- (void).cxx_destruct;
- (void)_endCurrentListingContainer;
- (void)_endCurrentSongsContainer;
- (id)_playlistExportItemForPersistentId:(long long)arg1;
- (void)_setListingContainer:(unsigned int)arg1;
- (void)_setSongsContainer:(unsigned int)arg1;
- (id)_trackExportItemForPersistendId:(long long)arg1;
- (id)begin;
- (id)end;
- (id)exportPlaylist:(unsigned long long)arg1;
- (id)exportPlaylistDeleted:(unsigned long long)arg1;
- (id)exportTrack:(unsigned long long)arg1;
- (id)exportTrackDeleted:(unsigned long long)arg1;
- (id)initWithLibrary:(id)arg1 outputStream:(id)arg2;

@end
