/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class ML3MusicLibrary, MPMediaLibraryArtwork, NSNumber, NSString;

@interface MPMediaLibraryArtworkRequest : NSObject {
    long long _artistType;
    long long _artworkType;
    NSNumber *_cachedArtworkSourceType;
    NSString *_cachedArtworkToken;
    ML3MusicLibrary *_library;
    MPMediaLibraryArtwork *_libraryArtwork;
    unsigned long long _libraryID;
    unsigned long long _mediaType;
    double _retrievalTime;
}

@property long long artistType;
@property(readonly) long long artworkType;
@property(copy) NSNumber * cachedArtworkSourceType;
@property(copy) NSString * cachedArtworkToken;
@property(readonly) ML3MusicLibrary * library;
@property(retain) MPMediaLibraryArtwork * libraryArtwork;
@property(readonly) unsigned long long libraryID;
@property(readonly) unsigned long long mediaType;
@property double retrievalTime;

- (void).cxx_destruct;
- (long long)artistType;
- (long long)artworkType;
- (id)cachedArtworkSourceType;
- (id)cachedArtworkToken;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLibrary:(id)arg1 identifier:(unsigned long long)arg2 artworkType:(long long)arg3;
- (id)initWithML3Library:(id)arg1 identifier:(unsigned long long)arg2 artworkType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)library;
- (id)libraryArtwork;
- (unsigned long long)libraryID;
- (unsigned long long)mediaType;
- (double)retrievalTime;
- (void)setArtistType:(long long)arg1;
- (void)setCachedArtworkSourceType:(id)arg1;
- (void)setCachedArtworkToken:(id)arg1;
- (void)setLibraryArtwork:(id)arg1;
- (void)setRetrievalTime:(double)arg1;

@end
