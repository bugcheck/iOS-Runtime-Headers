/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MIPSmartPlaylistInfo, NSMutableArray, NSString;

@interface MIPPlaylist : PBCodable <NSCopying> {
    struct { 
        unsigned int storeId : 1; 
        unsigned int type : 1; 
        unsigned int hidden : 1; 
    NSMutableArray *_childPlaylists;
    } _has;
    NSMutableArray *_items;
    NSString *_name;
    MIPSmartPlaylistInfo *_smartPlaylistInfo;
    long long _storeId;
    int _type;
    bool_hidden;
}

@property(retain) NSMutableArray * childPlaylists;
@property bool hasHidden;
@property(readonly) bool hasName;
@property(readonly) bool hasSmartPlaylistInfo;
@property bool hasStoreId;
@property bool hasType;
@property bool hidden;
@property(retain) NSMutableArray * items;
@property(retain) NSString * name;
@property(retain) MIPSmartPlaylistInfo * smartPlaylistInfo;
@property long long storeId;
@property int type;

- (void).cxx_destruct;
- (void)addChildPlaylists:(id)arg1;
- (void)addItems:(id)arg1;
- (id)childPlaylists;
- (id)childPlaylistsAtIndex:(unsigned long long)arg1;
- (unsigned long long)childPlaylistsCount;
- (void)clearChildPlaylists;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHidden;
- (bool)hasName;
- (bool)hasSmartPlaylistInfo;
- (bool)hasStoreId;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)hidden;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setChildPlaylists:(id)arg1;
- (void)setHasHidden:(bool)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSmartPlaylistInfo:(id)arg1;
- (void)setStoreId:(long long)arg1;
- (void)setType:(int)arg1;
- (id)smartPlaylistInfo;
- (long long)storeId;
- (int)type;
- (void)writeTo:(id)arg1;

@end
