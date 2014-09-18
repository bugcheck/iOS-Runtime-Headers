/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKStarRatingAndLabelView, NSDate, NSMutableArray, NSString, UIImage, UIImageView, UILabel;

@interface MKPlaceReviewsViewCell : UITableViewCell {
    UILabel *_authorLabel;
    UILabel *_dateLabel;
    UIImageView *_pictureView;
    UILabel *_reviewLabel;
    NSMutableArray *_scaledConstraints;
    MKStarRatingAndLabelView *_starView;
}

@property NSString * author;
@property NSDate * date;
@property UIImage * picture;
@property unsigned long long rating;
@property NSString * reviewText;
@property(retain) NSMutableArray * scaledConstraints;

+ (double)intrinsicContentHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)fontForAuthor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (id)scaledConstraints;
- (void)setAuthor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setPicture:(id)arg1;
- (void)setRating:(unsigned long long)arg1;
- (void)setReviewText:(id)arg1;
- (void)setScaledConstraints:(id)arg1;
- (void)updateConstraints;

@end
