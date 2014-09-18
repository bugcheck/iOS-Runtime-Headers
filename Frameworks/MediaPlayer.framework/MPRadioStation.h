/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, RadioStation;

@interface MPRadioStation : NSObject <NSCopying> {
    RadioStation *_station;
}

@property(getter=_station,readonly) RadioStation * _station;
@property(readonly) NSString * localizedDescription;
@property(readonly) NSString * localizedName;
@property(readonly) long long uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_station;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedName;
- (long long)uniqueIdentifier;

@end
