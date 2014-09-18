/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKNearbyAppsFlowLayout : UICollectionViewFlowLayout {
    bool_snapsToItemBoundaries;
    bool_snapsToItemCenters;
}

@property bool snapsToItemBoundaries;
@property bool snapsToItemCenters;

+ (double)snapToBoundariesDecelerationRate;

- (id)init;
- (void)setSnapsToItemBoundaries:(bool)arg1;
- (void)setSnapsToItemCenters:(bool)arg1;
- (bool)snapsToItemBoundaries;
- (bool)snapsToItemCenters;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end
