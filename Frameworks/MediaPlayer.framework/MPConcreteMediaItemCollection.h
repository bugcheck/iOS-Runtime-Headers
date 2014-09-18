/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPConcreteMediaEntityPropertiesCache, MPMediaItem, MPMediaQuery;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection <NSCoding, NSCopying, MPCacheableConcreteMediaEntity> {
    long long _grouping;
    long long _identifier;
    MPMediaQuery *_itemsQuery;
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;
    MPMediaItem *_representativeItem;
}

@property(retain,readonly) MPConcreteMediaEntityPropertiesCache * cachedPropertyValues;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5 propertiesCache:(id)arg6;
- (id)cachedPropertyValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (long long)groupingType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(long long)arg1 itemsQuery:(id)arg2 grouping:(long long)arg3;
- (id)initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (void)invalidateCachedProperties;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsQuery;
- (id)mediaLibrary;
- (unsigned long long)persistentID;
- (id)representativeItem;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(id)arg3;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
