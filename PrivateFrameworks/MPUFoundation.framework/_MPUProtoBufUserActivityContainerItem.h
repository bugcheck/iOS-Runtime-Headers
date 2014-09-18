/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class MIPMultiverseIdentifier;

@interface _MPUProtoBufUserActivityContainerItem : PBCodable <NSCopying> {
    struct { 
        unsigned int containerItemType : 1; 
    int _containerItemType;
    } _has;
    MIPMultiverseIdentifier *_selectedMultiverseIdentifier;
    MIPMultiverseIdentifier *_visualReferenceMultiverseIdentifier;
}

@property int containerItemType;
@property bool hasContainerItemType;
@property(readonly) bool hasSelectedMultiverseIdentifier;
@property(readonly) bool hasVisualReferenceMultiverseIdentifier;
@property(retain) MIPMultiverseIdentifier * selectedMultiverseIdentifier;
@property(retain) MIPMultiverseIdentifier * visualReferenceMultiverseIdentifier;

- (void).cxx_destruct;
- (int)containerItemType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainerItemType;
- (bool)hasSelectedMultiverseIdentifier;
- (bool)hasVisualReferenceMultiverseIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)selectedMultiverseIdentifier;
- (void)setContainerItemType:(int)arg1;
- (void)setHasContainerItemType:(bool)arg1;
- (void)setSelectedMultiverseIdentifier:(id)arg1;
- (void)setVisualReferenceMultiverseIdentifier:(id)arg1;
- (id)visualReferenceMultiverseIdentifier;
- (void)writeTo:(id)arg1;

@end
